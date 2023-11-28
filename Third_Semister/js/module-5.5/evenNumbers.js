const evenNumbers = (arr) => {
  const even = [];

  for (let i = 0; i < arr.length; i++) {
    const element = arr[i];

    if (element % 2 === 0) {
      even.push(element);
    }
  }

  return even;
};

const arr = [1, 3, 5, 2, 10, 20];

console.log(evenNumbers(arr));
