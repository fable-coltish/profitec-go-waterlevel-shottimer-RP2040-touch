# Waterlevel-indicator and shot-timer for the Profitec GO adapted to Waveshare RP2040-Touch-LCD-1.28

Forked from https://github.com/lspr98/profitec-go-waterlevel-shottimer refer to the README and manual (https://github.com/lspr98/profitec-go-waterlevel-shottimer/blob/main/doc/manual/manual.pdf)

I inadvertently purchased the TOUCH version of the RP2040-LCD-1.28 and found that the pin-out assignments on this version of the board are not the same as on the non-touch version.

Problem symptom: when I initially flashed the firmware (without making any changes) the display would not output anything. The display would blink at the initial flash and then the LCD would remain all dark, with the backlight on.

Solution:
Fixing the source code LCD mapping:
After going through the documentation for the touch board I managed to get the screen to work by changing the SPI configuration in the source code file -> "include / display.h" on Line 13:

From -> #define LCD_RST_PIN     (12)
To -> #define LCD_RST_PIN     (13)

For reference, this is based on the LCD mappings on the board schematics pdf. All other mappings for the LCD appear to be correct in the existing source code.

Upon flashing the new updated source code, the display should start up as expected, i.e.: as described in the manual, the display should show the orange ring with a question mark indicating a missing fill-level sensor, and the shot timer starts after shaking the device for more than two seconds.

Fixing the TX and RX mapping:
For the TX and RX inputs for the water level sensor, reassign the GPIO pins to GPIO16 and GPIO17 in the source code. There are three required changes:

Instead of soldering the blue and green wires to the board, use the wiring harness that comes with the microprocessor and connect the TX to GPIO16 and the RX to GPIO17 (not sure if all wiring harnesses for this board are made the same, but this would mean the yellow wire from the sensor connects to the brown wire from the harness, and the white wire from the sensor to the orange wire from the harness).

In the file -> "include / levelsensor.h" change the GPIO assignments on line 4 and 5:

From:
#define PIN_LEVELSENSOR_TX 4u
#define PIN_LEVELSENSOR_RX 5u

To:
#define PIN_LEVELSENSOR_TX 16u
#define PIN_LEVELSENSOR_RX 17u

In the file -> "src / levelsensor.cpp change any mention of uart1 to uart0 in the entire document.
Those two changes should allow the Waveshare RP2040-Touch-LCD-1.28 to work as intended by the author. If the display still shows the initial display with no change (i.e. orange circle with question mark), switch your RX / TX wires around and power cycle the processor. The working state should show a blue circle with a percentage sign at the bottom and a number in the middle when your hand is put in front of the sensor.

Attempted but failed alternative solution:

As an alternative, I also attempted to use the original source code by soldering wires to the GPIO 4 and GPIO 5 connectors on the board as seen on the schematic. More specifically, the #2 pads on headers P4 and P5 seen here:

header P4 and header P5

However, the processor does not seem to recognise the water level sensor through this method. I suspect that this is because the GPIOs are hidden behind the resistors and diodes as shown in the schematics.

Any Arduino / RP2040 experts out there to provide some tips? I can test it out on my board.
