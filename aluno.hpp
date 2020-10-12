#ifndef EXERCICIOS_IGOR_HPP
#define EXERCICIOS_IGOR_HPP

#include<iostream>
#include<tuple>
#include<string>


// resolução exercício 0 (verifique se está correto)
int exercicio0(const char* cstr)
{
  return 0;
}

// resolução exercício 1 (verifique se está correto)
int exercicio1(const char* cstr)
{
  int a,b;
  scanf( "%d %d",&a, &b);
  int s = 0;
  if(a>b){  	  
  for(int i=a; i<=b; i++){
   s+=i;
  }
  }
  if(a<b){  	  
  for(int i=b; i<=a; i++){
   s+=i;
  }
}
  if(a==b){  	  
   s+=a;
  }

  return s;
}

// exemplo útil: 
// ler N numeros e retornar a soma desses números
int exemplo(const char* cstr)
{
  int n, count;
  sscanf(cstr, "%d%n", &n, &count); cstr += count;
  //std::cout << "count=" << count << std::endl;
  int s = 0;
  while(n--)
  {
     int v = 0;
     sscanf(cstr, "%d%n", &v, &count); cstr += count;
     s += v;
     //std::cout << "v=" << v << std::endl;
  }
  return s;
}

// ============
// falta fazer:

int exercicio2(const char* cstr){
	int votos,candidatoum,candidatodois, candidatotres,nulo, candidatos;
	scanf("%d",&votos);
	while(votos!=0){
		votos--;
		scanf("%d", &candidatos);
		if(candidatos==1)candidatoum++;
		if(candidatos==2)candidatodois++;
		if(candidatos==3)candidatotres++;
		if(candidatos==0)nulo++;
		candidatos=-1;
		votos--;
	}
		if(candidatoum>candidatodois&&candidatoum>nulo&&candidatoum>candidatotres)printf("1");
		if(candidatoum<candidatodois&&candidatodois>nulo&&candidatodois>candidatotres)printf("2");
		if(candidatoum<candidatotres&&candidatotres>nulo&&candidatodois<candidatotres)printf("3");
      if(candidatoum<nulo && candidatodois<nulo && nulo>candidatotres)printf("0");
  }

// dica: retorna uma tupla com 4 elementos (veja slides com std::make_tuple)
auto exercicio3(const char* cstr){
	int Reais, divisor;
	scanf("%d",&Reais);
	divisor=Reais;
	float vet[Reais];
	float media, soma=0, maximo=0,minimo;
	Reais--;
	scanf("%f", &vet[Reais]);
	soma=soma+vet[Reais];
	minimo=vet[Reais];
	maximo=minimo;
	while(Reais!=-1){
		Reais--;
		scanf("%f", &vet[Reais]);
		soma=soma+vet[Reais];
		if(maximo<vet[Reais]){
			maximo=vet[Reais];
		}
		if(minimo>vet[Reais]){
			minimo=vet[Reais];
		}
	
	}
	media=soma/divisor;
	Tupla=std::make_tuple(media,soma,maximo,minimo);
	printf("%f %f %f %f",std::get<0>,std::get<1>,std::get<2>,std::get<3>);
};

int exercicio4(const char* cstr){
	int exercicio,k,n;
	scanf("%d",&exercicio);
	scanf("%d",&n);
	int *notas=malloc(n*sizeof(float));
	int *nomes=malloc(n*sizeof(string));
	int contador=0;
	while(contador<n){
		scanf("%10s", *notas+contador-1);
		scanf("%f",*notas+contador-1);
		contador++;
	}
	scanf("%d",&k);
	printf("%s",nomes[k-1]);
	if(notas[k-1]>6.0){
		printf("1");
		return 1;
		
	}
	if(notas[k-1]<6.0){
		printf("0");
		return 0;
		
	}
	
	
};

int exercicio5(const char* cstr){
	int N,Fat=1;
	scanf("%d",&N);
	while(N>1){
		Fat=Fat*N;
		
	}
	printf("%d",Fat);
	return Fat;
};

int exercicio6(const char* cstr){
	int maior=1;
	int menor=1;
	int k;
	scanf("%d",&k);
	while(k>2){
		maior=menor+maior;
		menor=maior-menor;
		k--;
	}
	printf("%d",maior);
	return maior;
};

// dica: retorno de 'char', não 'int'
char exercicio7(const char* cstr){
	int N, contador=0,validador;
	scanf("%d",&N);
	int vetor[2*N];
	validador=N-1;
	int M,J;
	while(N>0){
		scanf("%c %c",&vetor[contador],&vetor[contador+validador]);
		contador++;
		if(vetor[contador]-vetor[contador+validador]==-12 ||vetor[contador]-vetor[contador+validador]==16||vetor[contador]-vetor[contador+validador]==-4){
			M++;
		}
		if(vetor[contador]-vetor[contador+validador]==12 ||vetor[contador]-vetor[contador+validador]==-16||vetor[contador]-vetor[contador+validador]==4){
			J++;
		}
		N--;
		//P=16 D=4 T=20
	}
	if(J>M){
		return'J';
	}
	if(J<M){
		return'M';
		
	}
	if(J==M){
		return'X';
		
	}
}
	
	
};

// dica: retorna uma tupla com 2 elementos (veja slides com std::make_tuple)
auto exercicio8(const char* cstr){
	int A, B;
	scanf("%d %d",&A,&B);
	int pont;
	pont=*A;
	*A=*B;
	*B=pont;
	Tupla=std::make_tuple(A,B);
	return Tupla;
};

// dica: retorno de 'float', não 'int'
float exercicio9(const char* cstr){
	int N, contador=0;
	float mediana;
	scanf("%d",&N);
	int *pont;
	pont=malloc(N*sizeof(float));
	while(contador<N){
		scanf("%f",*(pont+contador));
		contador++;
	}
	if(N%2==0){
		mediana=(*(pont+N/2)+*(pont+N/2-1))/2;
		return mediana;
	}
	if(N%2!=0){
		mediana=*(pont+N/2);
		return mediana;
	}
};


#endif // EXERCICIOS_IGOR_HPP
