// (a) ((2 * i) / 5) + (4 * j) - (3 % i) + j - 2; 
// --> 3 + 20 - 3 + 5 -2; 
// --> 23

// (b) c = (i - 3 * x)/(y + 2 * j)/x-y
// --> c = (((i - (3 * x)) / (y + (2 *j))) / x) - y
// --> c = ((6.5 / 8.5) / 0.5) + 1.5
// --> c = 3.02 

// (c) ++i + j-- * ++c / -y-- ; 
// --> 9 + 5 * 3.0 / -1.5 
// --> 9 + 15 / 1.5
// --> 9 + 10
// --> 19 (Only value of prefix is changed is first, postfix operation won't reflect in the numerical, only in output.)
// Post-fix notations of j and y are 4 and -2.5 while drawing the output. 

// (d) j-- - --i * (-d/x)
// --> 5 - 7 * (-12.0)
// --> 89.0
// Post-fix notations of j is 4 while drawing the output. 