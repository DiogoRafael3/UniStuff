/*homem(X) :- \+mulher(X).

pai(X,Y) :- filho(Y,X), homem(X).
mae(X,Y) :- filho(Y,X), mulher(X).

progenitor(X,Y) :- pai(X,Y).
progenitor(X,Y) :- mae(X,Y).

irmao(X,Y) :- progenitor(P,X), progenitor(P,Y), homem(X).
irma(X,Y) :- progenitor(P,X), progenitor(P,Y), mulher(X).

filho(X,Y) :- progenitor(Y,X), homem(X).
filha(X,Y) :- progenitor(Y,X), mulher(X).

primo(X,Y) :- progenitor(A,X), progenitor(B,Y), progenitor(C,A), progenitor(C,B).


homem(manuel).
homem(jorge).
homem(gil).
homem(tony).
mulher(maria).
mulher(gabriela).
mulher(lara).
mulher(ana).
mulher(lulu).


progenitor(manuel,jorge).
progenitor(manuel,gabriela).
progenitor(maria,jorge).
progenitor(maria,gabriela).
progenitor(jorge,ana).
progenitor(jorge,gil).
progenitor(lara,ana).
progenitor(lara,gil).
progenitor(gabriela,lulu).
progenitor(tony,lulu).*/

num(z).
num(s(X)) :- num(X).

num(z,0).
num(s(X), N) :- num(X, N1), N is N1+1.

mais1(A,B) :- B= s(A).

soma(z,X,X).
soma(s(X),Y,s(Z)) :- soma(X,Y,Z).

subtr(X,Y,Z) :- soma(Z,Y,X).

le(z,X) :- num(X).
le(A,B) :- soma(A,X,B).

lt(z,s(X)) :- num(X).
lt(A,B) :- soma(A, s(_), B).

dobro(A,X) :- soma(A,A,X).

mult(z,_,z).
mult(s(X),Y,A) :- mult(X,Y,B), soma(Y,B,A). 

div(X,Y,A) :- mult(A,Y,X).

pot(_,z,s(z)).
pot(A,s(z),A).
pot(s(X),Y,Z) :- pot(X,Y,A), mult(Y,A,B).

quadrado(A,B) :- pot(A,A,B).