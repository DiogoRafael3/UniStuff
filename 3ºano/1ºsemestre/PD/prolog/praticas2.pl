%prática 2
%1.1
num(z).
num(s(X)) :-
	num(X).

mais1(s(z),z):-
	mais(X,Y),
	X is Y+1.

soma(X,z,X).
soma(X,s(Y),s(Z)):-
	soma(X,Y,Z).

subtr(X,z,X).
subtr(s(X),X,s(z)).
subtr(s(X),s(Y),Z):-
	subtr(X,Y,Z).

le(z,X):-num(X).
le(s(X),s(Y)):-le(X,Y).

le(X,Y):-
	X=<Y.

lt(z,s(X)):-num(X).
lt(s(X),s(Y)):-lt(X,Y).

lt(X,Y):-
	X<Y.

gt(X,Y):-
	X>Y.

ge(X,Y):-
	X>=Y.

dobro(z,z).
dobro(X,Y):-
	soma(Y,Y,X).

mult(z,_,z).
mult(s(X),Y,Z):-
	mult(X,Y,W),
	soma(W,Y,Z).

div(X,s(z),X):-num(X).
div(X,X,s(z)):-num(X).
div(X,Y,Z):-
	mult(Z,Y,X).


div(X,Y,Z,W):-
	mult(Y,Z,M),
	soma(M,W,X),
	lt(W,Y).

%1.2
%pot(s(z),X,s(z)):-num(X).%1
pot(X,z,s(z)):-num(X).%x^0
pot(X,s(Y),Z):-
	pot(X,Y,W),
	mult(W,X,Z).

quadrado(X,Z):-pot(X,s(s(z)),Z).
%quadrado(X,Z):-mult(X,X,Z).

%2.1

lista([]).
lista([_|L]):-lista(L).

membro(X, [X|_]).
membro(X,[_|L]):-membro(X,L).

prefixo([],_).
prefixo([X|A],[X|B]):-prefixo(A,B).

sufixo(A,A).
sufixo(A,[_|B]):-sufixo(A,B).

sublista(S,L):-prefixo(S,L).
sublista(S,[_|L]):-sublista(S,L).

catena([],L,L).
catena([X|Xs], L, [X|Y]):- catena(Xs, L, Y).

nrev([],[]).
nrev([X|Y],L):-
	nrev(Y,LR),
	catena(LR,[X],L).

rev(L,R):- rev(L,[],R).
rev([],R,R).
rev([A|B],X,R):- rev(B, [A|X],R).

sel(E,[E|L],L).
sel(E,[X|L],[X|M]):- sel(E,L,M).

selall(_,[],[]).
selall(E,[X|Xcauda],[X|Lcauda]):-
	X \= E,
	selall(E,Xcauda,Lcauda).
selall(E,[E|Xcauda],L):-
	selall(E,Xcauda,L).

cortar([X|Xcauda],X,[],[X|Xcauda]).
cortar([X|Xcauda],E,[X|L1],L2):-
	cortar(Xcauda,E,L1,L2).

partir([],_,[],[]).
partir([X|Xcauda],E,[X|L1],L2):-
	lt(X,E),
	partir(Xcauda,E,L1,L2).
partir([X|Xcauda],E,L1,[X|L2]):-
	ge(X,E),
	partir(Xcauda,E,L1,L2).

misturar([],L2,L2).
misturar(L1,[],L1).
misturar([L1|L1cauda],[L2|L2cauda],[L1,L2|Cauda]):-
	misturar(L1cauda,L2cauda,Cauda).

random(0,[]).
random(N,[X|L]):-
	N1 is N-1,
	random(X),
	random(N1,L).


randoml(0,_,[]).
randoml(N,K,[X|L]):-
	N1 is N-1,
	K1 is K-1,
	random(0,K,X),
	randoml(N1,K,L).

sum(X,0,X).
sum(X,Y,N):-
	Y1 is Y-1,
	X1 is X+1,
	sum(X1,Y1,N).
sum([],0).
sum([X|L],N):-
	sum(L,N1),
	sum(N1,X,N).

prod(X,0,0).
prod(X,Y,Z):-
	Y1 is Y-1,
	prod(X,Y1,Z1),
	sum(X,Z1,Z).
prod([X|[]],X).
prod([X|L],N):-
	prod(L,N1),
	prod(N1,X,N).

lsum([], 0).
lsum([Head | Tail], TotalSum) :-
    list_sum(Tail, Sum1),
    TotalSum is Head + Sum1.

len([],0).
len([_|L],N):-
	len(L,N1),
	N is N1+1.

calc :- write('>'), read(G), tl(G).

calc(end_of_file):- !.