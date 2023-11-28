const nums = [1, 2, 3, 3, 5, 8, 9, 4, 2];

for (let i = 0; i < nums.length; i++) {
  for (let j = i + 1; j < nums.length; j++) {
    if (nums[i] > nums[j]) {
      [nums[i], nums[j]] = [nums[j], nums[i]];
    }
  }
}

const unique = [];
for (let i = 0; i < nums.length; i++) {
  if (!unique.includes(nums[i])) {
    unique.push(nums[i]);
  }
}
console.log(unique);
