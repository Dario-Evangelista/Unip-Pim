#include<stdio.h>
#include<stdlib.h>
#include<conio.h>	
#include<time.h>


typedef struct dadosC{
	char nome[30];
	char rua [30];
    char Num [30];
    char Bairro [30];
    char cidade [30];
    char estado [30];
    char cep [30];
    char email[60];
    char comobidade[60];
	char cpf[15];
    char telefone[15];
	char dataD[60];
    char dataM[60];
    char dataA[60];
	struct dadosC *Proximo;
	}DadosC;
	DadosC *primeiro, *atual, *NovoDado;

    FILE *criararq;

    struct tm *data_hora_atual;      
    time_t segundos;

typedef struct login
{
	char login[5];
	char senha[10]; 
	struct user *p;
	  
}   user; user p[1];


    void Getdados(){

        int x,y,z;
        char *Temp[80];

        time(&segundos);   
        data_hora_atual = localtime(&segundos);

        y = data_hora_atual->tm_year+1900;

    
		NovoDado=(DadosC *)malloc(sizeof(DadosC));

		if(primeiro==(DadosC *)NULL)
			primeiro=atual=NovoDado;
		else
			{
				atual=primeiro;
				while(atual->Proximo !=(DadosC *)NULL)
				atual=atual->Proximo;
				atual->Proximo=NovoDado;
				atual=NovoDado; 
			}

            system("cls");
            printf("\n Digite os dados do paciente\n");

            gets(Temp);
            printf("Nome : ");
			gets(atual->nome);
			printf("Rua : ");
			gets(atual->rua);
            printf("Numero : ");
			gets(atual->Num);
            printf("Bairro : ");
			gets(atual->Bairro);
            printf("Cidade : ");
			gets(atual->cidade);
            printf("Estado : ");
			gets(atual->estado);
            printf("Cep : ");
			gets(atual->cep);
			printf("E-mail : ");
			gets(atual->email);
            printf("Dia de Nascimento : ");
            gets(atual->dataD);
            printf("Mes de Nascimento : ");
            gets(atual->dataM);
            printf("Ano de Nascimento : ");
            gets(atual->dataA);
            x = strtol(atual->dataA, NULL, 10);
            printf("Telefone : ");
			gets(atual->telefone);
            printf("CPF : ");
            gets(atual->cpf);
            printf("Data do diagnostigo  %d/", data_hora_atual->tm_mday);
            printf("%d/",data_hora_atual->tm_mon+1); 
            printf("%d\n", y);

            z = y-x;
            int Sim;

                if (z >= 65)

                {
                    printf("Paciente em estado de risco\n");
                    printf("O paciente tem alguma comorbidade ? Sim(1)|Nao(0) \n");
                    scanf("%d", &Sim);

                    if (Sim == 1)
                    {   
                        printf("====================================\n\n");
                        puts("Qual seria a comobidade");
                        gets(Temp);
                        gets(atual->comobidade);  
                        atual->Proximo=(DadosC *)NULL;
                        Getprintdadoseme();

                        return 0;              
                    }
                    else
                    {   
                        printf("Paciente sem Comorbidade\n");
                        atual->Proximo=(DadosC *)NULL;
                        Getprintdadoseme();

                        return 0;
                    }
                    
                }

                else{
                    printf("Paciente nao esta em estado de risco\n");
                    printf("O paciente tem alguma comorbidade ? Sim(1)|Nao(0) \n");
                    scanf("%d", &Sim);

                    if (Sim == 1)
                    {   
                        printf("====================================\n\n");
                        puts("Qual seria a comobidade");
                        gets(Temp);
                        gets(atual->comobidade);  
                        atual->Proximo=(DadosC *)NULL;
                        Getprintdadoseme();

                        return 0;              
                    }
                    else
                    {   
                        printf("Paciente sem Comorbidade\n");
                        atual->Proximo=(DadosC *)NULL;
                        return 0;
                    }

                }


			atual->Proximo=(DadosC *)NULL;

            return 0;

    }
    
    void Printdadoseme(){
        
        int x,y,z;

        y = data_hora_atual->tm_year+1900;

        if (primeiro==(DadosC *)NULL){
		puts("Lista de Dados está vazia...");

		return;
		}
		atual=primeiro;
		do{
			printf("Nome : %s\n",atual->nome);
			printf("CPF : %s\n",atual->cpf);
			printf("Telefone : %s\n",atual->telefone);
			printf("Rua : %s, ",atual->rua);
            printf("Numero %s, ",atual->Num);
            printf("Bairro %s, ",atual->Bairro);
            printf("Cidade %s, ",atual->cidade);
            printf("Estado %s, ",atual->estado);
            printf("Cep %s\n",atual->cep);
            printf("Data de nascimento : %s/", atual->dataD);
            printf("%s/", atual->dataM);
            printf("%s\n", atual->dataA);
            printf("E-mail %s\n",atual->email);
            printf("Comorbidade do Paciente: %s\n",atual->comobidade);
            printf("Data do diagnostigo  %d/", data_hora_atual->tm_mday);
            printf("%d/",data_hora_atual->tm_mon+1); 
            printf("%d\n",data_hora_atual->tm_year+1900);
        
            
            printf("\n====================================================\n");
            Getprintdadoseme();
            
		}while(atual != NULL);
		
	}

    void Printdados(){
        
        int x,y,z;

        y = data_hora_atual->tm_year+1900;

        if (primeiro==(DadosC *)NULL){
		puts("Lista de Dados está vazia...");

		return;
		}
		atual=primeiro;
		do{
			printf("Nome : %s\n",atual->nome);
			printf("CPF : %s\n",atual->cpf);
			printf("Telefone : %s\n",atual->telefone);
			printf("Rua : %s, ",atual->rua);
            printf("Numero %s, ",atual->Num);
            printf("Bairro %s, ",atual->Bairro);
            printf("Cidade %s, ",atual->cidade);
            printf("Estado %s, ",atual->estado);
            printf("Cep %s\n",atual->cep);
            printf("Data de nascimento : %s/", atual->dataD);
            printf("%s/", atual->dataM);
            printf("%s\n", atual->dataA);
            printf("E-mail %s\n",atual->email);
            printf("Comorbidade do Paciente: %s\n",atual->comobidade);
            printf("Data do diagnostigo  %d/", data_hora_atual->tm_mday);
            printf("%d/",data_hora_atual->tm_mon+1); 
            printf("%d\n",data_hora_atual->tm_year+1900);

            
            printf("\n====================================================\n");
            
            Getprintdadostext();
            
		}while(atual != NULL);
		
	}
    
    void Getprintdadostext(){

        char url[] = "Pacientes-espera.text";
        criararq = fopen(url, "a");

            printf("Os dados foram Gravados\n\n");
            fprintf(criararq,"Nome : %s\n",atual->nome);
			fprintf(criararq,"CPF : %s\n",atual->cpf);
			fprintf(criararq,"Telefone : %s\n",atual->telefone);
			fprintf(criararq,"Rua : %s, ",atual->rua);
            fprintf(criararq,"Numero %s, ",atual->Num);
            fprintf(criararq,"Bairro %s, ",atual->Bairro);
            fprintf(criararq,"Cidade %s, ",atual->cidade);
            fprintf(criararq,"Estado %s, ",atual->estado);
            fprintf(criararq,"Cep %s\n",atual->cep);
            fprintf(criararq,"Data de nascimento : %s/", atual->dataD);
            fprintf(criararq,"%s/", atual->dataM);
            fprintf(criararq,"%s\n", atual->dataA);
            fprintf(criararq,"E-mail %s\n",atual->email);
            fprintf(criararq,"Comorbidade do Paciente: %s\n",atual->comobidade);
            fprintf(criararq,"Data do diagnostigo  %d/", data_hora_atual->tm_mday);
            fprintf(criararq,"%d/",data_hora_atual->tm_mon+1); 
            fprintf(criararq,"%d\n",data_hora_atual->tm_year+1900);
            fprintf(criararq,"\n====================================================\n");
            atual=atual->Proximo;
 
    }

    void Getprintdadoseme(){

        char url[] = "Pacientes-emergencia.text";
        criararq = fopen(url, "a");

            printf("Os dados foram Gravados\n\n");
            fprintf(criararq,"Nome : %s\n",atual->nome);
			fprintf(criararq,"CPF : %s\n",atual->cpf);
			fprintf(criararq,"Telefone : %s\n",atual->telefone);
			fprintf(criararq,"Rua : %s, ",atual->rua);
            fprintf(criararq,"Numero %s, ",atual->Num);
            fprintf(criararq,"Bairro %s, ",atual->Bairro);
            fprintf(criararq,"Cidade %s, ",atual->cidade);
            fprintf(criararq,"Estado %s, ",atual->estado);
            fprintf(criararq,"Cep %s\n",atual->cep);
            fprintf(criararq,"Data de nascimento : %s/", atual->dataD);
            fprintf(criararq,"%s/", atual->dataM);
            fprintf(criararq,"%s\n", atual->dataA);
            fprintf(criararq,"E-mail %s\n",atual->email);
            fprintf(criararq,"Comorbidade do Paciente: %s\n",atual->comobidade);
            fprintf(criararq,"Data do diagnostigo  %d/", data_hora_atual->tm_mday);
            fprintf(criararq,"%d/",data_hora_atual->tm_mon+1); 
            fprintf(criararq,"%d\n",data_hora_atual->tm_year+1900);
            fprintf(criararq,"\n====================================================\n");
            atual=atual->Proximo;
 
    }

 /*   int login()
        {

        printf("\n\n_____CadCov-19_____\n\n");

        printf("_______________________________________________\n");

        char login[6];
		char senha[10];

		strcpy(p[0].login, "Dario");
		strcpy(p[0].senha, "1998");

		printf("Digite seu nome de usuario para login: \n");
		scanf("%s", login);
		printf("Digite a senha: \n");
		scanf("%s", senha);
		

		if (strcmp(login,p[0].login)==0 || (strcmp(senha,p[0].senha)==0))
		{   
			printf("logado com sucesso!!!\n");
            system("PAUSE");
			printf("=======================================================\n\n");
            Getdados();
            return;
			
		}

		else
		{
		printf("Usuario ou senha Incorreto verifique o nome do aluno e use o RA do aluno como senha (Dario) & (1998)!\n");
		printf("Ou entre em contato com nosso suporte pelo WHATSAPP 11943719637\n");
		system("PAUSE");
		return 0;
		
		}
    }*/

    int main(){		

	char ch;

        printf("\n\n_____CadCov-19_____\n\n");

        printf("_______________________________________________\n");

        char login[6];
		char senha[10];

		strcpy(p[0].login, "Dario");
		strcpy(p[0].senha, "1998");

		printf("Digite seu nome de usuario para login: \n");
		scanf("%s", login);
		printf("Digite a senha: \n");
		scanf("%s", senha);
		

		if (strcmp(login,p[0].login)==0 || (strcmp(senha,p[0].senha)==0))
		{   
			printf("logado com sucesso!!!\n");
            system("PAUSE");
			printf("=======================================================\n\n");
            
			
		}

		else
		{
		printf("Usuario ou senha Incorreto verifique o nome do aluno e use o RA do aluno como senha (Dario) & (1998)!\n");
		printf("Ou entre em contato com nosso suporte pelo WHATSAPP 11943719637\n");
		system("PAUSE");
		
		
		}

	primeiro=(DadosC *)NULL;

	do{
    
		Getdados();
        puts("\nInserir Dados de outros Paciente (s/n?) ");
		ch=getch();

	}while((ch!='n') && (ch!='N'));

	puts("\nLista dos Pacientes Cadastrados");
	puts("=================================");
	Printdados();
	system("PAUSE");
	return 0;
    }







    /*Feito por Dario Evangelista de araujo - Unip Arujá - Sp*/