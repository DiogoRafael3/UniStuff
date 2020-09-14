%Estado inicial
estado_inicial(
    [
        [
            [buraco(1,1,4),buraco(1,2,4),buraco(1,3,4),buraco(1,4,4),buraco(1,5,4),buraco(1,6,4)],
            [buraco(2,1,4),buraco(2,2,4),buraco(2,3,4),buraco(2,4,4),buraco(2,5,4),buraco(2,6,4)]
        ],
        pontos1(0),
        pontos2(0)
    ]
).

%Um estado é terminal quando algum dos jogadores tiver pelo menos 25 pontos
terminal([_,pontos1(X),pontos2(Y)]):-
    (X>24;Y>24).


%Considerámos um possível estado terminal um estado em que nenhum dos jogadores conseguir meter sementes no outro lado
terminal(
    [
        [
            [buraco(1,1,0),buraco(1,2,X1),buraco(1,3,X2),buraco(1,4,X3),buraco(1,5,X4),buraco(1,6,X5)],
            [buraco(2,1,Y5),buraco(2,2,Y4),buraco(2,3,Y3),buraco(2,4,Y2),buraco(2,5,Y1),buraco(2,6,0)]
        ],_,_
    ]
):-
    X1 < 2,
    X2 < 3,
    X3 < 4,
    X4 < 5,
    X5 < 6,
    Y1 < 2,
    Y2 < 3,
    Y3 < 4,
    Y4 < 5,
    Y5 < 6.


%Predicado para recolher os pontos quando há um estado terminal
recolherPontos(
    [
        [
            [buraco(1,1,0),buraco(1,2,X1),buraco(1,3,X2),buraco(1,4,X3),buraco(1,5,X4),buraco(1,6,X5)],
            [buraco(2,1,Y5),buraco(2,2,Y4),buraco(2,3,Y3),buraco(2,4,Y2),buraco(2,5,Y1),buraco(2,6,0)]
        ],pontos1(X),pontos2(Y)
    ],
    [
        [
            [buraco(1,1,0),buraco(1,2,0),buraco(1,3,0),buraco(1,4,0),buraco(1,5,0),buraco(1,6,0)],
            [buraco(2,1,0),buraco(2,2,0),buraco(2,3,0),buraco(2,4,0),buraco(2,5,0),buraco(2,6,0)]
        ],pontos1(XF),pontos2(YF)
    ]
):-
    sum_list([X1,X2,X3,X4,X5],P1),
    XF is X + P1,
    sum_list([Y1,Y2,Y3,Y4,Y5],P2),
    YF is Y + P2.

% Predicado para verificar se a jogada pode ser feita pelas regras
regra([[J1,J2],_,_],1,Pos):-
    (buracosV(J2),
    regraV([[J1,J2],_,_],1,Pos));
    (not(buracosV(J2)),
    regra1([[J1,J2],_,_],1,Pos)).
regra([[J1,J2],_,_],2,Pos):-
    (buracosV(J1),
    regraV([[J1,J2],_,_],2,Pos));
    (not(buracosV(J1)),
    regra1([[J1,J2],_,_],2,Pos)).

% Predicado para verificar se um lado esta sem sementes
buracosV([buraco(_,1,0),buraco(_,2,0),buraco(_,3,0),buraco(_,4,0),buraco(_,5,0),buraco(_,6,0)]).

%Predicado para ver a regra que se um tiver vazio o outro tem que obrigatoriamente colocar la sementes
regraV([[J1,J2],_,_],1,Pos):-
    (buracosV(J2),
    nth1(Pos,J1,B),
    sementes(B,S),
    S >= Pos);
    not(buracosV(J2)).
regraV([[J1,J2],_,_],2,Pos):-
    (buracosV(J1),
    nth1(Pos,J2,B),
    sementes(B,S),
    S >= 7-Pos);
    not(buracosV(J1)).

