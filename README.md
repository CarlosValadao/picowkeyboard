\documentclass[a4paper, 12pt]{article}
\usepackage[portuges]{babel}
\usepackage[utf8]{inputenc}
\usepackage{amsmath}
\usepackage{indentfirst}
\usepackage{graphicx}
\usepackage{multicol,lipsum}
\usepackage{float} % Pacote para controle exato do posicionamento das figuras
\usepackage{placeins} % Para usar \FloatBarrier

\begin{document}
%
\begin{titlepage}
	\begin{center}
		\Huge{Embarca Tech - Tarefa 1 - Aula Síncrona (09/01/25)}\\
		\vspace{15pt}
        \vspace{95pt}
        \textbf{\LARGE{Relatório da Solução de um Código Morse SOS por meio de um LED }}\\
		\vspace{3,5cm}
	\end{center}
	\begin{flushleft}
		\begin{tabbing}
			Aluno: Carlos Henrique de Oliveira Valadão \\
			Professor: Wilton Lacerda \\
	\end{tabbing}
 \end{flushleft}
	\vspace{1cm}
	\begin{center}
		\vspace{\fill}
			 Janeiro\\
		 2025
	\end{center}
\end{titlepage}
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\newpage
% % % % % % % % % % % % % % % % % % % % % % % % % %
\newpage
\tableofcontents
\thispagestyle{empty}

\newpage
\pagenumbering{arabic}
% % % % % % % % % % % % % % % % % % % % % % % % % % %
\section{Introdução}

O termo comunicação pode ser definido, segundo \textbf{(HAYKIN; MOHER, 2011)}, como a troca de informações entre dois pontos, utilizando símbolos e regras bem definidas. Esse processo exige a presença de um meio, transmissores e receptores, estando presente em diversas formas no nosso cotidiano, como em telefones, rádios e televisões, muitas vezes passando despercebido.\\
Uma das formas mais simples de construir um sistema de comunicação e seu protocolo é utilizando a menor quantidade possível de símbolos, garantindo que sejam totalmente distintos e inconfundíveis. O código binário é um dos sistemas de comunicação mais simples e amplamente conhecidos, sendo adotado principalmente em computação moderna. Tanto o sistema numérico de base 2 quanto o código Morse são exemplos de sistemas binários de comunicação.\\
Nesse contexto, este relatório apresenta o desenvolvimento de um sistema capaz de transmitir a mensagem \textbf{SOS} em código Morse, que utiliza \textit{dot} (.) e \textit{dash} (-) como seus dois símbolos binários. A transmissão é realizada por meio de um LED vermelho conectado a uma Raspberry Pi Pico W, parte do Kit BitDogLab. O funcionamento segue a temporização definida no problema, que será detalhada a seguir. Para a solução, foi utilizada a linguagem de programação C em sua versão ANSI Standard 11. A simulação e montagem do circuito foram realizadas no site Wokwi.
\newpage

\section{Solução Proposta}

Com o intuito de atender aos requisitos apresentados na tarefa, foi desenvolvido um programa em C capaz de enviar a mensagem SOS por meio de um LED. O código-fonte foi desenvolvido utilizando o VS Code, e o programa incorpora estruturas básicas da linguagem C, como funções pré-definidas e bibliotecas específicas da Raspberry Pi, conforme ilustrado na \textbf{figura 1}.\\

Os critérios de temporização foram respeitados:\\

\begin{itemize}
    \item Um ponto (.) é representado pelo LED aceso por 0,2 segundos.\\
    \item Um traço (-) é representado pelo LED aceso por 0,8 segundos.\\
    \item O intervalo entre pontos e traços dentro de uma mesma letra é de 0,125 segundos (tempo GAP).\\
    \item O intervalo entre letras deve ser de 0,25 segundos.\\
    \item Após completar o sinal SOS (três pontos, três traços, três pontos), o ciclo reinicia após um intervalo de 3 segundos.\\
\end{itemize}

\begin{figure}[H]
    \centering
    \includegraphics[width=0.9\linewidth]{imagens/codigo_funcoes.png}
    \caption{Funções C que permitem a comunicação Morse}
    \label{fig:funcoesC}
\end{figure}

\FloatBarrier

Conforme mencionado, foi criado um circuito virtual para simular o comportamento da Raspberry Pi Pico W no site Wokwi. A simulação foi realizada no VS Code utilizando extensões específicas. O circuito é composto por um resistor de 10k\,\(\Omega\), um LED vermelho e a Raspberry Pi Pico, como mostrado na \textbf{figura 2}.

\begin{figure}[H]
    \centering
    \includegraphics[width=0.5\linewidth]{imagens/simulacao.png}
    \caption{Circuito montado no Wokwi}
    \label{fig:circuitoWokwi}
\end{figure}

\FloatBarrier

Na \textbf{figura 3}, é possível visualizar o arquivo \textit{diagram.json}, que representa o mesmo circuito mostrado na \textbf{figura 2}.

\begin{figure}[H]
    \centering
    \includegraphics[width=\linewidth]{imagens/wokwi_diagramjson.png}
    \caption{Arquivo \textit{diagram.json}}
    \label{fig:diagramJSON}
\end{figure}

O arquivo \textit{diagram.json}, conforme ilustrado na figura 3, foi criado juntamente com o \textit{wokwi.toml}. Além disso, os arquivos \textit{MorseSOS.uf2} e \textit{MorseSOS.elf} foram gerados para viabilizar a simulação do circuito e verificar seu correto funcionamento.

\FloatBarrier

\section{Conclusão}
O sistema desenvolvido foi projetado e implementado em conformidade com os requisitos previamente estabelecidos. Durante o processo de desenvolvimento, foram realizadas análises detalhadas e testes rigorosos para garantir a adequação aos objetivos do projeto.

A solução atende plenamente às especificações funcionais e não funcionais, incluindo o correto funcionamento do código Morse SOS por meio do LED, conforme o escopo do projeto. Ademais, o sistema demonstra robustez e eficiência, operando de forma consistente e confiável dentro dos parâmetros esperados.

\newpage

\end{document}
