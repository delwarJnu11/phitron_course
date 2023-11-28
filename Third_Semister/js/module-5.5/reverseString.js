const reverseString = (str) => {
  reverseStr = "";
  for (let i = str.length - 1; i >= 0; i--) {
    reverseStr += str[i];
  }
  return reverseStr;
};

const txt = "Hello world";
console.log(reverseString(txt));
