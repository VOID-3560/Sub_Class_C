// 17-10-24

// loop are understood as repeating code block
// the compiler unrolls the loop
// comparision and incrementation are saved in case of hard writing the repeting code
// comparision are expensive 
// in order to write optimal performing code u must reduce number ofcomparision
// loops are repeated block of code 
// ex 1234

// reverse = 0
// rem = 1234 % 10
// rem = 4
// reverse = 0* 10 + 4
// reverse = 4
// num / 10 = 123 as integer

// reverse = 4
// rem = 123 % 10
// rem = 3
// reverse = 4* 10 + 3
// reverse = 43
// num / 10 = 12 as integer

// reverse = 43
// rem = 12 % 10
// rem = 2
// reverse = 43* 10 + 2
// reverse = 432
// num / 10 = 1 as integer

// reverse = 432
// rem = 1 % 10
// rem = 1
// reverse = 432* 10 + 1
// reverse = 4321
// num / 10 = 0 as integer
