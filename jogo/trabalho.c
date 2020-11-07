#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> //sleep
#include <locale.h> //pt-br
#include <ctype.h>
#include <time.h>  

#define RED    "\x1b[31m"
#define GREEN  "\x1b[0;32m"
#define WHITE  "\x1b[0m"
#define D2     "\x1b[0m"
#define D1     "\x1b[1;33;43m"
#define GREY   "\x1b[0;37m"
#define YELLOW "\x1b[1;33m"

void telaDeVitoria(player){
	system("cls");
	printf(GREEN);
	printf(" #     #  ###  #######  #######  ######   ###     #        \n");
	printf(" #     #   #      #     #     #  #     #   #     # #       \n"); 
	printf(" #     #   #      #     #     #  #     #   #    #   #      \n");
	printf(" #     #   #      #     #     #  ######    #   #     #     \n");
	printf("  #   #    #      #     #     #  #   #     #   #######     \n");
	printf("   # #     #      #     #     #  #    #    #   #     #     \n"); 
	printf("    #     ###     #     #######  #     #  ###  #     #     \n");
	printf(D2);	
}
void tabela(int player1,int player2){
	printf(GREEN"          P O N T U A Ç Ã O\n"D2);
	printf("___________________________________________________\n");
	printf("O "YELLOW"PLAYER"D2" 1 TEM %i PONTOS\n",player1);
	printf("O "YELLOW"PLAYER"D2" 2 TEM %i PONTOS\n",player2);
	printf("___________________________________________________\n");
	system("pause");
	system("cls");
}
void conclusao(int n_tentativas,int limite_tentativas){
	if(n_tentativas < limite_tentativas){
		printf(GREEN"\nPARABÉNS! VOCÊ VENCEU\n"D2);
	}else{
		printf(RED"\nVOCÊ PERDEU! TENTE NOVAMENTE…\n"D2);
	}
}
//existem duas para que eu n me perca no codigo
void conclusaoArriscada(int x){
	if(x==10){
		printf(GREEN"\nPARABÉNS! VOCÊ VENCEU\n"D2);	
	}
	if(x==20){
		printf(RED"\nVOCÊ PERDEU! TENTE NOVAMENTE…\n"D2);
	}
}
void bonecos(int tentativas){
	if(tentativas==7){
		printf("||===========||  \n");
		printf("||           ||  \n");
		printf("||               \n");
		printf("||               \n");
		printf("||               \n");
		printf("||               \n");
		printf("||               \n");
	}
	if(tentativas==6){
		printf("||===========||  \n");
		printf("||           ||  \n");
		printf("||               \n");
		printf("||           ");
		printf(YELLOW);
		printf("O   \n");
		printf(WHITE);
		printf("||               \n");
		printf("||               \n");
		printf("||               \n");
	}
	if(tentativas==5){
		printf("||===========||  \n");
		printf("||           ||  \n");
		printf("||               \n");
		printf("||           ");
		printf(YELLOW);
		printf("O   \n");
		printf(WHITE);
		printf("||           ");
		printf(YELLOW);
		printf("|   \n");
		printf(WHITE);
		printf("||               \n");
		printf("||               \n");
	}
	if(tentativas==4){
		printf("||===========||  \n");
		printf("||           ||  \n");
		printf("||               \n");
		printf("||           ");
		printf(YELLOW);
		printf("O   \n");
		printf(WHITE);
		printf("||          ");
		printf(YELLOW);
		printf("/|   \n");
		printf(WHITE);
		printf("||               \n");
		printf("||               \n");
	}
	if(tentativas==3){
		printf("||===========||  \n");
		printf("||           ||  \n");
		printf("||               \n");
		printf("||           ");
		printf(YELLOW);
		printf("O   \n");
		printf(WHITE);
		printf("||          ");
		printf(YELLOW);
		printf("/|\\  \n");
		printf(WHITE);
		printf("||               \n");
		printf("||               \n");
	}
	if(tentativas==2){
		printf("||===========||  \n");
		printf("||           ||  \n");
		printf("||               \n");
		printf("||           ");
		printf(YELLOW);
		printf("O   \n");
		printf(WHITE);
		printf("||          ");
		printf(YELLOW);
		printf("/|\\  \n");
		printf(WHITE);
		printf("||           ");
		printf(YELLOW);
		printf("|   \n");
		printf(WHITE);
		printf("||          ");
		printf(YELLOW);
		printf("/    \n");
		printf(WHITE);
	}
	if(tentativas==1){
		printf("||===========||  \n");
		printf("||           ||  \n");
		printf("||               \n");
		printf("||           ");
		printf(RED);
		printf("O   \n");
		printf(WHITE);
		printf("||          ");
		printf(RED);
		printf("/|\\  \n");
		printf(WHITE);
		printf("||           ");
		printf(RED);
		printf("|   \n");
		printf(WHITE);
		printf("||          ");
		printf(RED);
		printf("/ \\  \n");
		printf(WHITE);
		sleep(2);
	}	
}
void telaInicial (){ 
	printf(GREEN);
	printf("-------------------------------------------------------------------------------------------------------------\n");
	printf("|       #  #######   #####   #######      ######      #         #######  #######  ######    #####      #    |\n");
    printf("|       #  #     #  #     #  #     #      #     #    # #        #        #     #  #     #  #     #    # #   |\n");
    printf("|       #  #     #  #        #     #      #     #   #   #       #        #     #  #     #  #         #   #  |\n");
    printf("|       #  #     #  #  ####  #     #      #     #  #     #      #####    #     #  ######   #        #     # |\n");
    printf("| #     #  #     #  #     #  #     #      #     #  #######      #        #     #  #   #    #        ####### |\n");
    printf("| #     #  #     #  #     #  #     #      #     #  #     #      #        #     #  #    #   #     #  #     # |\n");
    printf("|  #####   #######   #####   #######      ######   #     #      #        #######  #     #   #####   #     # |\n");  
	printf("-------------------------------------------------------------------------------------------------------------\n");
	printf(D2);
	sleep(1);
}
void regras(){
	printf(RED"\n\n");
	printf("                                              ---------------              \n");
	printf("                                              | R E G R A S |              \n");
	printf("                                              ---------------              \n\n");
	printf("[] O jogo da forca é um jogo em que o jogador tem que acertar qual é a palavra proposta, tendo como dica o número de letras e o tema ligado à palavra. \n\n");
	printf("[] A cada letra errada, é desenhada uma parte do corpo do enforcado\n\n");
	printf("[] O jogo termina ou com o acerto da palavra ou com o término do preenchimento das partes corpóreas do enforcado.\n\n");
	printf("[] Objetivo - Ser o jogador a fazer mais pontos em 5 partidas\n\n"D2);
	printf("\n");
	sleep(1);
}	
void carregar (){
	int i;
	int x;
	for (x = 0; x < 15; x++){ 
    	for (i = 0; i < 1; i++){
    		printf("\n\n\n\n\n\n\n\n\n\n");
   			printf("                                               L O A D I N G\n");
    		printf("                                               .            \n");
    		sleep(0.4);
			system("cls"); 
    	}   
    	for (i = 0; i < 1; i++){
    		printf("\n\n\n\n\n\n\n\n\n\n");
   			printf("                                               L O A D I N G\n");
    		printf("                                                     .      \n");
    		sleep(0.4);
			system("cls"); 
    	}   
    	for (i = 0; i < 1; i++){
    		printf("\n\n\n\n\n\n\n\n\n\n");
   			printf("                                               L O A D I N G\n");
    		printf("                                                           .\n");
    		sleep(0.4);
			system("cls"); 	
		}  
	}
	 
}
void lehValidaPalavraChave(char *palavra){
	int limite;
	fflush(stdin);
	printf(D1"[Limite max de 20 caracteres]\n"D2);
	printf("Informe a palavra CHAVE\n\n");
	do{
		do{
			gets(palavra);
			limite=strlen(palavra);
			if(limite >20){
				printf(D1"Excedeu o limite de caracter! Tente novamente....\n"D2);
			}
			if(limite <1){
				printf(D1"Você não digitou nada! Tente novamente...\n"D2);
			}
		}while(limite < 1 || limite >20);
		if(strcmp (" ",palavra)==0||strcmp (palavra,"!")==0||strcmp (palavra,"@")==0||strcmp (palavra,"#")==0||strcmp (palavra,"$")==0||strcmp (palavra,"%")==0||strcmp (palavra,"&")==0||strcmp (palavra,"*")==0||strcmp (palavra,"(")==0||strcmp (palavra,")")==0){
			printf("Por favor entre com uma palavra \n");
		}
	}while((strcmp(" ",palavra)==0||strcmp (palavra,"!")==0||strcmp (palavra,"@")==0||strcmp (palavra,"#")==0||strcmp (palavra,"$")==0||strcmp (palavra,"%")==0||strcmp (palavra,"&")==0||strcmp (palavra,"*")==0||strcmp (palavra,"(")==0||strcmp (palavra,")")==0));
	system("cls");
}
void lehValidaArriscada(char *arriscada){
	int limite;
	do{
		do{
			gets(arriscada);
			limite=strlen(arriscada);
			if(limite >20){
				printf(D1"Excedeu o limite de caracter! Tente novamente....\n"D2);
			}
			if(limite <1){
				printf(D1"Você não digitou nada! Tente novamente...\n"D2);
			}
		}while(limite < 1 || limite >20);
		if(strcmp (" ",arriscada)==0||strcmp (arriscada,"!")==0||strcmp (arriscada,"@")==0||strcmp (arriscada,"#")==0||strcmp (arriscada,"$")==0||strcmp (arriscada,"%")==0||strcmp (arriscada,"&")==0||strcmp (arriscada,"*")==0||strcmp (arriscada,"(")==0||strcmp (arriscada,")")==0){
			printf("Por favor entre com uma palavra \n");
		}
	}while((strcmp(" ",arriscada)==0||strcmp (arriscada,"!")==0||strcmp (arriscada,"@")==0||strcmp (arriscada,"#")==0||strcmp (arriscada,"$")==0||strcmp (arriscada,"%")==0||strcmp (arriscada,"&")==0||strcmp (arriscada,"*")==0||strcmp (arriscada,"(")==0||strcmp (arriscada,")")==0));
	system("cls");
}
void lehValidaTema(char *tema){
	int limite;
	printf(D1"[Não é necessário o uso só desses temas]\n\n"D2);
	printf(D1"[Limite max de 15 caracteres]\n"D2);
	printf("Algumas sugestões de temas \n");
	printf(GREEN"-------------------------------------------\n"D2);
	printf(RED  "|  Frutas       |     Animais             |\n"D2);
	printf(GREEN"|  Jogos        |     Flores              |\n"D2);
	printf(RED  "|  Marca        |     Profissões          |\n"D2);
	printf(GREEN"|  Objetos      |     Capitais de países  |\n"D2);
	printf(RED  "-------------------------------------------\n"D2);
	printf("\n\n\n\n");
	do{
		do{
			printf("Informe o tema: \n");
			gets(tema);
			limite=strlen(tema);
			if(limite >15){
				printf("Excedeu o limite de caracter! Tente novamente....\n");
			}
			if(limite <1){
				printf("Você não digitou nada! Tente novamente...\n");
			}
		}while(limite < 1 || limite >15);
		if(strcmp (" ",tema)==0||strcmp (tema,"!")==0||strcmp (tema,"@")==0||strcmp (tema,"#")==0||strcmp (tema,"$")==0||strcmp (tema,"%")==0||strcmp (tema,"&")==0||strcmp (tema,"*")==0||strcmp (tema,"(")==0||strcmp (tema,")")==0){
			printf("Por favor entre com uma palavra \n");
		}
	}while((strcmp(" ",tema)==0||strcmp (tema,"!")==0||strcmp (tema,"@")==0||strcmp (tema,"#")==0||strcmp (tema,"$")==0||strcmp (tema,"%")==0||strcmp (tema,"&")==0||strcmp (tema,"*")==0||strcmp (tema,"(")==0||strcmp (tema,")")==0));
	system("cls");
}
int lehValidaTipoDeJogo(int tipoDeJogo){
	do{
		fflush(stdin);
		scanf("%i",&tipoDeJogo);
		if(tipoDeJogo!=1&&tipoDeJogo!=2){
			printf(D1"Por favor informe 1 ou 2!\n"D2);
		}
	}while(tipoDeJogo!=1&&tipoDeJogo!=2);
	return tipoDeJogo;
}
int lehValidaPlayer(int player){
	do{
		fflush(stdin);
		scanf("%i",&player);
		if(player!=1&&player!=2){
			printf(D1"Por favor informe 1 ou 2!\n"D2);
		}
	}while(player!=1&&player!=2);
	fflush(stdin);
	return player;
}
int lehValidaDificuldade(int dificuldade){
	do{
		fflush(stdin);
		scanf("%i",&dificuldade);
		if(dificuldade!=1&&dificuldade!=2&&dificuldade!=3){
			printf(D1"Por favor selecione a dificuldade \n"D2);
		}
	}while(dificuldade!=1&&dificuldade!=2&&dificuldade!=3);
	return dificuldade;
}
char lehValidaLetra(char chute){
	do{
		scanf("%c",&chute);
		fflush(stdin);
		if(chute==' '||chute=='!'||chute=='@'||chute=='$'||chute=='%'||chute=='¨'||chute=='&'||chute=='('||chute==')'){
			printf("Por favor entre com uma letra \n");
		}
	}while(chute==' '||chute=='!'||chute=='@'||chute=='$'||chute=='%'||chute=='¨'||chute=='&'||chute=='('||chute==')');
	return chute;
}
int lehValidaContinuacao(int continuacao){
	do{
		fflush(stdin);
		scanf("%i",&continuacao);
		if(continuacao!=1 && continuacao !=2){
			printf("Por favor coloque 1 ou 2!\n");
		}
	}while(continuacao!=1 && continuacao !=2);
	return continuacao;
}


