perm_n(N,L):-
	length(L,N),
	fd_domain(L,1,N),
	fd_all_different(L),
	fd_labeling(L).

perm_p(0,[]).
perm_p(N,L):-
	select(N,L,L2),
	N1 is N-1,
	perm_p(N1,L2).

incopiavel(FC,CC,FV,CV):- !,
	FC#=FV+2 ; FC#=FV-2,
	CC#=CV+3 ; CC#=CV-1.
