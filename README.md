# Sheep Counter

This is a sheep counter project that i made using two ultrasonic sensors and an arduino uno.

### Some assumptions:

- Initially, the farm is empty and all the sheep are outside.
- Only one sheep can go inside or come outside at a time from the gate.

### Working:

- The gate has been installed with two ultrasonic sensors that get triggered if an object is within specified distance.
- The sensors are placed such that the dont get triggered simmultaneously, and the second sensor gets triggered only when the sheep is partly inside the gate (and hence has already triggered the first sensor).
- Hence, the program manipulates the sequential sensor input to find whether a sheep is going inside or coming outside.
- Simultaneously, respective counter variables are incremented/decremented and the output is printed to the serial monitor.