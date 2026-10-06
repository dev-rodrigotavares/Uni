
function repete(x, n) {
    let y = new Array(n);

    for (let i = 0; i < n; i++) {
        y[i] = x;
    }

    return y;
}



function aleatorios(n) {
    let y = new Array(n);

    for (let i = 0; i < n; i++) {
        y[i] = Math.random();
    }

    return y;
}



function intervalo(a, b) {
    if (b < a) {
        return [];
    }

    let y = [];

    for (let i = a; i <= b; i++) {
        y.push(i);
    }

    return y;
}



function linspace(a, b, n) {
    let y = new Array(n);

    if (n === 1) {
        y[0] = a;
        return y;
    }

    let passo = (b - a) / (n - 1);

    for (let i = 0; i < n; i++) {
        y[i] = a + i * passo;
    }

    return y;
}


function repetePot(x,n,p){

const y = [];

const elevado = Math.pow(x, p);

for(let i = 0; i < n;i++){

y.push(elevado);

}

return y;

}

console.log(repete(5, 3));
console.log(aleatorios(4));
console.log(intervalo(2, 6));
console.log(intervalo(6, 2));
console.log(linspace(0, 1, 3));
console.log(repetePot(2, 5, 3));