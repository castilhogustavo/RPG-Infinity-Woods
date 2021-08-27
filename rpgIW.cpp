#include <iostream>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float classe, vida = 10, moedas = 5, bau, luta, luta2, vidalorde = 10, ataquelorde = 3;
	char nome[50];
			
	// Introdu��o do Personagem	
	
	printf("\n -> Ol�, bem vindo a cidade de Infinity Woods.\n\n -> Meu nome � John, sou o Rei desse lugar.\n\n -> Espero que nos ajude a acabar com os planos do Lorde Nykan.\n\n");
	
	printf(" -> Antes de tudo, qual � o seu nome, nobre aventureiro(a)?\n\n ~> Digite um nome sem espa�o e sem s�mbolos: ");
	scanf("%s", &nome);
	printf("\n");
	
	system("cls");
	
	printf("\n -> %s, seu objetivo � entrar no castelo do Lorde Nykan e o derrotar.\n\n", nome);
	
	printf(" -> Pelo que vejo aqui, voc� � um(a)...\n\n");
	
	printf(" * Voc� pode escolher entre duas classes nessa aventura: guerreiro ou mago.\n\n * Cada uma possui seus atributos e ambos come�am com 10 pontos de vida.\n\n");
	
	printf(" - GUERREIRO(A) -	- MAGO(A)-\n   Ataque: 5		  Ataque: 2\n   Magia: 2	   	  Magia: 5\n   Vida: 10	  	  Vida: 10\n\n");
	
	// Escolha de Classe
	
	while (classe != 1 && classe != 2) {
		
		printf(" ~> Digite 1 para GUERREIRO(A) ou 2 para MAGO(A): ");
		scanf("%f", &classe);
		printf("\n");
		
		if (classe == 1) {
			printf(" -> Guerreiro(a). Um(a) incr�vel guerreiro(a)!\n\n");
		}
		
		else if (classe == 2) {
			printf(" -> Mago(a). Um(a) poderoso(a) mago(a)!\n\n");
		}
		
		else {
			printf(" * Escolha uma op��o v�lida.\n\n");
		}
	}
	
	// Progress�o de Hist�ria 
	
	printf(" -> Tome essas 5 moedas, siga para o castelo do Lorde Nykan e boa sorte!\n\n");
	
	system("pause");
	system("cls");
	
	printf("\n [Narrador: Ao sair, %s resolve comprar um item na loja ao lado do castelo do Rei John.]\n\n * Os itens se encontram em dois ba�s: azul e vermelho. Ambos custam 5 moedas.\n\n", nome);
	
	printf(" - Para escolher o ba� azul, digite 1.\n - Para escolher o ba� vermelho, digite 2.\n\n");
	
	// Compra de Itens
	
	while (bau != 1 && bau != 2) {
		
		printf(" ~> Qual ba� voc� vai escolher?: ");
		scanf("%f", &bau);
		printf("\n");
		
		if (bau == 1) {
			printf(" [%s recebeu uma armadura que reduz o dano do inimigo em 2 pontos.]\n\n", nome);
			moedas = moedas - 5;
		}
		
		else if (bau == 2) {
			printf(" [%s recebeu um amuleto de buff. Seus ataques e magias possuem +2 de dano.]\n\n", nome);
			moedas = moedas - 5;
		}
			
		else {
			printf(" * Escolha uma op��o v�lida.\n\n");
		}
	}
	
	system("pause");
	system("cls");
	
	// Progress�o de Hist�ria
	
	printf("\n [Narrador: %s parte para o castelo. Ao chegar, entra pela entrada principal.\n     No trono, encontra-se Lorde Nykan. Voc�s come�am a luta.]\n\n", nome);
	
	printf(" -> Seu verme! Nunca ir� me derrotar!\n\n");
	
	printf(" * Iniciando batalha. Carregando...\n\n ...\n\n ... Lutem!\n\n");
	
	printf(" [Narrador: Ambos assumem suas poses de batalha.]\n\n");
	
	system("pause");
	system("cls");
	
	// Atributos do Chefe + Valores
	
	printf("\n - ATRIBUTOS DE LORDE NYKAN -\n  Ataque: 3\n  Pontos de Vida: 10\n\n");
	
	// Progress�o de Luta
	
	printf(" * O que fazer?\n\n ~> 1. ATACAR\n ~> 2. DEFENDER\n\n");
	
	while (luta != 1 && luta != 2) {
		
		printf(" ~> Digite 1 ou 2: ");
		scanf("%f", &luta);
		printf("\n");
		
		// Condi��o de Ataque
		
		if (luta == 1 && bau == 1) {
			printf(" [Narrador: %s ataca com um golpe r�pido.]\n\n", nome);
			printf(" [Voc� deu 5 de dano no Lorde Nykan.]\n\n");
			vidalorde = vidalorde - 5;
		}
		
		else if (luta == 1 && bau == 2) {
			printf(" [Narrador: %s ataca com um golpe r�pido.]\n\n", nome);
			printf(" [Voc� deu 7 de dano no Lorde Nykan.]\n\n");
			vidalorde = vidalorde - 7;
		}
		
		// Condi��o de Defesa
		
		else if (luta == 2 && bau == 1) {
			printf(" [Narrador: Lorde Nykan ataca com um golpe r�pido.]\n\n");
			printf(" [Voc� recebeu 1 de dano do Lorde Nykan.]\n\n");
			vida = vida - 1;
		}
		
		else if (luta == 2 && bau == 2) {
			printf(" [Narrador: Lorde Nykan ataca com um golpe r�pido.]\n\n");
			printf(" [Voc� recebeu 3 de dano do Lorde Nykan.]\n\n");
			vida = vida - ataquelorde;
		}
		
		else {
			printf(" * Escolha uma op��o v�lida.\n\n");
		}
	}
	
	printf(" [Voc� ainda tem %0.0f de vida. Lorde Nykan ainda tem %0.0f de vida.]\n\n", vida, vidalorde);
	
	system("pause");
	system("cls");
	
	// Ataque do Chefe
	
	printf("\n [Narrador: O Lorde Nykan ataca com sua espada. %s recebe um acerto cr�tico.]\n\n", nome);
	
	if (bau == 1) {
		printf(" [Voc� recebeu 4 de dano do Lorde Nykan.]\n\n");
		vida = vida - 4;
	}
	
	if (bau == 2) {
		printf(" [Voc� recebeu 5 de dano do Lorde Nykan.]\n\n");
		vida = vida - 5;
	}
	
	printf(" [Voc� ainda tem %0.0f de vida. Lorde Nykan ainda tem %0.0f de vida.]\n\n", vida, vidalorde);
	
	// Progress�o de Luta
	
	printf(" * O que fazer?\n\n * N�o temos tempo para defender. Atacar � a solu��o!\n\n");
	
	while (luta2 != 1) {
		
		printf(" ~> Digite 1 para atacar: ");
		scanf("%f", &luta2);
		printf("\n");
		
		if (luta2 == 1 && bau == 1) {
			printf(" [Narrador: %s prepara seu golpe final e ataca...]\n\n", nome);
			printf(" [Voc� deu 10 de dano no Lorde Nykan.]\n\n");
			vidalorde = vidalorde - 10;
			printf(" [Seu ataque foi um cr�tico!]\n\n");
		}
		
		else if (luta2 == 1 && bau == 2) {
			printf(" [Narrador: %s prepara seu golpe final e ataca...]\n\n", nome);
			printf(" [Voc� deu 10 de dano no Lorde Nykan.]\n\n");
			vidalorde = vidalorde - 10;
			printf(" [Seu ataque foi um cr�tico!]\n\n");
		}
			
		else {
			printf(" * O melhor � atacar. ATAQUE!\n\n");
		}
	}
	
	system("pause");
	system("cls");
	
	// Ataque Final
	
	if (classe == 1) {
		printf("\n [Seu ataque final acerta em cheio na cabe�a de Lorde Nykan. Ele cai aos seus p�s, morto.]\n\n");
	}
	
	else if (classe == 2) {
		printf("\n [Sua magia final acerta o peito de Lorde Nykan. Um buraco se forma, e ele cai aos seus p�s, morto.]\n\n");
	}	

	// Vit�ria e Status Finais
	
	if (vidalorde <= 0) {
		printf(" [VOC� VENCEU A BATALHA!]\n\n");
		
		printf(" [Narrador: %s pega a coroa de Lorde Nykan e uma saco com 1.000 moedas de ouro que estava pr�ximo ao trono.]\n\n", nome);
		moedas = 1000;
		
		system("pause");
		system("cls");
		
		printf("\n [Narrador: Ao voltar para o castelo do Rei John, %s � recebido com palmas e trombetas.]\n\n", nome);
		
		printf(" -> Muito obrigado, %s! Todos n�s de Infinity Woods agradecemos por sua ajuda.\n\n", nome);
		
		printf(" -> O que pretende fazer daqui pra frente?\n\n");
		
		printf(" [Narrador: Sem hesitar, %s simplesmente responde com a seguinte frase:]\n\n", nome);
		
		printf(" %s: Ajudar quem precisa de mim!\n\n", nome);
		
		printf(" - STATUS FINAIS -\n   Pontos de Vida: %0.0f\n   Moedas: %0.0f\n\n", vida, moedas);
		
		printf(" * THE END *\n\n");
		
	}
	
	system ("pause");
	
	return 0;
}
