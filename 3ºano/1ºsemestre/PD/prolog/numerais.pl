num(z).
num(s(X)) :-
	num(X).


num(z, 0).
num(s(X), N):-
	num(X, Y),
	N is Y + 1.

sum(X,z,X).
sum(X,s(Y),s(Z)):-
	sum(X,Y,Z).

lt(z,s(X)):-num(X).
lt(s(X),s(Y)):-
	lt(X,Y).

le(z,X):- num(X).
le(s(X),s(Y)):-
	le(X,Y).

gt(s(X),z):-num(X).
gt(s(X),s(Y)):-
	gt(X,Y).

ge(X,z):- num(X).
ge(s(X),s(Y)):-
	ge(X,Y).

mult(z, _, z).
mult(s(A), B, X) :-
	mult(A, B, Y),
	sum(B, Y, X).

/*div(z,_).
div(X,s(z)):- num(X).
divisivel(X,Y):-
	div(X,Y,Z).
div(X,Y,Z):-mult(Y,Z,X).*/

max(A,B,C):-
	le(s(A),C),
	le(s(B),C).

lista([]).
lista([_|L]):-
	lista(L).

somalista([],z).
somalista([I|Is],S):-
	somalista(Is,S0),
	/*S is I+S0*/
	sum(I,S0,S).