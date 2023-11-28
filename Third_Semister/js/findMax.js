const names = ["Rahim", "Karim", "salam", "Borkot", "Mahamud"];

let maxName = names[0];

for (let i = 0; i < names.length; i++) {
  const element = names[i];

  if (maxName.length < element.length) {
    maxName = element;
  }
}
console.log(maxName);
