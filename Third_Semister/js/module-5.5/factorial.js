const factorial = (num) => {
  //base case
  if (num === 0 || num === 1) {
    return 1;
  }
  let fact = 1;
  for (let i = 1; i <= num; i++) {
    fact *= i;
  }
  return fact;
};

console.log(factorial(5));
