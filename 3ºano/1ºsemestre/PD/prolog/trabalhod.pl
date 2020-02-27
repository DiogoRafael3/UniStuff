solve([RegrasLinhas, RegrasColunas|_]):- !,
    length(RegrasLinhas, NLinhas),
    length(RegrasColunas, Ncolunas),
    TamanhoLinhas is Ncolunas,
    TamanhoColunas is NLinhas,
    iniciar(NLinhas, TamanhoLinhas, RespostaLinhas),
    regras(RegrasLinhas, TamanhoLinhas, RespostaLinhas),
    iniciar(NColunas, TamanhoColunas, RegrasColunas),
    regras(RegrasColunas, TamanhoColunas, RespostaColunas),
    transpose(RespostaColunas, RespostaFinal),
    %fd_labeling(RespostaFinal),
    print(RespostaFinal).


/**/
%https://stackoverflow.com/questions/4280986/how-to-transpose-a-matrix-in-prolog

%transpor matriz
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
%aplicar regras
regras([],_,[]).
regras([Regra|Regras], Tamanho, [Resposta|Respostas]):- !,
    %sum_list(Regra, R),
    %fd_exactly(R, Resposta, 1),
    regras(Regras, Tamanho, Respostas).






%iniciar(X,Y,L) -> inicia uma lista L com X listas de tamanho Y
iniciar(0,_,[]).
iniciar(NLinhas,TamanhoLinhas, [NovaLista|Lista]):- !,
    newLine(TamanhoLinhas, NovaLista),
    iniciar(NLinhas1, TamanhoLinhas, Lista),
    NLinhas is NLinhas1 + 1,
    NLinhas >= 0.


newLine(0,[]).
newLine(N,L):- !,
    length(L, N),
    fd_domain(L, 0, 1).
    %fd_labeling(L).

%solve([[[1],[3],[1,1,1],[1],[1]],[[1],[1],[5],[1],[1]]]).

%