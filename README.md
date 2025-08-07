# 🎟️ Sistema de Reserva de Poltronas em C++

Este é um projeto simples de reserva de poltronas em um cinema, desenvolvido em **C++**, como parte de uma atividade acadêmica. Ele permite que o usuário escolha entre sessões de filmes, visualize e selecione assentos disponíveis e controle o status de ocupação de cada poltrona.


## 🎯 Objetivo do Projeto

O objetivo principal foi colocar em prática os conceitos fundamentais da programação em C++, como o uso de **matrizes**, **estruturas de repetição**, **funções** e **validação de dados**. O projeto simula o funcionamento básico de um sistema real de reservas, com foco no controle visual e lógico das poltronas.


## ✨ O que o sistema faz

- Gerencia três sessões de filmes simultaneamente.
- Exibe o mapa de assentos com status visual:
  - `x` → livre  
  - `0` → selecionada  
  - `-` → ocupada
- Permite ao usuário:
  - Escolher um filme
  - Selecionar uma poltrona livre
  - Confirmar ou desfazer a escolha
  - Reservar múltiplas poltronas na mesma sessão
- Possui um código especial para **fechar a sessão** (marcar todas as poltronas como ocupadas).



## 💻 Tecnologias utilizadas

- **C++ (C++17 compatível)**
- `iostream`, `cstdlib`, `locale.h`
- Funções, matrizes e controle de fluxo
- Uso de `system("cls")` e `system("pause")` (compatível com Windows)



## 🧩 Organização do código

- `mostrarPoltrona()` – Exibe o mapa atual das poltronas
- `marcarPoltronas()` – Marca poltrona como temporariamente selecionada (`0`)
- `desfazerPoltrona()` – Cancela uma seleção feita
- `verificarPoltronas()` – Verifica se a poltrona já está ocupada
- `mudarValor()` – Confirma e marca a poltrona como ocupada (`-`)
- `sessaoCheia()` – Verifica se uma sessão está lotada
- `trancarSessao()` – Fecha todas as poltronas da sessão selecionada



## 🧪 Aprendizados

Este projeto ajudou a reforçar:

- O uso correto de **matrizes multidimensionais**
- A importância da **validação de dados de entrada**
- Como aplicar a **lógica de marcação e verificação de estados**
- Estruturação de programas com múltiplas funções reutilizáveis
