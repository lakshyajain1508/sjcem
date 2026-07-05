function addTask(){
const input=document.getElementById('taskInput');
const text=input.value.trim();

if(!text) return;

const li=document.createElement('li');

li.innerHTML=`
<span>${text}</span>
<div class="task-actions">
<button onclick="toggleTask(this)">✓</button>
<button onclick="deleteTask(this)">🗑</button>
</div>
`;

document.getElementById('taskList').appendChild(li);
input.value='';
}

function toggleTask(btn){
btn.closest('li').querySelector('span').classList.toggle('done');
}

function deleteTask(btn){
btn.closest('li').remove();
}

document.getElementById('taskInput').addEventListener('keypress',e=>{
if(e.key==='Enter') addTask();
});
