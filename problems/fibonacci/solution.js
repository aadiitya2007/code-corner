const fs = require("fs");

function fibonacci(n) {
  if (n === 0) return 0n;
  if (n === 1) return 1n;
  let prev = 0n;
  let curr = 1n;
  for (let i = 2; i <= n; i++) {
    const next = prev + curr;
    prev = curr;
    curr = next;
  }
  return curr;
}

const input = fs.readFileSync(0, "utf-8").trim();
if (input.length > 0) {
  const n = parseInt(input, 10);
  console.log(fibonacci(n).toString());
}
