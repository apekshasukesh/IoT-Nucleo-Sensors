/*----------------------------------------------------------------------------
LAB EXERCISE - Nucleo sensors shield
 ----------------------------------------
	In this exercise we will read the environmental sensors on the Nucleo sensors shield (X-NUCLEO-IKS01A1)
	with the help of the ST Nucleo Sensor Shield library which is compatible with the MBED API.
	Then we will send the measurements via USB to our PC using serial communication.
	We can then display the results using a terminal emulation program (e.g. Termite).

	At the same time the program blinks the on board LED to show alivness.


	GOOD LUCK!
 *----------------------------------------------------------------------------*/

#include "mbed.h"
#include "x_cube_mems.h"

// Create a DigitalOut objects for the LED

// Create a Serial objects to communicate via USB

// Create 2 Ticker objects for recurring interrupts. One for blink a LED and the other one to update the sensor lectures periodicly

// Initialize variables

// Handler for the aliveness LED; to be called every 0.5s

// Handler for the measurements update; rise a flag every 3 seconds



int main() {

    /* Create sensor shield object */

	  /* Attach a function to be called by the Ticker objects at a specific interval in seconds */


    while(1) {

			/* Check for the measurements update flag */

        /* Read the environmental sensors */

				/* Calculate temperature in Fahrenheit and Kelvins */

				/*Send data through serial communication */

				/* Turn down the measurements update flag */

		 /*Wait for interrupts*/
   }
}
// *******************************ARM University Program Copyright © ARM Ltd 2016*************************************
