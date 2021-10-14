// @Prime_Number_Program

function isPrimeNumber(n) {
  if (typeof n !== 'number') return 'NOT A NUMBER';
  if (n <= 1) return false;
  for (let i = 2; i < n; i++) {
    if (n % i === 0) return false;
  }
  return true;
}

console.log(isPrimeNumber({ numb: 21 })); // NOT A NUMBER
console.log(isPrimeNumber('19')); // NOT A NUMBER
console.log(isPrimeNumber(9)); // false
console.log(isPrimeNumber(19)); // true
console.log(isPrimeNumber(13)); // true
console.log(isPrimeNumber(3)); // true

// node JavaScript/PrimeNumber.js
