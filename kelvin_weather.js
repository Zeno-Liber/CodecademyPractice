// START OF VARIABLES BLOCK

// constant value for the Kelvin temp scale
const kelvin = 300;
// constant value for the Celsius scale
const celsius = kelvin - 273;
// non constant data type to allow it to be updated for rounding
let fahrenheit = celsius * (9 / 5) + 32;
// rounding to not receive a decimal number
fahrenheit = Math.floor(fahrenheit);
// non constant for the Newton scale
let newton = celsius * (33/100);
// rounding to not receive a decimal number
newton = Math.floor(newton);

// END OF VARIABLES BLOCK

// START OF CONSOLE OUTPUT BLOCK

// to display the temp in fahrenheit 
console.log(`The temperature is ${fahrenheit} degrees Fahrenheit.`);
// to display celsius
console.log(`The temperature is ${celsius} degrees in Celsius.`);
// to display newton
console.log(`The temperature is ${newton} degrees in Newton.`)

// END OF CONSOLE OUTPUT BLOCK