%Predicado para verificar se todos os buracos de um dos lados tem 1 ou 0 sementes
buracos1([buraco(_,1,B1),buraco(_,2,B2),buraco(_,3,B3),buraco(_,4,B4),buraco(_,5,B5),buraco(_,6,B6)]):-
    B1 =< 1,
    B2 =< 1,
    B3 =< 1,
    B4 =< 1,
    B5 =< 1,
    B6 =< 1.

%Predicado para verificar a regra que um jogador so pode jogar num buraco só com uma semente se não houver nenhum buraco com mais sementes
regra1([[J1,_],_,_],1,Pos):-
    (nth1(Pos,J1,B),
    sementes(B,S),
    S > 1);
    (nth1(Pos,J1,B),
    sementes(B,S),
    S = 1,
    buracos1(J1)).
regra1([[_,J2],_,_],2,Pos):-
    (nth1(Pos,J2,B),
    sementes(B,S),
    S > 1);
    (nth1(Pos,J2,B),
    sementes(B,S),
    S = 1,
    buracos1(J2)).


%Operações possiveis
op([[J1,J2],P1,P2],1,0,[[J1,J2],P1,P2]):-
    buracosV(J1).
op(Estado, 1, 1, EstadoSeguinte):-
    regra(Estado,1,1),
    jogar(Estado,1,1,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,1,X,Y,EstadoSeguinte).
op(Estado, 1, 2, EstadoSeguinte):-
    regra(Estado,1,2),
    jogar(Estado,1,2,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,1,X,Y,EstadoSeguinte).
op(Estado, 1, 3, EstadoSeguinte):-
    regra(Estado,1,3),
    jogar(Estado,1,3,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,1,X,Y,EstadoSeguinte).
op(Estado, 1, 4, EstadoSeguinte):-
    regra(Estado,1,4),
    jogar(Estado,1,4,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,1,X,Y,EstadoSeguinte).
op(Estado, 1, 5, EstadoSeguinte):-
    regra(Estado,1,5),
    jogar(Estado,1,5,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,1,X,Y,EstadoSeguinte).
op(Estado, 1, 6, EstadoSeguinte):-
    regra(Estado,1,6),
    jogar(Estado,1,6,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,1,X,Y,EstadoSeguinte).



op([[J1,J2],P1,P2],2,0,[[J1,J2],P1,P2]):-
    buracosV(J2).
op(Estado, 2, 1, EstadoSeguinte):-
    regra(Estado,2,1),
    jogar(Estado,2,1,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,2,X,Y,EstadoSeguinte).
op(Estado, 2, 2, EstadoSeguinte):-
    regra(Estado,2,2),
    jogar(Estado,2,2,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,2,X,Y,EstadoSeguinte).
op(Estado, 2, 3, EstadoSeguinte):-
    regra(Estado,2,3),
    jogar(Estado,2,3,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,2,X,Y,EstadoSeguinte).
op(Estado, 2, 4, EstadoSeguinte):-
    regra(Estado,2,4),
    jogar(Estado,2,4,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,2,X,Y,EstadoSeguinte).
op(Estado, 2, 5, EstadoSeguinte):-
    regra(Estado,2,5),
    jogar(Estado,2,5,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,2,X,Y,EstadoSeguinte).
op(Estado, 2, 6, EstadoSeguinte):-
    regra(Estado,2,6),
    jogar(Estado,2,6,EstadoInt),
    nb_getval(ultimaPosX,X),
    nb_getval(ultimaPosY,Y),
    somarPontos(EstadoInt,2,X,Y,EstadoSeguinte).



valor([_,pontos1(P1),pontos2(P2)],P2-P1).

valor([_,pontos1(_),pontos2(P2)],1000000):-
    P2 > 24.



