<h1 align="left">
    <a href="https://github.com/Jordaniano/Projeto-URA">Labirinto Quiz</a>
</h1>

> O Labirinto-Quiz é um desafio proposto pelo projeto de extensão Um Robô Por Aluno (URA) realizado na Universidade Federal do Rio Grande do Norte (UFRN), com o intuito de propagar o conhecimento sobre robótica, e assuntos relacionados à base nacional curricular comum para os discentes Secundaristas. 
> O labirinto chega com conhecimentos sobre programação em C++ no Arduino UNO e utiliza os seguintes componentes: LED, LED RGB, Potenciômetro, buzzer, placa de ensaio, e claro, o proprío Arduino.


  <h2 align="left">
    Como jogar:</a>
</h2>

>Tendo em vista que o Studio Saturn foi descontinuado e novos colaboradores estão participando do desenvolvimento da impressora, o firmware foi movido de repositório afim de facilitar o versionamento e atualização das configurações da impressora, entretando é possivel acessar o repositório original [neste link](https://github.com/StudioSaturn/MKS3D)


<h2 align="left">
    Sobre os componentes:</a>

</h2>

- LEDs:
  > aaa
- LED RGB:
  > bbb
- POTENCIOMETROS:
  > cc
- BUZZER:
  > ddd

  
<h2 align="left">
    Sobre o Código: </a>
</h2>

>Desenvolvimento de uma Impressora 3D de estrutura HyperCube, por meio do uso da Mainboard MKS TinyBee V1.0 e firmware Marlin, a MKS TinyBee é compativel com o acesso remoto, sendo uma aplicação do conceito de internet das coisas (IOT). As tecnologias de IoT se apresentam como um setor extremamente aquecido, onde o desenvolvimento de dispositivos compatíveis com a Internet das Coisas se relaciona diretamente com os objetivos visados no laboratório de automação e robótica (LAR), localizado na Univesidade Federal do Rio Grande do Norte (UFRN).

<h2 align="left">
    Créditos:</a>
</h2>

- [Maria Clara](https://marlinfw.org/docs/basics/introduction.html)
- [Jordan Ian](https://github.com/makerbase-mks/MKS-TinyBee)

## 📝 Como Fazer
<!-- Colocar slide da apresentação, o códido estará disponível e um pequeno manual de instruções -->
### 🖥️ Explicação Circuito - Hardware
**Configuração do circuito:**
De forma mais objetiva, as conexões relacionadas aos dois módulos serão ditas separadamente. 

![Imagem sobre lpaca PCA9685](https://github.com/Lucas-Cappra/Braco_robotic_lar_joystick/assets/108031562/fedc4245-7ee5-4acc-aebf-09f8122d877d)
=== Circuito completo ===

*Config do Servo Motor:*
1) Jumper Marrom -> para o GND do Arduíno
2) Jumper Laranja -> para pino 7 do Arduíno
3) Jumper Vermelho ->  para V5 do Arduíno

![Imagem sobre Circuito](https://github.com/Lucas-Cappra/Braco_robotic_lar_joystick/assets/108031562/33964546-cdc7-4dae-9828-7732c26ba123)


*Config do Botão:*
1) Jumper Branco -> VCC para VCC do Arduino
2) Jumper Cinza -> GND para GND do Arduino

 *Config do Buzzer:*
1) Jumper Amarelo -> VRx do módulo 2 para A0 do arduino
2) Jumper Verde -> VRy do módulo 2 para A1 do arduino
3) Jumper Verde afastado -> Switch do módulo 2 para porta digital do arduino

 *Config do Potenciômetro:*
1) Jumper Roxo -> VRx do módulo 1 para A2 do arduino
2) Jumper Azul -> VRy do módulo 1 para A3 do arduino
3) Jumper Cinza afastado -> Switch do módulo 1 para porta digital do arduino


![Imagem sobre Modolos analogicos](https://github.com/Lucas-Cappra/Braco_robotic_lar_joystick/assets/108031562/db9be6e3-368b-4ff6-968c-c23cb0e2d47f)
=== Imagem sobre Modolos analogicos ===


![Imagem atras do circuito modulos analogicos](https://github.com/Lucas-Cappra/Braco_robotic_lar_joystick/assets/108031562/fec68529-8251-44ad-b5ab-1071036ff41d)
=== Imagem atras do circuito modulos analogicos ===

/// Testar pinagem com https://www.aranacorp.com/en/using-a-pca9685-module-with-arduino/ ///
