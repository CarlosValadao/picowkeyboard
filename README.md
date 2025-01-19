# PicoWKeyboard

Este projeto foi desenvolvido para integrar um teclado matricial 4x4, um buzzer e um LED RGB com a Raspberry Pi Pico W incluída no **Kit BitDogLab versão 6.3**. A integração foi realizada utilizando os pinos GPIO e a linguagem C, com o objetivo de controlar os periféricos a partir de interações com o teclado matricial.

## Funcionalidades

- **LED RGB:**
  - Pressione `A`: Liga o LED vermelho.
  - Pressione `B`: Liga o LED azul.
  - Pressione `C`: Liga o LED verde.
  - Pressione `D`: Liga todos os LEDs.

- **Buzzer:**
  - Pressione `#`: Ativa o buzzer.

## Tecnologias Utilizadas

- **Linguagem:** C
- **Hardware:** Raspberry Pi Pico W
- **Simulação:** [Wokwi](https://wokwi.com)
- **SDK:** Pico SDK versão 2.1.0

## Requisitos para Execução

Antes de rodar o código, você precisa ter instalado:

1. **GNU Arm Embedded Toolchain**
   - [Instalar GNU Arm Embedded Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm)

2. **Pico SDK 2.1.0**
   - Siga a [documentação oficial do Pico SDK](https://github.com/raspberrypi/pico-sdk) para configurá-lo.

3. **Extensões para VS Code:**
   - Raspberry Pi Pico
   - Wokwi
   - CMake

## Como Rodar

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/CarlosValadao/picowkeyboard.git
   cd picowkeyboard
   ```

2. **Importe o projeto:**
   - Abra o VS Code.
   - No menu da extensão da Raspberry Pi Pico, escolha **"Importar Projeto"** e selecione o diretório do repositório.

3. **Compile o código:**
   - Use a opção de **"compile"** na extensão do Pico no VS Code.

4. **Simule no Wokwi:**
   - **Abra o arquivo do circuito configurado** e execute a simulação no Wokwi.

## Estrutura do Repositório

- **`src/`**: Código fonte do projeto.
- **`include/`**: Arquivos de cabeçalho.
- **`CMakeLists.txt`**: Arquivo de configuração para o CMake.
- **`diagram.json`**: Configuração do circuito para o Wokwi.

## Simulação no Wokwi

O circuito foi projetado e simulado no Wokwi. Certifique-se de usar o arquivo `diagram.json` para replicar a simulação.

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests para melhorias no projeto.

## Licença

Este projeto está sob a licença MIT. Consulte o arquivo `LICENSE` para mais detalhes.

## Contato

Para mais informações, entre em contato com [Carlos Valadão](https://github.com/CarlosValadao).
