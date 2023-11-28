const nums = [5, 2, 86, 34, 58, 25, 63, 45, 21, 1, 70, 50];

for (let i = 0; i < nums.length - 1; i++) {
  for (let j = i + 1; j < nums.length; j++) {
    if (nums[i] > nums[j]) {
      let temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
    }
  }
}
console.log(nums);
