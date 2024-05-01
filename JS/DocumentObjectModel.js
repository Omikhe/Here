/*
# DOM = Document Object Model

A JavaScript Object that represents the page you in the web browser
and provides you with an API to interact with it.
A web browser constructs the DOM when it loads an HTML document,
and structures all the elements in a tree-like representation
JavaScript can access the DOM to dynamically change the content,
structure, and style of a web page.

- Bro Code [https://www.youtube.com/watch?v=NO5kUNxGIu0]
*/

/*
JavaScript Object

In JavaScript, objects are one of the fundamental data types used to store collections of data and related functionality. An object is an unordered collection of key-value pairs, where the keys are strings (or symbols), and the values can be of any data type, including other objects, arrays, or functions.

*/
// object syntax
const myObject = {
  key1: "value1",
  key2: 42,
  key3: true,
  key4: function () {
    this.key1 = "Omikhe!";
    console.log("I am a method!");
  },
};

/*
accessing data in objects

You can access the properties of an object using dot notation or bracket notation

dot notation: objectName.propertyName
bracket nos

- myObject.key1 // dot notation
- myObject['key2'] // bracket notation

*/

console.log(myObject.key1); // Output: 'value1'
console.log(myObject["key2"]); // Output: 42

myObject.key4(); //Output: I am a method!
console.log(myObject["key1"]);
myObject["key4"](); //Output: I am a method!

//you can user these functions for a barebones to-do app :)
function greet() {
  user = "mike";
  document.getElementById("demo").innerHTML = `Hello ${user}`;
}

function unGreet() {
  document.getElementById("demo").innerHTML = " ";
}
