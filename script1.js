let main = document.querySelector("main");
let btn = document.querySelector("button");

btn.addEventListener("click", function() {
    let arr = ["work hard", "since2006", "copywrite", "SCS", "JS"];
    let h1 = document.createElement("h1");
    let ele = Math.floor(Math.random()* arr.length);
    let x = Math.random()*80;
    let y = Math.random()*80;
    let rot = Math.random()* 180-90;
    let scl = Math.random()*3;

    h1.innerText = arr[ele];
    h1.style.position = 'absolute';
    h1.style.left = x +"%";
    h1.style.top = y + "%";
    h1.style.rotate = rot + 'deg';
    h1.style.scl = scl;

    main.appendChild(h1);
    console.log(h1);
});