jogar([Estado,Pontos1,Pontos2],Jogador,PosInicial,[EstadoSeguinte,Pontos1,Pontos2]):-
    nth1(Jogador,Estado, J), %selecionar a lista do jogador
    nth1(PosInicial,J,B), %selecionar o buraco
    not(sementes(B,0)),
    sementes(B,S), %ver quantas sementes tem
    
    alterarBuraco([Estado,Pontos1,Pontos2], -1, Jogador, PosInicial, [EstadoInt,Pontos1,Pontos2]),

    ((Jogador = 1, Pos1 is PosInicial - 1);
    (Jogador = 2, Pos1 is PosInicial + 1)),
    verificarPos(Jogador, Pos1,JogadorFinal,PosFinal),
    jogarRec([EstadoInt,Pontos1,Pontos2],S,JogadorFinal,PosFinal,EstadoIntInt),!,
    ultimaPos(Jogador),
    alterarBuraco(EstadoIntInt, 0, Jogador, PosInicial, [EstadoSeguinte,Pontos1,Pontos2]).


verificarPosPontos(2,0,1,1).
verificarPosPontos(1,7,2,6).
verificarPosPontos(X,Y,X,Y).

ultimaPos(1):-
    nb_getval(ultimaPosX, A),
    nb_getval(ultimaPosY,B),
    B1 is B - 1,
    verificarPosPontos(A,B1,AF,BF),
    nb_setval(ultimaPosX, AF),
    nb_setval(ultimaPosY,BF).
ultimaPos(2):-
    nb_getval(ultimaPosX, A),
    nb_getval(ultimaPosY,B),
    B1 is B + 1,
    verificarPosPontos(A,B1,AF,BF),
    nb_setval(ultimaPosX, AF),
    nb_setval(ultimaPosY,BF).


jogarRec([Estado,X,Y], 0,A,B, [Estado,X,Y]):-
    nb_setval(ultimaPosX, A),
    nb_setval(ultimaPosY,B).

jogarRec([[J1,J2],Pontos1,Pontos2], Sementes, 1, Pos, EstadoSeguinte):-
    Sementes > 0,
    nth1(Pos, J1, B),
    sementes(B,-1),
    Pos1 is Pos -1,
    verificarPos(1,Pos1,JogadorFinal,PosFinal),
    jogarRec([[J1,J2],Pontos1,Pontos2],Sementes,JogadorFinal,PosFinal, EstadoSeguinte).
jogarRec([[J1,J2],Pontos1,Pontos2], Sementes, 1, Pos, EstadoSeguinte):-
    Sementes > 0,
    nth1(Pos, J1, B),
    somar1(B,B1),
    delete(J1,B,J1Int),
    nth1(Pos,J1Final,B1,J1Int),
    Sementes1 is Sementes -1,
    Pos1 is Pos -1,
    verificarPos(1,Pos1,JogadorFinal,PosFinal),
    jogarRec([[J1Final,J2],Pontos1,Pontos2],Sementes1,JogadorFinal,PosFinal, EstadoSeguinte).
jogarRec([[J1,J2],Pontos1,Pontos2], Sementes, 2, Pos, EstadoSeguinte):-
    Sementes > 0,
    nth1(Pos, J2, B),
    sementes(B,-1),
    Pos1 is Pos +1,
    verificarPos(2,Pos1,JogadorFinal,PosFinal),
    jogarRec([[J1,J2],Pontos1,Pontos2],Sementes,JogadorFinal,PosFinal, EstadoSeguinte).
jogarRec([[J1,J2],Pontos1,Pontos2], Sementes, 2, Pos, EstadoSeguinte):-
    Sementes > 0,
    Sementes1 is Sementes -1,
    nth1(Pos, J2, B),
    somar1(B,B1),
    delete(J2,B,J2Int),
    nth1(Pos,J2Final,B1,J2Int),
    Pos1 is Pos + 1,
    verificarPos(2,Pos1,JogadorFinal,PosFinal),
    jogarRec([[J1,J2Final],Pontos1,Pontos2],Sementes1,JogadorFinal,PosFinal, EstadoSeguinte).

