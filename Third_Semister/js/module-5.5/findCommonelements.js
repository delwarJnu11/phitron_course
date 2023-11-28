const findCommon = (arr1, arr2) => {
  const common = [];
  for (let i = 0; i < arr1.length; i++) {
    if (arr2.includes(arr1[i])) {
      common.push(arr1[i]);
    }
  }
  return common;
};

const arr1 = [1, 2, 3, 4, 5, 9];
const arr2 = [3, 4, 5, 6, 7, 8, 9];
console.log(findCommon(arr1, arr2));
