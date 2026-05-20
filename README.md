# Problema E - Triangulo
**Maratona InterFatecs 2025 - 1ª Fase**

## Descrição
Calcula a área de um triângulo dados dois lados e o ângulo entre eles.

## Fórmula
```
área = (a * b * sin(θ)) / 2
```
O ângulo θ é fornecido em graus e convertido para radianos:
```
radianos = graus * (π / 180)
```

## Entrada
- Várias linhas, cada uma com: `a b θ`
- Encerra com `0 0 0`

## Saída
Para cada caso: área com 4 casas decimais

## Exemplo
**Entrada:**
```
3.00 4.00 90.00
5.00 7.00 60.00
10.00 10.00 30.00
0 0 0
```

**Saída:**
```
6.0000
15.1554
25.0000
```
