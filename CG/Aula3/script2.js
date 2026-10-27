
function main() {

    let gc = document.getElementById("canvas").getContext("2d");

    let img = new Image();
    img.src = "monstros.jpg";

    img.onload = function() {

        let padrao = gc.createPattern(img, "repeat");

        gc.beginPath();
        gc.roundRect(1, 1, 318, 198, 24);

        gc.fillStyle = padrao;
        gc.fill();

        gc.strokeStyle = "red";
        gc.lineWidth = 2;
        gc.stroke();
    };
}
