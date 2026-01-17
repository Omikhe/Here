const train = [
  [0.0, 0.0],
  [1.0, 2.0],
  [2.0, 4.0],
  [3.0, 6.0],
  [4.0, 8.0],
];

// y = x*w;

function cost(w, b) {
  result = 0.0;
  for (let i = 0; i < train.length; i++) {
    x = train[i][0];
    y = x * w + b;
    d = y - train[i][1];
    result += d * d;
    // console.log(`actual: ${y}, expected: ${train[i][1]}`);
  }
  return result;
}

let w = Math.random() * 10.0;
let b = Math.random() * 5.0;
// w = 1.0;

const eps = 1e-3;
const rate = 1e-3;

// console.log(cost(w));

for (let i = 0; i < 500; i++) {
  const c = cost(w, b);

  dw = (cost(w + eps, b) - c) / eps;
  db = (cost(w, b + eps) - c) / eps;

  w -= rate * dw;
  b -= rate * db;

  console.log(`cost = ${cost(w, b)} , w = ${w} , b = ${b}`); 
}


console.log(" "); 
console.log("--------------------------------\n");
console.log(`${w} , ${b}`);
console.log(" ");
