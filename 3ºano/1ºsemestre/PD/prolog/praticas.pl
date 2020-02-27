%prática 1

homem(andre).

homem(miguel).

homem(diogo).

homem(david).

homem(manuel).

homem(inocencio).

mulher(ana).

mulher(marta).

mulher(lucia).

mulher(sara).

mulher(carolina).

mulher(sofia).

mulher(rita).

mulher(gabriela).

mulher(maria).

mulher(zulmira).

mulher(zezinha).

progenitor(marta,ana).

progenitor(andre,ana).

progenitor(lucia,sofia).

progenitor(andre,sofia).

progenitor(carolina,lucia).

progenitor(sara,marta).

progenitor(manuel, diogo).

progenitor(manuel, david).

progenitor(manuel, rita).

progenitor(zezinha, manuel).

progenitor(zezinha, zulmira).

progenitor(gabriela,diogo).

progenitor(gabriela,david).

progenitor(gabriela,rita).

progenitor(inocencio,gabriela).

progenitor(maria,gabriela).


%1
%X é irmão de Y
irmao(X,Y):-
	homem(X),
	progenitor(Z,X),
	progenitor(Z,Y).

%X é irmã de Y
irma(X,Y):-
	mulher(X),
	progenitor(Z,X),
	progenitor(Z,Y).


%2
%X é pai de Y
pai(X,Y):-
	homem(X),
	progenitor(X,Y).

%X é mãe de Y
mae(X,Y):-
	mulher(X),
	progenitor(X,Y).

%3
%X é filho de Y
filho(X,Y):-
	homem(X),
	progenitor(Y,X).

%X é filha de Y
filha(X,Y):-
	mulher(X),
	progenitor(Y,X).

%4
%X é primo de Y
primo(X,Y):-
	progenitor(Z,X),
	progenitor(C,Y),
	progenitor(W,Z),
	progenitor(W,C).

%6
%X é tio de Y
tio(X,Y):-
	homem(X),
	progenitor(Z,Y),
	irmao(X,Z).

%X é tia de Y
tia(X,Y):-
	mulher(X),
	progenitor(Z,Y),
	irma(X,Z).

%7
%X é avo de Y
avo(X,Y):-
	progenitor(Z,Y),
	progenitor(X,Z).

%8
%X é neto de Y
neto(X,Y):-
	homem(X),
	progenitor(Z,X),
	progenitor(Y,Z).

%X é neta de Y
neta(X,Y):-
	mulher(X),
	progenitor(Z,X),
	progenitor(Y,Z).

%9
%X é antepassado de Y
antepassado(X,Y):-
	progenitor(X,Y).
antepassado(X,Y):-
	progenitor(X,Z),
	antepassado(Z,Y).

%11
%X é descendente de Y
descendente(X,Y):-
	progenitor(Y,X).
descendente(X,Y):-
	progenitor(Z,X),
	descendente(Z,Y).

%10
%X é parente Y
parente(X,Y):-
	antepassado(X,Y).
parente(Y,X):-
	antepassado(X,Y).
parente(X,Y):-
	X \= Y,
	antepassado(Z,X),
	antepassado(Z,Y).

%12
%X é meio-irmão de Y
meio_irmao(X,Y):-
	progenitor(Z,X),
	progenitor(Z,Y),
	progenitor(W,X),
	progenitor(P,Y),
	P \= W,
	X \= Y.