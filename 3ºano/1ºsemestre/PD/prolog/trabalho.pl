solve([RegrasLinhas, RegrasColunas|_]):- !,
    length(RegrasLinhas, NLinhas),
    length(RegrasColunas, Ncolunas),
    TamanhoLinhas is Ncolunas,
    TamanhoColunas is NLinhas,
    iniciar(NLinhas, TamanhoLinhas, RespostaLinhas),
    regras(RegrasLinhas, TamanhoLinhas, RespostaLinhas),
    transpose(RespostaLinhas, RespostaFinal),
    regras(RegrasColunas, TamanhoColunas, RespostaFinal),
    maplist(fd_labeling, RespostaLinhas),
    %print(RespostaLinhas),
    maplist(printConsola, RespostaLinhas).
    
printConsola([]):-
    print('\n').
printConsola([H|T]):-
    H = 1,
    print('X'),
    printConsola(T). 
printConsola([H|T]):- 
    H = 0,
    print('.'),
    printConsola(T). 


/**/
%https://stackoverflow.com/questions/4280986/how-to-transpose-a-matrix-in-prolog

transpose([], []).
transpose([F|Fs], Ts) :-
    transpose(F, [F|Fs], Ts).

transpose([], _, []).
transpose([_|Rs], Ms, [Ts|Tss]) :-
        lists_firsts_rests(Ms, Ts, Ms1),
        transpose(Rs, Ms1, Tss).

lists_firsts_rests([], [], []).
lists_firsts_rests([[F|Os]|Rest], [F|Fs], [Os|Oss]) :-
        lists_firsts_rests(Rest, Fs, Oss).

/**/

regras([],_,[]):-!.
regras([Regra|Regras], Tamanho, [Resposta|Respostas]):- !,
    %check_line(Resposta, Regra),
    sum_list(Regra, R),
    fd_exactly(R, Resposta, 1),
    sequencia(Regra, SubResposta),
    sublist(SubResposta, Resposta),
    regras(Regras, Tamanho, Respostas).



%iniciar(X,Y,L) -> inicia uma lista L com X listas de tamanho Y
iniciar(0,_,[]).
iniciar(NLinhas,TamanhoLinhas, [NovaLista|Lista]):- !,
    newLine(TamanhoLinhas, NovaLista),
    iniciar(NLinhas1, TamanhoLinhas, Lista),
    NLinhas is NLinhas1 + 1,
    NLinhas >= 0.

newLine(0,[]).
newLine(N,L):-
    length(L, N),
    fd_domain(L, 0,1).
    %fd_labeling(L).

/**/




write_one(0,[]):- !.
write_one(N,[1|T1]):-
	N1 is N-1,
	write_one(N1,T1).

append([],L,L).
append([X|Xs], L, [X|Y]):- append(Xs, L, Y).

sequencia(H,L):-
	length(H,1),
	write_one(H,L).
sequencia([Regra|RegraTail],NewList):-
	sequencia(RegraTail,NewList1),
	write_one(Regra,List1),
	append(List1,[0],List10),
	append(List10,NewList1,NewList).

/*

solve([[[5],[5],[2,2],[1,2],[1]],[[3],[5],[2],[4],[1]]]).

solve([
    [[5],[5],[2,2,1],[1,2,2],[1,4]],
    [[3,2],[5],[2,3],[4,1],[1,4]]
]).



    fd_labeling(Resposta),


solve([
    [[5],[1,2,2],[1,4]],
    [[3,2],[5],[2,3],[4,1],[1,4]]
]).

solve([[[1],[3],[1,1,1],[1],[1]],[[1],[1],[5],[1],[1]]]).



solve([[[3],[2,1],[3,2],[2,2],[6],[1,5],[6],[1],[2]],[[1,2],[3,1],[1,5],[7,1],[5],[3],[4],[3]]]).

solve([
    [[3,3,2], [5,3,2], [2,2,2,2], [2,2,2,2], [3,2,2,1,2],[7,3,3,3], [7,10], [3,3,9], [2,2,3,3], [2,3,2,1]], 
    [[3], [6],[7], [7], [2,2], [3,2], [7], [1,7], [2,3], [6,1], [7], [5], [4],[4], [4], [4], [4], [4], [8], [7]]
    ]).



solve([[[4],[1],[3,1],[2],[2]],[[1,1],[1,1],[3],[1,2],[3]]]).



ESTES FUNCIONAM!

solve([[[1],[3],[1,1,1],[1],[1]],[[1],[1],[5],[1],[1]]]).

solve([[[3],[3],[1,2],[2],[2]],[[1],[2],[2],[1,3],[1,3]]]).

solve([[[1,1],[2],[2],[4],[3]],[[1,3],[3],[2],[1,1],[2]]]).

solve([[[5],[3],[5],[3],[1,1,1]],[[1],[1,1],[1,2],[5],[4],[3,1]]]).

solve([[[5],[5],[4],[1,1,1],[6],[5]],[[1],[2,3],[3,2],[6],[3,2],[6]]]).



Não funciona bem
solve([[[4],[5],[1],[1,3],[2,2],[5]],[[2],[1,2],[2,1],[2,1,1],[6],[2,3]]]).

solve([[[2,2],[1,2],[1],[1],[2,4],[6],[1,1]],[[1,1],[1,2],[2,2],[1,2],[1,2],[1,2],[1,4]]]).




solve([[[3,3,2], [5,3,2], [2,2,2,2], [2,2,2,2], [3,2,2,1,2], [7,3,3,3], [7,10], [3,3,9], [2,2,3,3], [2,3,2,1]], [[3], [6], [7], [7], [2,2], [3,2], [7], [1,7], [2,3], [6,1], [7], [5], [4], [4], [4], [4], [4], [4], [8], [7]]]).
*/