# ROSA DOS VENTOS - URA 

<div style="display: inline_block">


<img src="https://github.com/wwwmisla/ura-project/blob/main/ura_logo.png" width="400px" align="right" />

## Índice
 
 - [Título e Imagem de capa](#t%C3%ADtulo-projeto---ura)
 - [Descrição do projeto](#-descrição-do-projeto)
 - [Componentes Utilizados](#-componentes-utilizados)
 - [Tecnologias Utilizadas](#%EF%B8%8F-tecnologias-utilizadas)
 - [Como Fazer](#-como-fazer)
   - [Circuito](#%EF%B8%8F-explica%C3%A7%C3%A3o-circuito---hardware)
   - [Código](#-explica%C3%A7%C3%A3o-c%C3%B3digo---software)
 - [Como Jogar](#-como-jogar)
 - [Documentação do Projeto](#%EF%B8%8F-documenta%C3%A7%C3%A3o-do-projeto)
 - [Referências](#-referências)
</div>

## 📄 Descrição do Projeto

<p>  
Este é um projeto relacionado ao final do <b>Curso de Robótica para Graduandos - 2023.2</b> do <i>URA</i> (https://www.umroboporaluno.org/) que teve como finalidade utilizar a robótica educativa para incentivar à melhor compreensão de um conteúdo baseado na Base Nacional Comum Curricular. 

 O projeto a seguir foi elaborado com base na matéria de Geografia, especificamente no conteúdo de localização geográfica. Nosso intuito foi desenvolver um método para que alunos, do ensino fundamental até o ensino médio, pudessem entender com uma maior didática o uso da Rosa dos Ventos – instrumento utilizado para orientar e localizar os pontos cardeais (norte, sul, leste, oeste) – e como ela é adotada em mapas. 

<!-- Ensinar sobre a Rosa dos Ventos -->

## 🧰 Componentes Utilizados

| Quantidade | Componente | 
| :---:       |     :---:       |  
| 1     | Blackboard Uno R3      | 
| 1     | Servo Motor       |
| 4     | Leds de Cores Diversas             |
| 5     | Resistores |
| 1     | Buzzer |
| 1     | Botão |
| 1     | Potenciômetro |
| 1     | Protoboard |
| 18    | Jumpers (Macho/Macho) |

## 🛠️ Tecnologias Utilizadas

<div align="center">
 <img align="center" alt="Misla-Arduino" height="50" width="60" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/arduino/arduino-original.svg">
 <img align="center" alt="Misla-C++" height="50" width="60" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg">
 <img align="center" alt="Misla-Github" height="50" width="60" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/github/github-original.svg">
 <img align="center" alt="Misla-Tinkercad" height="50" width="60" src="https://logowik.com/content/uploads/images/autodesk-tinkercad4190.logowik.com.webp">
</div>

## 📝 Como Fazer
<!-- Colocar slide da apresentação, o códido estará disponível e um pequeno manual de instruções -->
### 🖥️ Explicação Circuito - Hardware
**Configuração do circuito:**

![image](https://github.com/trabalhoslopeura/A-rosa-dos-ventos/assets/151954448/d2c3350e-94c7-489c-a33d-9a8f59b1bc40)

=== Circuito completo ===

| Quantidade | Componente | 
| :---:       |     :---:       |  
| Polaridade +     | 5V     | 
| Polaridade -     | GND       |
| Buzzer     | 8             |
| Servo     | 7 |
| Botão     | 6 |
| Led Azul     | 5 |
| Led Vermelho     | 4 |
| Led Amarelo     | 3 |
| Led Branco    | 2 |





![Imagem sobre Circuito](https://github.com/Lucas-Cappra/Braco_robotic_lar_joystick/assets/108031562/33964546-cdc7-4dae-9828-7732c26ba123)





![Imagem sobre Modolos analogicos](https://github.com/Lucas-Cappra/Braco_robotic_lar_joystick/assets/108031562/db9be6e3-368b-4ff6-968c-c23cb0e2d47f)
=== Imagem sobre Modolos analogicos ===


![Imagem atras do circuito modulos analogicos](https://github.com/Lucas-Cappra/Braco_robotic_lar_joystick/assets/108031562/fec68529-8251-44ad-b5ab-1071036ff41d)
=== Imagem atras do circuito modulos analogicos ===

/// Testar pinagem com https://www.aranacorp.com/en/using-a-pca9685-module-with-arduino/ ///

### 👩‍💻 Explicação Código - Software
 
Este código é destinado a controlar servos motorizados. Aqui está um resumo explicativo do código.

1. Inclusão de biblioteca:
   - O código começa incluindo a biblioteca Servo.h.

2. Definição de pinos:
   - Os pinos dos Leds definidos para cada ponto cardial.

3. Declaração de variáveis:
   - Variáveis foram definidas para acompanhar o valor de movimento do servo
   - Estado para definir se o servo está dentro ou fora das regiões.

4. Função de configuração (setup):
   - Define o modo dos leds e buzzer, como saída.
   - Define o modo do botão como INPUT_PULLUP.
   - Define o modo do potenciômetro como entrada.
   - Estado do botão como não pressionado
   - Inicializa a comunicação serial a 9600 bps.

5. Função "loop":
   - Verifica o estado do botão e mostra se foi ativado ou não.
   - Valor tanto do potenciômetro e servo, map(valor, 0, 1023, 0, 180).
   - Conjunto de condições if para cada ponto cardial.
   - Ao apertar o botão, enquanto estiver em um ponto cardial acenderá o respectivo led.
   - Caso ao apertar e estiver em um dos pontos cardiais fará um som agradável, senão tocará um som chato.


## 🎮 Como Jogar
Inicialmente, o aluno irá identificar onde estão os LEDs, em seguida o professor irá escolher qual LED será ligado primeiro para que o aluno comece a jogar. Assim que o professor terminar, o aluno terá um tempo para posicionar a Rosa dos Ventos com ajuda de um potenciômetro. Após esse posicionamento, ele terá que apertar o botão para confirmar as coordenadas, dependendo da resposta o buzzer tocará um som para acerto e erro. Enquanto o aluno acertar, ele continuará no jogo até finalizar. 

## 🗂️ Documentação do Projeto

## 🧾 Créditos
  - Isabel Maria Barbosa Alves
  - Rhyron Gabriel Azevedo de Oliveira 