verificarPos(1,0,2,1).
verificarPos(2,7,1,6).
verificarPos(X,Y,X,Y).

sementes(buraco(_,_,X),X).

semente1(buraco(X,Y,_),buraco(X,Y,-1)).
semente0(buraco(X,Y,_),buraco(X,Y,0)).

alterarBuraco([Estado,Pontos1,Pontos2],Valor,Jogador,Pos,[EstadoSeguinte,Pontos1,Pontos2]):-
    nth1(Jogador,Estado, J), %selecionar a lista do jogador
    nth1(Pos,J,B), %selecionar o buraco

    alterarSementes(Valor,B,B1), %alterar o n de sementes para -1
    delete(J,B,JInt), %remover o buraco
    nth1(Pos,JFinal,B1,JInt), %add novo buraco modificado

    delete(Estado,J, EstadoInt), %remover lista do jogador
    nth1(Jogador,EstadoSeguinte,JFinal,EstadoInt). %add nova lista modificada

alterarSementes(Valor,buraco(X,Y,_),buraco(X,Y,Valor)).

somar1(buraco(X,Y,Valor),buraco(X,Y,Valor1)):-
    Valor1 is Valor +1.


somarPontos([[J1,J2],Pontos1,Pontos2],2,2,_,[[J1,J2],Pontos1,Pontos2]).
somarPontos([[J1,J2],Pontos1,Pontos2],1,1,_,[[J1,J2],Pontos1,Pontos2]).
somarPontos([[J1,J2],Pontos1,Pontos2],2,1,7,[[J1,J2],Pontos1,Pontos2]).
somarPontos([[J1,J2],Pontos1,Pontos2],1,2,0,[[J1,J2],Pontos1,Pontos2]).


somarPontos([[J1,J2],Pontos1,Pontos2],2,1,Pos,[[J1,J2],Pontos1,Pontos2]):-
    Pos < 7,
    nth1(Pos, J1, B),
    sementes(B,Sementes),
    (Sementes < 2 ; Sementes > 3),!.
somarPontos([[J1,J2],Pontos1,pontos2(P)],2,1,Pos,EstadoSeguinte):-
    Pos < 7,
    nth1(Pos, J1, B),
    sementes(B,Sementes),
    (Sementes = 2 ; Sementes = 3),
    semente0(B,B1),
    delete(J1,B,J1Int),
    nth1(Pos,J1Final,B1,J1Int),
    P1 is P + Sementes,
    Pos1 is Pos + 1,
    somarPontos([[J1Final,J2],Pontos1,pontos2(P1)],2,1,Pos1,EstadoSeguinte).

somarPontos([[J1,J2],Pontos1,Pontos2],1,2,Pos,[[J1,J2],Pontos1,Pontos2]):-
    Pos > 0,
    nth1(Pos, J2, B),
    sementes(B,Sementes),
    (Sementes < 2 ; Sementes > 3).
somarPontos([[J1,J2],pontos1(P),Pontos2],1,2,Pos,EstadoSeguinte):-
    Pos > 0,
    nth1(Pos, J2, B),
    sementes(B,Sementes),
    (Sementes = 2 ; Sementes =3),
    semente0(B,B1),
    delete(J2,B,J2Int),
    nth1(Pos,J2Final,B1,J2Int),
    P1 is P + Sementes,
    Pos1 is Pos - 1,
    somarPontos([[J1,J2Final],pontos1(P1),Pontos2],1,2,Pos1,EstadoSeguinte).


