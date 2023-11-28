const removeDuplicates = (arr) => {
  const unique = [];

  //   sort the array first
  for (let i = 0; i < arr.length - 1; i++) {
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[i] > arr[j]) {
        [arr[j], arr[i]] = [arr[i], arr[j]];
      }
    }
  }

  for (let i = 0; i < arr.length; i++) {
    if (!unique.includes(arr[i])) {
      unique.push(arr[i]);
    }
  }
  return unique;
};
const arr = [1, 2, 5, 8, 3, 9, 1, 5, 6, 2, 4, 5, 6, 7];

console.log(removeDuplicates(arr));
