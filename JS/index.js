const myList = document.getElementById("task-list");

const addTask = () => {
  const newTask = document.createElement("li");
  newTask.textContent = "This is a new task";

  myList.appendChild(newTask);
};
