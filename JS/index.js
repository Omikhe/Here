const myList = document.getElementById("task-list");
const addTaskBtn = document.getElementById("btn-add-task");
const taskInput = document.getElementById("task-input");

const addTask = () => {
  const newTask = document.createElement("li");
  newTask.textContent = taskInput.value.trim();

  if (newTask.textContent !== "") {
    myList.appendChild(newTask);
    taskInput.value = "";
  }
};

addTaskBtn.addEventListener("click", addTask());
