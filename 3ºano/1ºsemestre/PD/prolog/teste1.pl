%1
num(z).
num(s(X)) :-
	num(X).

soma(X,z,X).
soma(X,s(Y),s(Z)):-
	soma(X,Y,Z).

mult(z, _, z).
mult(s(A), B, X) :-
	mult(A, B, Y),
	soma(B, Y, X).

le(z,X):-num(X).
le(s(X),s(Y)):-le(X,Y).
%a
num(z,0).
num(s(X),N):-
	N1 is N-1,
	num(X,N1).

%b
divisivel(_,s(z)).
divisivel(X,X).
divisivel(X,Y):-
	mult(Y,Z,X).

%c
max(A,z,A).
max(z,B,B).
max(s(A),s(B),C):-
	max(A,B,C).

%2
somalista([],z).
somalista([X|XTail],Soma):-
	somalista(XTail,Z),
	soma(Z,X,Soma).

%3
%não faço ideia

%4
impares([],[]).
impares([_],[]).
impares([Impar,_|LTail],[L1|NTail]):-
	impares(LTail,NTail),
	L1 is Impar.

%5
in(E,[E|_]).
in(E,[EL|T]):-
	in(E,T).
	