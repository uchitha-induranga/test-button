#include <Control_Surface.h> // Include the library

// Patch Selector selecting patches 12, 37, 49, 50, 51, 52
// when buttons on pins  2, 3, 4, 5, 6, 7 are pressed, respectively
SelectorPC sel( { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 }, {11,12 } );

void setup() {} // Nothing to set up

void loop() {
  // Refresh the control surface, send a Program Change
  // event when the patch number changes
  Control_Surface.refresh();
}
