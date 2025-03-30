// 1) Cálculo da soma
function calcularSoma() {
    let INDICE = 13, SOMA = 0, K = 0;
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }
    console.log("Valor da soma:", SOMA);
}

calcularSoma();

// 2) Verifica se um número pertence à sequência de Fibonacci
function pertenceFibonacci(numero) {
    let a = 0, b = 1;
    while (b < numero) {
        let temp = a + b;
        a = b;
        b = temp;
    }
    return b === numero || numero === 0;
}

let numero = 21; // Altere para testar outro valor
console.log(`O número ${numero} pertence à sequência de Fibonacci?`, pertenceFibonacci(numero));

// 3) Análise de faturamento mensal com JSON
const fs = require('fs');
const arquivoJSON = 'faturamento.json';

fs.readFile(arquivoJSON, 'utf8', (err, data) => {
    if (err) {
        console.error("Erro ao ler o arquivo JSON.");
        return;
    }
    
    const faturamento = JSON.parse(data);
    let menor = Number.MAX_VALUE, maior = 0, soma = 0;
    let diasValidos = 0, diasAcimaMedia = 0;
    
    faturamento.forEach(dia => {
        if (dia.valor > 0) {
            menor = Math.min(menor, dia.valor);
            maior = Math.max(maior, dia.valor);
            soma += dia.valor;
            diasValidos++;
        }
    });
    
    const media = soma / diasValidos;
    faturamento.forEach(dia => {
        if (dia.valor > media) diasAcimaMedia++;
    });
    
    console.log("Menor faturamento:", menor);
    console.log("Maior faturamento:", maior);
    console.log("Dias acima da média:", diasAcimaMedia);
});

// 4) Percentual de representação dos estados
const estados = {
    "SP": 67836.43,
    "RJ": 36678.66,
    "MG": 29229.88,
    "ES": 27165.48,
    "Outros": 19849.53
};
const total = Object.values(estados).reduce((acc, val) => acc + val, 0);
Object.keys(estados).forEach(estado => {
    console.log(`${estado}: ${(estados[estado] / total * 100).toFixed(2)}%`);
});

// 5) Inversão de string
function inverterString(str) {
    let invertida = "";
    for (let i = str.length - 1; i >= 0; i--) {
        invertida += str[i];
    }
    return invertida;
}

let stringTeste = "Hello, World!";
console.log("String invertida:", inverterString(stringTeste));
