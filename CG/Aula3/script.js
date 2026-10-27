
function main() {

    let gc = document.getElementById("canvas").getContext("2d");

    gc.translate(160,100);
    gc.rotate(Math.PI);
    gc.translate(-160,-100);
    

    let grad = gc.createLinearGradient(0, 0, 320, 200);

    grad.addColorStop(0, "#ff0000");
    grad.addColorStop(0.2, "#ff7f00");
    grad.addColorStop(0.4, "#ffff00");
    grad.addColorStop(0.6, "#00ff00");
    grad.addColorStop(0.8, "#0000ff");
    grad.addColorStop(1, "#8b00ff");

    gc.beginPath();
    gc.roundRect(0, 0, 320, 200, 24);

    gc.fillStyle = grad;
    gc.fill();


}
