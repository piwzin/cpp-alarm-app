# cpp-alarm-app

Nos dias atuais, um app de alarme é encontrado em qualquer smartphone e serve para alertar o usuário de algum compromisso. A partir de um horário atual ou inicial, deve-se colocar o horário pretendido para acionar o alarme. O app calcula a diferença de tempo e mostra ao usuário como uma notificação.

Escreva um programa em linguagem C/C++ que simule o funcionamento de um app de alarme. 

O programa deve ler um horário inicial, um horário de alarme, calcular o tempo para acionar o alarme e mostrar esse tempo calculado.

Os horários a serem lidos obedecem o padrão de 0h a 23h e 0min a 59min.

**OBSERVAÇÃO 1**: Faça esse programa no Replit ou em outro editor com compilador C/C++ (Codeblocks, DevC++, Cpp.sh ou OnlineGDB) de sua escolha. Atualize somente o main.cpp no GitHub para que os testes sejam realizados.

**OBSERVAÇÃO 2**: O repositório criado estará na organização GitHub [https://github.com/p7-m3-ecoi02-2021-1](https://github.com/p7-m3-ecoi02-2021-1) ou [https://github.com/p8-m3-ecoi02-2021-1](https://github.com/p8-m3-ecoi02-2021-1), dependendo de sua turma prática.

# Exemplos

* Horário inicial: 5 15; Horário de alarme: 7 0; A mensagem mostrada deve ser: 1 hora(s) e 45 minuto(s).
* Horário inicial: 0 -1; A mensagem mostrada deve ser: Horario inicial invalido.
* Horário inicial: 12 15; Horário de alarme: 24 0; A mensagem mostrada deve ser: Horario de alarme invalido.
* Horário inicial: 19 0; Horário de alarme: 6 30; A mensagem mostrada deve ser: 11 hora(s) e 30 minuto(s).
* Horário inicial: 0 1; Horário de alarme: 23 59; A mensagem mostrada deve ser: 23 hora(s) e 58 minuto(s).
