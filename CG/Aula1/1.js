function repete(x, n){
    let lista = [];
    for(let i = 0; i < n; i++){
        lista.push(x);
    }
    return lista;
}

function aleatorios(n){

    let lista = [];
    for(let i = 0; i < n; i++){
        lista.push(Math.random());
    }
    return lista;
}

function intervalo(a,b){
    let lista = [];
    for(let i = a; i <= b; i++){
        lista.push(i);
    }
    return lista;
}

function linspace(a,b,n){
    let x = (b - a) / (n - 1);
    let lista = [];
    for(let i = a; i < n; i++){
        lista.push(a+ i* x);
    }
    return lista;
}

function pares(x){

    let lista = [];

    for(let i = 0; i < x.length; i++){
        if(x[i] % 2 === 0){
            lista.push(x[i]);
        }
    }
    return lista;
}

function positivos(x){

    let lista = [];

    for(let i = 0; i < x.length; i++){
        if(x[i] > 0){
            lista.push(x[i]);
        }
    }
    return lista;
}

function limite_sup(x,a){

    let lista = [];

    for(let i = 0; i < x.length; i++){
        if(x[i] <= a){
            lista.push(x[i]);
        }
    }
    return lista;
}


function filtro(f, x){

    let lista = [];

    for(let i = 0; i < x.length; i++){
        if(f(x[i]) === true){
            lista.push(x[i]);
        }
    }
    return lista;
}

function dobro(x){

    let lista = [];

    for(let i = 0; i < x.length; i++){
        lista.push(x[i] = 2*x[i]);
    }
    return lista;
}