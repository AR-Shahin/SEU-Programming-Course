console.log("Hello World");

let time = new Date();
let add_time = 0;
let start_time = 0;
let prev_time = '10:30';

for(let i = 1;i<=15;i++){
    add_time =+ 30;
    if(i == 1){
        prev_time = prev_time;
    }else{
        prev_time = start_time;
    }
    start_time = Date("h:i");
}
console.log(start_time);
