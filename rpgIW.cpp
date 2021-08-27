#include <iostream>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float classe, vida = 10, moedas = 5, bau, luta, luta2, vidalorde = 10, ataquelorde = 3;
	char nome[50];
			
	// Introdução do Personagem	
	
	printf("\n -> Olá, bem vindo a cidade de Infinity Woods.\n\n -> Meu nome é John, sou o Rei desse lugar.\n\n -> Espero que nos ajude a acabar com os planos do Lorde Nykan.\n\n");
	
	printf(" -> Antes de tudo, qual é o seu nome, nobre aventureiro(a)?\n\n ~> Digite um nome sem espaço e sem símbolos: ");
	scanf("%s", &nome);
	printf("\n");
	
	system("cls");
	
	printf("\n -> %s, seu objetivo é entrar no castelo do Lorde Nykan e o derrotar.\n\n", nome);
	
	printf(" -> Pelo que vejo aqui, você é um(a)...\n\n");
	
	printf(" * Você pode escolher entre duas classes nessa aventura: guerreiro ou mago.\n\n * Cada uma possui seus atributos e ambos começam com 10 pontos de vida.\n\n");
	
	printf(" - GUERREIRO(A) -	- MAGO(A)-\n   Ataque: 5		  Ataque: 2\n   Magia: 2	   	  Magia: 5\n   Vida: 10	  	  Vida: 10\n\n");
	
	// Escolha de Classe
	
	while (classe != 1 && classe != 2) {
		
		printf(" ~> Digite 1 para GUERREIRO(A) ou 2 para MAGO(A): ");
		scanf("%f", &classe);
		printf("\n");
		
		if (classe == 1) {
			printf(" -> Guerreiro(a). Um(a) incrível guerreiro(a)!\n\n");
		}
		
		else if (classe == 2) {
			printf(" -> Mago(a). Um(a) poderoso(a) mago(a)!\n\n");
		}
		
		else {
			printf(" * Escolha uma opção válida.\n\n");
		}
	}
	
	// Progressão de História 
	
	printf(" -> Tome essas 5 moedas, siga para o castelo do Lorde Nykan e boa sorte!\n\n");
	
	system("pause");
	system("cls");
	
	printf("\n [Narrador: Ao sair, %s resolve comprar um item na loja ao lado do castelo do Rei John.]\n\n * Os itens se encontram em dois baús: azul e vermelho. Ambos custam 5 moedas.\n\n", nome);
	
	printf(" - Para escolher o baú azul, digite 1.\n - Para escolher o baú vermelho, digite 2.\n\n");
	
	// Compra de Itens
	
	while (bau != 1 && bau != 2) {
		
		printf(" ~> Qual baú você vai escolher?: ");
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
			printf(" * Escolha uma opção válida.\n\n");
		}
	}
	
	system("pause");
	system("cls");
	
	// Progressão de História
	
	printf("\n [Narrador: %s parte para o castelo. Ao chegar, entra pela entrada principal.\n     No trono, encontra-se Lorde Nykan. Vocês começam a luta.]\n\n", nome);
	
	printf(" -> Seu verme! Nunca irá me derrotar!\n\n");
	
	printf(" * Iniciando batalha. Carregando...\n\n ...\n\n ... Lutem!\n\n");
	
	printf(" [Narrador: Ambos assumem suas poses de batalha.]\n\n");
	
	system("pause");
	system("cls");
	
	// Atributos do Chefe + Valores
	
	printf("\n - ATRIBUTOS DE LORDE NYKAN -\n  Ataque: 3\n  Pontos de Vida: 10\n\n");
	
	// Progressão de Luta
	
	printf(" * O que fazer?\n\n ~> 1. ATACAR\n ~> 2. DEFENDER\n\n");
	
	while (luta != 1 && luta != 2) {
		
		printf(" ~> Digite 1 ou 2: ");
		scanf("%f", &luta);
		printf("\n");
		
		// Condição de Ataque
		
		if (luta == 1 && bau == 1) {
			printf(" [Narrador: %s ataca com um golpe rápido.]\n\n", nome);
			printf(" [Você deu 5 de dano no Lorde Nykan.]\n\n");
			vidalorde = vidalorde - 5;
		}
		
		else if (luta == 1 && bau == 2) {
			printf(" [Narrador: %s ataca com um golpe rápido.]\n\n", nome);
			printf(" [Você deu 7 de dano no Lorde Nykan.]\n\n");
			vidalorde = vidalorde - 7;
		}
		
		// Condição de Defesa
		
		else if (luta == 2 && bau == 1) {
			printf(" [Narrador: Lorde Nykan ataca com um golpe rápido.]\n\n");
			printf(" [Você recebeu 1 de dano do Lorde Nykan.]\n\n");
			vida = vida - 1;
		}
		
		else if (luta == 2 && bau == 2) {
			printf(" [Narrador: Lorde Nykan ataca com um golpe rápido.]\n\n");
			printf(" [Você recebeu 3 de dano do Lorde Nykan.]\n\n");
			vida = vida - ataquelorde;
		}
		
		else {
			printf(" * Escolha uma opção válida.\n\n");
		}
	}
	
	printf(" [Você ainda tem %0.0f de vida. Lorde Nykan ainda tem %0.0f de vida.]\n\n", vida, vidalorde);
	
	system("pause");
	system("cls");
	
	// Ataque do Chefe
	
	printf("\n [Narrador: O Lorde Nykan ataca com sua espada. %s recebe um acerto crítico.]\n\n", nome);
	
	if (bau == 1) {
		printf(" [Você recebeu 4 de dano do Lorde Nykan.]\n\n");
		vida = vida - 4;
	}
	
	if (bau == 2) {
		printf(" [Você recebeu 5 de dano do Lorde Nykan.]\n\n");
		vida = vida - 5;
	}
	
	printf(" [Você ainda tem %0.0f de vida. Lorde Nykan ainda tem %0.0f de vida.]\n\n", vida, vidalorde);
	
	// Progressão de Luta
	
	printf(" * O que fazer?\n\n * Não temos tempo para defender. Atacar é a solução!\n\n");
	
	while (luta2 != 1) {
		
		printf(" ~> Digite 1 para atacar: ");
		scanf("%f", &luta2);
		printf("\n");
		
		if (luta2 == 1 && bau == 1) {
			printf(" [Narrador: %s prepara seu golpe final e ataca...]\n\n", nome);
			printf(" [Você deu 10 de dano no Lorde Nykan.]\n\n");
			vidalorde = vidalorde - 10;
			printf(" [Seu ataque foi um crítico!]\n\n");
		}
		
		else if (luta2 == 1 && bau == 2) {
			printf(" [Narrador: %s prepara seu golpe final e ataca...]\n\n", nome);
			printf(" [Você deu 10 de dano no Lorde Nykan.]\n\n");
			vidalorde = vidalorde - 10;
			printf(" [Seu ataque foi um crítico!]\n\n");
		}
			
		else {
			printf(" * O melhor é atacar. ATAQUE!\n\n");
		}
	}
	
	system("pause");
	system("cls");
	
	// Ataque Final
	
	if (classe == 1) {
		printf("\n [Seu ataque final acerta em cheio na cabeça de Lorde Nykan. Ele cai aos seus pés, morto.]\n\n");
	}
	
	else if (classe == 2) {
		printf("\n [Sua magia final acerta o peito de Lorde Nykan. Um buraco se forma, e ele cai aos seus pés, morto.]\n\n");
	}	

	// Vitória e Status Finais
	
	if (vidalorde <= 0) {
		printf(" [VOCÊ VENCEU A BATALHA!]\n\n");
		
		printf(" [Narrador: %s pega a coroa de Lorde Nykan e uma saco com 1.000 moedas de ouro que estava próximo ao trono.]\n\n", nome);
		moedas = 1000;
		
		system("pause");
		system("cls");
		
		printf("\n [Narrador: Ao voltar para o castelo do Rei John, %s é recebido com palmas e trombetas.]\n\n", nome);
		
		printf(" -> Muito obrigado, %s! Todos nós de Infinity Woods agradecemos por sua ajuda.\n\n", nome);
		
		printf(" -> O que pretende fazer daqui pra frente?\n\n");
		
		printf(" [Narrador: Sem hesitar, %s simplesmente responde com a seguinte frase:]\n\n", nome);
		
		printf(" %s: Ajudar quem precisa de mim!\n\n", nome);
		
		printf(" - STATUS FINAIS -\n   Pontos de Vida: %0.0f\n   Moedas: %0.0f\n\n", vida, moedas);
		
		printf(" * THE END *\n\n");
		
	}
	
	system ("pause");
	
	return 0;
}
