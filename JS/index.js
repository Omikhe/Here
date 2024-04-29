// regular
function add(a, b) {
  return a + b;
}

//arrow functions
let sum = (a, b) => {
  return a + b;
};

//callback function
function createQuote(quote, pukulu) {
  var myQuote = "Like I always say, " + quote;
  pukulu(myQuote); // 2
}

// function logQuote(quote) {
//   console.log(quote);
// }

// annonymous functions
createQuote("eat your vegetables!", (quote) => {
  console.log(quote);
});
