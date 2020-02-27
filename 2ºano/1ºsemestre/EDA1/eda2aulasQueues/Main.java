package eda2aulasQueues;

import java.util.Scanner;


public class Main {
	
	public static void main(String[] args) {
		F(8);
		/*Queue<Pessoa> filadeEspera=new Queue<>(100);
		String codigo;
		int hora, inteiro;
		while (true) {
			Scanner myCodigo = new Scanner(System.in);
			System.out.println("Código:");
			codigo= myCodigo.nextLine();
			
			if(codigo.equals("E")) {
				System.exit(1);
			}
			
			System.out.println("Hora:");
			hora= myCodigo.nextInt();
			
			
			if(codigo.equals("B")){
				try {
					int media = 0;
					System.out.println("Numero de lugares no autcarro:");
					inteiro= myCodigo.nextInt();
					
					for(int i=0; i<inteiro; i++) {
						int hora2=filadeEspera.dequeue().tchegada;
						media=media+ hora-hora2;
						
					}

					System.out.println("Hora " + hora + " ," + filadeEspera.size()+ " sobram, tempo medio de espera "+ (media/inteiro));
					
				} catch (EmptyQueueException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
			if(codigo.equals("P")){
				try {
					System.out.println("Numero de pessoas que chegam:");
					inteiro= myCodigo.nextInt();
					
					Pessoa passageiro=new Pessoa(hora);
					System.out.println("Hora " + hora + " ," + inteiro + " pessoas chegaram, "+ filadeEspera.size()+ " à espera");
					for (int i=0 ; i<inteiro; i++) {
						filadeEspera.enqueue(passageiro);
					}
						
				} catch (OverflowQueueException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		}*/
		
	}
	public static void F(int n) {
		Queue<Long> q=new Queue<>(20);
		try {
			q.enqueue((long) 0);
			q.enqueue((long)1);
			for(int i=0; i<n ; i++) {
				Long t=q.dequeue();
				System.out.print(t+" ");
				q.enqueue(t+q.front());
				System.out.println(i + " < " + n);
			}
		} catch (OverflowQueueException | EmptyQueueException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
}