printTabuleiro(
    [
        [
            [buraco(1,1,X0),buraco(1,2,X1),buraco(1,3,X2),buraco(1,4,X3),buraco(1,5,X4),buraco(1,6,X5)],
            [buraco(2,1,Y5),buraco(2,2,Y4),buraco(2,3,Y3),buraco(2,4,Y2),buraco(2,5,Y1),buraco(2,6,Y0)]
        ],pontos1(X),pontos2(Y)
    ]
):-
    write([Y0,Y1,Y2,Y3,Y4,Y5]),nl,
    write([X5,X4,X3,X2,X1,X0]),nl,
    write("Pontos Jogador ->"), write(X),nl,
    write("Pontos CPU ->"), write(Y),nl.


ouri:-
    pedirDificuldade(X),
    setDificuldade(X),
    pedirJogador,
    nb_getval(jogador,J),
    estado_inicial(Estado),
    printTabuleiro(Estado),nl,
    ouriAux(Estado,J).


%LVL Fácil e Médio
ouriAux([T,pontos1(X),pontos2(Y)],_):-
    terminal([T,pontos1(X),pontos2(Y)]),
    X > 24,
    Y < 25,
    write("Ganhou!"),nl.
ouriAux([T,pontos1(X),pontos2(Y)],_):-
    terminal([T,pontos1(X),pontos2(Y)]),
    Y > 24,
    X < 25,
    write("Perdeu!"),nl.
ouriAux([T,pontos1(X),pontos2(Y)],_):-
    terminal([T,pontos1(X),pontos2(Y)]),
    recolherPontos([T,pontos1(X),pontos2(Y)],[T,pontos1(XF),pontos2(YF)]),
    (
        (XF > YF,write("Ganhou!"));
        (XF < YF,write("Perdeu!"));
        (XF = 24, YF = 24,write("Empate!"))
    ).
ouriAux(EstadoAtual,Jogada):-
    jogador(Jogada,J),
    J = 2,
    not(terminal(EstadoAtual)),
    (
        (nb_getval(dificuldade,D), D > 4, aumentarDificuldade(Jogada));
        (nb_getval(dificuldade,D), D < 5)
    ),
	alfabeta(EstadoAtual,Op),
    write(Op),nl,
    op(EstadoAtual,2,Op,EstadoInt),
	printTabuleiro(EstadoInt),nl,
    Jogada1 is Jogada + 1,
    ouriAux(EstadoInt, Jogada1).
ouriAux(EstadoAtual,Jogada):-
    jogador(Jogada,J),
    J = 1,
    pedirJogada(Op),
    op(EstadoAtual,1,Op,EstadoInt),
	printTabuleiro(EstadoInt),nl,
    Jogada1 is Jogada + 1,
    ouriAux(EstadoInt, Jogada1).



pedirJogada(Y):-
    write('Em qual coluna quer jogar? '),nl,
    read(X),
    pedirJogadaAux(X,Y).
pedirJogadaAux(X,Y):-
    ((X > 0 , Y is 7 - X);
    (X = 0, Y is 0)).

pedirDificuldade(X):-
    write('Nível:'),nl,
    write('1 -> Fácil'),nl,
    write('2 -> Médio'),nl,
    write('3 -> Difícil'),nl,
    read(X).

setDificuldade(X):-
    ((X = 1, nb_setval(dificuldade,3));
    (X = 2, nb_setval(dificuldade,4));
    (X = 3, nb_setval(dificuldade,6))).

pedirJogador:-
    write("Quem é o primeiro a jogar?"),nl,
    write('1 -> Jogador'),nl,
    write('2 -> CPU'),nl,
    read(X),
    ((X = 1, nb_setval(jogador,0));
    (X = 2, nb_setval(jogador,1))).

aumentarDificuldade(Jogada):-
    (
        (Jogada < 15 ,nb_setval(dificuldade,6));
        (Jogada > 14, Jogada < 21 ,nb_setval(dificuldade,7));
        (Jogada > 20 ,nb_setval(dificuldade,8))
    ).

%######################################################

%Algoritmo Fornecido pelo professor, alterado por nos



% decide qual é a melhor jogada num estado do jogo
% alfabeta(Estado, MelhorJogada)

