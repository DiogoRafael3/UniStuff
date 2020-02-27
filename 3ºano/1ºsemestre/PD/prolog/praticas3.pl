no(A,B).
no(X,L,R).

fdic([]).
fdic([_=_|D]) :- 
	fdic(D).

flookup([K=V|_], K, V).
flookup([_|D], K, V) :- 
	flookup(D, K, V).

finsert([], K, V, [K=V]).
finsert([K=_|_], K, _, _) :- !, 
	fail.
finsert([KV|DI], K, V, [KV|DO]) :- 
	finsert(DI, K, V, DO).

fremove([], _, []).
fremove([K=_|D], K, D) :- !.
fremove([KV|DI], K, [KV|DO]) :- 
	fremove(DI, K, DO).

createdic([],[]).

% abp(A) se A for binaria, dois casos: no(XXX, L, R) e nil
abp(nil).
abp(no(_, L, R)) :- 
	abp(L), 
	abp(R).
% alookup(ABP, K, V) se (K,V) for membro de ABPalookup(no(K=V, _, _), K, V).
alookup(no(X=_, L, _), K, V) :- 
	K @< X, !, 
	alookup(L, K, V).
alookup(no(X=_, _, R), K, V) :- 
	K @> X, !,
	alookup(R, K, V).
% ainsert(IN, K, V, OUT)
ainsert(nil, K, V, no(K=V, nil, nil)).
ainsert(no(X=VX, L, R), K, V, no(X=VX, LL, R)) :-    
	K@<X, ainsert(L, K, V, LL).
ainsert(no(X=VX, L, R), K, V, no(X=VX, L, RR)) :-    
	K@>X, ainsert(R, K, V, RR).

domain(VAR,MIN,MAX):- VAR#>MIN, VAR#<MAX.

sendmoremoney(Vars) :-
    Vars = [S,E,N,D,M,O,R,Y],
    fd_domain(Vars,0,9),
    S #\= 0,
    M #\= 0,
    fd_all_different(Vars),
                 1000*S + 100*E + 10*N + D
    +            1000*M + 100*O + 10*R + E
    #= 10000*M + 1000*O + 100*N + 10*E + Y,
    fd_labeling(Vars).


%There are 4 children: Abe, Dan, Mary, and Sue. 
%Their ages, in no particular order, are 3, 5, 6, and 8. 
%Abe is older than Dan. Sue is younger than Mary. 
%Sue's age is Dan's age plus 3 years. 
%Mary is older than Abe.

ages(Children):-
	Children = [A,D,M,S],
	fd_domain(Children,[3,5,6,8]),
	fd_all_different(Children),
	A #> D, S #< M, S #= D+3, M #> A,
	fd_labeling(Children).




