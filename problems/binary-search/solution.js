const fs = require('fs');

const input = fs.readFileSync(0, 'utf-8').trim();
if (!input) {
  process.exit(0);
}

const parts = input.split(/\s+/).map(Number);
const target = parts[0];
const arr = parts.slice(1);

let low = 0;
let high = arr.length - 1;
let ans = -1;

while (low <= high) {
  const mid = Math.floor((low + high) / 2);
  if (arr[mid] === target) {
    ans = mid;
    break;
  } else if (arr[mid] < target) {
    low = mid + 1;
  } else {
    high = mid - 1;
  }
}

console.log(ans);