% se é estado terminal não há jogada 
alfabeta(Ei,terminou) :- terminal(Ei).

% Nota: assume que o jogador é o "2"
alfabeta(Ei,Opf) :- 
	findall(Vc-Op, (op(Ei,2,Op,Es), alfabeta_min(Es,Vc,1,-10000,10000)), L),
    %ouriwrite(L),nl,
	escolhe_max(L,Opf).
    

% se um estado é terminal o valor é dado pela função de utilidade
% Nota: assume que o jogador é o "2"
alfabeta_min(Ei,Val,_,_,_) :- 
	terminal(Ei), 
	valor(Ei,Val), !.
%Condição para a profundidade
alfabeta_min(Ei,Val,P,_,_):-
    nb_getval(dificuldade,J),
	P > J,
	valor(Ei,Val), !.
alfabeta_min(Ei,Val,P,Alfa,Beta) :- 
	P1 is P+1, jogador(P1,J),
	V is 10000,
	findall(Es, op(Ei,J,_,Es), L),
	processa_lista_min(L, P1, V, Alfa, Beta, Val), !.

processa_lista_min([], _, V, _, _, V).
processa_lista_min([H|T], P, V, A, B, V1) :-
	alfabeta_max(H, V2, P, -10000, 10000),
	min(V, V2, V3),
	(V3 < A, V1 is V3; min(B, V3, B1), processa_lista_min(T, P, V3, A, B1, V1)).

min(A,B,A) :- A < B, !.
min(_, B, B).

alfabeta_max(Ei,Val,_,_,_) :- 
	terminal(Ei), 
	valor(Ei,Val), !.
%Condição para a profundidade
alfabeta_max(Ei,Val,P,_,_):-
	nb_getval(dificuldade,J),
	P > J,
	valor(Ei,Val), !.
alfabeta_max(Ei,Val,P,Alfa,Beta) :- 
    %write(Ei),nl,
	P1 is P+1, jogador(P1,J),
	V is -10000,
	findall(Es, op(Ei,J,_,Es), L),
	processa_lista_max(L, P1, V, Alfa, Beta, Val), !.

processa_lista_max([], _, V, _, _, V).
processa_lista_max([H|T], P, V, A, B, V1) :-
	alfabeta_min(H, V2, P, -10000, 10000),
	max(V, V2, V3),
	(V3 >= B, V1 is V3; max(A, V3, A1), processa_lista_max(T, P, V3, A1, B, V1)).

max(A,B,B) :- A < B, !.
max(A, _, A).

% jogador "2" nas jogadas impares e jogador "1" nas jogadas pares
jogador(P, 1) :- X is P mod 2, X = 0.
jogador(P, 2) :- X is P mod 2, X = 1.

% Se a profundidade (P) é par, retorna em Val o maximo de V
seleciona_valor(V,P,Val) :- 
	X is P mod 2, X=0,!, 
	maximo(V,Val).

% Senão retorna em Val o minimo de V
seleciona_valor(V,_,Val):- minimo(V,Val).

%% Predicados auxiliares

escolhe_max([A|R],Val):- escolhe_max(R,A,Val).

escolhe_max([],_-Op,Op).
escolhe_max([A-_|R],X-Op,Val) :- A < X,!, escolhe_max(R,X-Op,Val).
escolhe_max([A|R],_,Val):- escolhe_max(R,A,Val).


maximo([A|R],Val):- maximo(R,A,Val).

maximo([],A,A).
maximo([A|R],X,Val):- A < X,!, maximo(R,X,Val).
maximo([A|R],_,Val):- maximo(R,A,Val).

minimo([A|R],Val):- minimo(R,A,Val).

minimo([],A,A).
minimo([A|R],X,Val):- A > X,!, minimo(R,X,Val).
minimo([A|R],_,Val):- minimo(R,A,Val).
