const largestNumber = (arr) => {
  let largest = arr[0];

  for (let i = 0; i < arr.length; i++) {
    const element = arr[i];
    if (element > largest) {
      largest = element;
    }
  }
  return largest;
};

const arr = [10, 15, 100, 20, 200, 5001, 600, 10000, 20000];
console.log("Largest Number is -> ", largestNumber(arr));