int main (){
	system("color 0F");
	srand (time(NULL));
	setlocale(LC_ALL,"");//IDIOMA
	char palavra[50],tentativa[50],copiaPalavra[50],tema[50],arriscada[50],possiveisPalavras[50],possiveisTemas[50];
	char chute,pause;
	int n_tentativas,corretas,tentativas,tipoDeJogo=0,possiveisT,possiveisP;
	int i,fim,retornar, encontrei,x,axx;
	int limite_tentativas,continuacao,dificuldade;
	int y=0,player=0,player1=0,player2=0,round=0;
	
	//Tela inicial
	system("cls");
	telaInicial ();
	regras();
	printf(D1"\n\nCOISAS IMPORTANTES VÃO ESTAR EM DESTAQUES!\n\n\n\n\n"D2);
	system("PAUSE");
	//Solo ou multiplayer
	system("cls");
	printf(D1"Escolha o tipo de jogo\n\n\n"D2);
	printf("1- Single player "D1"(Você ira jogar contra o computador)\n"D2);
	printf("2- multiplayer "D1"(Você ira jogar contra um amigo)\n"D2);
	tipoDeJogo=lehValidaTipoDeJogo(tipoDeJogo);
	system("cls");
	//Carregando
 	carregar();
	do{
		fflush(stdin);
		strcpy(palavra,"");
		strcpy(tentativa,"");
		strcpy(copiaPalavra,"");
		strcpy(tema,"");
		strcpy(arriscada,"");
		chute= ' ';
		n_tentativas=0,corretas=0,tentativas=0,y=0,limite_tentativas=7,continuacao=0,x=0,encontrei=0;
		// informe o player
		if(tipoDeJogo==2){
			printf("\n\n");
			printf(D1"[Se o P1 perder o ponto vai para o P2 e assim vale o mesmo para P2]\n\n"D2);
			printf("Informe quem vai jogar: \n");
			printf("1 - player1\n");
			printf("2 - player2\n");
			player=lehValidaPlayer(player);
			system("cls");
			// busca uma palavra
			lehValidaPalavraChave(&palavra);
			strcpy(copiaPalavra,palavra);
			//Mostra o tema
			lehValidaTema(&tema);
		}
		if(tipoDeJogo==1){
			system("CLS");
			//solicita ao usuario a dificuldade na qual ele quer jogar 
			printf(YELLOW"Escolha a dificulade\n"D2);
			printf("1- Easy(3 temas e 9 palavras)\n");
			printf("2- Medium(6 temas e 36 palavras)\n");
			printf("3- hard(12 temas e 144 palavras)\n");
			fflush(stdin);
			dificuldade=lehValidaDificuldade(dificuldade);
			system("CLS");
			//Dificuldades do jogo
			if(dificuldade==1){
				possiveisT=rand() % 3 + 1;
				possiveisP=rand() % 3 + 1;
				if(possiveisT==1){
					strcpy(possiveisTemas,"Frutas");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Banana");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Uva");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Coco");
					}
				}
				if(possiveisT==2){
					strcpy(possiveisTemas,"Animais");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Elefante");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Macaco");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Cavalo");
					}
				}
				if(possiveisT==3){
					strcpy(possiveisTemas,"Objetos");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Tesoura");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Pratos");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Colher");
					}
				}
			}
			if(dificuldade==2){
				possiveisT=rand() % 6 + 1;
				possiveisP=rand() % 6 + 1;
				if(possiveisT==1){
					strcpy(possiveisTemas,"Frutas");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Banana");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Uva");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Coco");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Abacaxi");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Maracuja");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Manga");
					}
				}
				if(possiveisT==2){
					strcpy(possiveisTemas,"Jogos");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Mario");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Zelda");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"ResidentEvil");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Pong");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"PacMan");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"DonkeyKong");
					}
				}
				if(possiveisT==3){
					strcpy(possiveisTemas,"Animais");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Elefante");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Macaco");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Canguru");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Gaivota");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Iguana");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Ourico");
					}
				}
				if(possiveisT==4){
					strcpy(possiveisTemas,"Objetos");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Colheres");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Tesoura");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Pacote");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Pratos");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Brinco");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Domino");
					}
				}
				if(possiveisT==5){
					strcpy(possiveisTemas,"Profissões");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Bombeiro");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Eletricista");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Medico");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Advogado");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Engenheiro");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Costureiro");
					}
				}
				if(possiveisT==6){
					strcpy(possiveisTemas,"Flores");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Lavanda");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Bromelia");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Cravo");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Orquidea");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Jacinto");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Acucena");
					}
				}
			}
			if(dificuldade==3){
				possiveisT=rand() % 12 + 1;
				possiveisP=rand() % 12 + 1;
				if(possiveisT==1){
					strcpy(possiveisTemas,"Frutas");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Banana");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Uva");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Coco");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Abacaxi");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Maracuja");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Manga");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Melancia");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Caju");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Morango");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Laranja");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"Tangerina");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Pera");
					}
				}
				if(possiveisT==2){
					strcpy(possiveisTemas,"Jogos");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Mario");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Zelda");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"ResidentEvil");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Pong");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"PacMan");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Minecraft");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"FlappyBird");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Akinator");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"CrossFire");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Trove");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"FreeFire");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"PUBG");
					}
					
				}
				if(possiveisT==3){
					strcpy(possiveisTemas,"Animais");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Elefante");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Macaco");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Canguru");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Gaivota");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Iguana");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Ourico");
					}					
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Tigre");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Serpente");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Cavalo");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Cabra");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"Rato");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Galo");
					}
				}
				if(possiveisT==4){
					strcpy(possiveisTemas,"Objetos");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Colher");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Tesoura");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Pacote");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Pratos");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Brinco");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Domino");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Mesa");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Mochila");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Estilete");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Retrovisor");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"Trena");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Cadeira");
					}
				}
				if(possiveisT==5){
					strcpy(possiveisTemas,"Profissões");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Bombeiro");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Eletricista");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Medico");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Advogado");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Engenheiro");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Costureiro");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Desenvolvedor");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Analista");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Atendente");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Motorista");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"Artista");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Empreendedor");
					}
				}
				if(possiveisT==6){
					strcpy(possiveisTemas,"Flores");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Lavanda");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Bromelia");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Cravo");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Orquidea");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Jacinto");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Acucena");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Dedaleira");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Margarida");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Lilas");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Clethra");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"Astilbe");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Viburno");
					}
				}
				if(possiveisT==7){
					strcpy(possiveisTemas,"Corpo Humano");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Axila");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Boca");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Cabeça");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Cranio");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Canela");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Osso");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Figado");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Nariz");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Pulmao");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Rim");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"Veias");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Vagina");
					}
				}
				if(possiveisT==8){
					strcpy(possiveisTemas,"Sobremesas e Doces");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Cannoli");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Macaron");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Waffle");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Sorvete");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Pave");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Torta");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Mousse");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Pudin");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Brigadeiro");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Panetone");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"PetitGateau");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Churros");
					}
				}
				if(possiveisT==9){
					strcpy(possiveisTemas,"Esportes");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Golfe");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Futebol");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Rugbi");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Beisebol");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Tenis");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Volei");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Hoquei");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Basquete");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Criquete");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Handball");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"Futsal");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Natacao");
					}
				}
				if(possiveisT==10){
					strcpy(possiveisTemas,"Cores");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Vermelho");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Azul");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Preto");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Roxo");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Laranja");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Dourado");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Turquesa");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Marrom");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Lilas");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Rosa");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"Branco");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Cinza");
					}
				}
				if(possiveisT==11){
					strcpy(possiveisTemas,"Roupas e Acessórios");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Touca");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Bone");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Meia");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Blusa");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Casaco");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Calcado");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Pochete");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Relogio");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Cinto");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Bolsa");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"Bota");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Coturno");
					}
				}
				if(possiveisT==12){
					strcpy(possiveisTemas,"Legumes");
					if(possiveisP==1){
						strcpy(possiveisPalavras,"Ervilha");
					}
					if(possiveisP==2){
						strcpy(possiveisPalavras,"Cenoura");
					}
					if(possiveisP==3){
						strcpy(possiveisPalavras,"Abobrinha");
					}
					if(possiveisP==4){
						strcpy(possiveisPalavras,"Beterraba");
					}
					if(possiveisP==5){
						strcpy(possiveisPalavras,"Alface");
					}
					if(possiveisP==6){
						strcpy(possiveisPalavras,"Vagem");
					}
					if(possiveisP==7){
						strcpy(possiveisPalavras,"Cebolinha");
					}
					if(possiveisP==8){
						strcpy(possiveisPalavras,"Acelga");
					}
					if(possiveisP==9){
						strcpy(possiveisPalavras,"Tomate");
					}
					if(possiveisP==10){
						strcpy(possiveisPalavras,"Rabanete");
					}
					if(possiveisP==11){
						strcpy(possiveisPalavras,"Pepino");
					}
					if(possiveisP==12){
						strcpy(possiveisPalavras,"Espinafre");
					}
				}
			}
			strcpy(palavra,possiveisPalavras);
			strcpy(tema,possiveisTemas);
			strcpy(copiaPalavra,palavra);
			fflush(stdin);
		}
		// armazena string com espaços com o tamanho da palavra sorteada
		fflush(stdin);
		for (i=0; i<strlen(palavra);i++){
			tentativa[i]= '_';
		}
		do{
			do{
				axx=0;
				system("cls");
				//apresentar posição para letras
				for (i=0;i<strlen(palavra);i++){
					printf("___________________________________________________\n");
					tentativas=limite_tentativas-n_tentativas;
					if(tentativas==0){
						retornar=0;
						x=20;
						break;
					}
					printf(RED"tentarivas: %i",tentativas-1);
					printf(D2);                                 // tentativas
					printf(GREEN" - Corretas: %i\n",corretas);
					printf(D2);
					printf("\nO tema escolhido foi: %s \n",tema);
					printf("\n___________________________________________________\n\n\n");
				// Apresenta letras já encontradas (CERTAS) (VERDES)
					for (i=0;i<strlen(palavra);i++){
						printf(GREEN);
						printf("  %c  ", tentativa[i]);
						printf(WHITE);
					}
				printf("\n\n\n\n\n");
				bonecos(tentativas);
				//************RESPOSTAS DO JOGADOR**********
				//Le respostas do jogador
					if(tentativas!=1){
						printf("( "YELLOW"*"D2" para "RED"encerrar)"D2);
						printf("( "YELLOW"#"D2" para "D1"tentativa arriscada"D2")");
						printf("\n\nEntre com uma letra: ");
						chute=lehValidaLetra(chute);
					}
				//Testa se a letra informada encontra-se na palavra escolhida
				encontrei =0;
				for (i=0;i<strlen(palavra);i++){
					if(toupper(copiaPalavra[i])==toupper(chute)){
						copiaPalavra[i] = '*';
						tentativa[i] = toupper(chute);
						corretas++;
						encontrei = 1;
						fim=0; 
					}
				}
					if(encontrei == 0){
						n_tentativas++;
						fim=0;
					}
					if((n_tentativas >= limite_tentativas) || corretas==strlen(palavra)){
						fim=1;
					}
					if(chute=='*'){
						fim=1;
						return 1;
					}
				//Tentativa arriscada
					if(chute=='#'){
						system("cls");
						printf(D1"Tentativa arriscada!!!\n"D2);
						printf("Boa sorte!\n");
						printf(GREEN"Escreva (SaIr) para voltar ao inicio\n"D2);
						printf(D1"Caso você saia, ira contar como um erro!!\n"D2);
						printf("Qual é a palavra? ");
						lehValidaArriscada(&arriscada);
						if(strcmp(arriscada,"SaIr")==0){
							retornar=1;
						}else{
							retornar=0;
						}
						strupr(copiaPalavra);
						strupr(arriscada);
						if(strcmp(arriscada,copiaPalavra) == 1){
							x=10;
						}else{
							x=20;
						}
						fim=1;
					}
				}
			}while (fim==0);
		}while(retornar==1);
		carregar();
		system("cls");
	    //Mensagem na conclusão do jogo
	    printf("A PALAVRA ERA: %s\n \n",palavra);
		if(x==10||x==20){
			conclusaoArriscada(x);
			system("PAUSE");
		}else{
			conclusao(n_tentativas,limite_tentativas);
			system("PAUSE");
		}
		if((x==10)||(n_tentativas < limite_tentativas)){
			if(player==1){
				player1++;                                      //CODNG acertos!!
			}
			if(player==2){
				player2++;
			}
		}else{
			if(player==1){
				player2++;
			}
			if(player==2){
				player1++;
			}
		}
		if(tipoDeJogo==2){
			system("CLS");
			tabela(player1,player2);
		}
		//Caso o usuario deseja jogar novamente
		round=player1+player2;
		system("cls");
		printf("Deseja ir para o round sequinte ??\n");
		if(tipoDeJogo==2){
			printf("Round: %i \n",round);
		}
		printf("1 - Sim \n");
		printf("2 - Não \n");
		continuacao=lehValidaContinuacao(continuacao);
		if(continuacao == 1){
			y=0;
			system("cls");
		}else{
			y=1;
		}
		//Caso o player ganhe 3
		if((player1==3)||(player2==3)){
			y=1;
		}
	}while(y==0);
	system("cls");
	//condições de vitoria
	if(tipoDeJogo==2){
		if(player1>player2){
			telaDeVitoria(player1);
			printf("\n\n\n O JOGO FICOU %i x %i\n",player1,player2);
			if(player1<2){
				printf("\n VITORIA AO PLAYER1 COM %i PONTO\n",player1);
			}else{
				printf("\n VITORIA AO PLAYER1 COM %i PONTOS\n",player1);
			}
		}
		if(player1==player2){
			printf("\n\n\n EMPATE!!! PLAYER1 COM [%i] E O  PLAYER2 COM [%i] PONTOS\n",player1,player2);
		}
		if(player1<player2){
			telaDeVitoria(player2);
			printf("\n\n\n O JOGO FICOU %i x %i\n",player2,player1);
			if(player2<2){
				printf("\n VITORIA AO PLAYER2 COM %i PONTO\n",player2);
			}else{
				printf("\n VITORIA AO PLAYER2 COM %i PONTOS\n",player2);	
			}
		}	
		if(player1==3){
			telaDeVitoria(player1);
			printf("\n\n\nO JOGO FICOU %i x %i\n",player1,player2);
			printf("\n VITORIA AO PLAYER1 COM %i PONTOS",player1);
		}
		if(player2==3){
			telaDeVitoria(player2);
			printf("\n\n\nO JOGO FICOU %i x %i\n",player2,player1);
			printf("\n VITORIA AO PLAYER2 COM %i PONTOS",player2);
		}
		system("PAUSE");
	}
	return 0;
}
