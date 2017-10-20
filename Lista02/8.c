# include <stdio.h>
# include <string.h>

int desconto (int faltas, double valorDia){
    return faltas*valorDia;
}

int acrescimo (int hextra, double valorHora){
    int maishextra = 0, he, acres;
    maishextra += hextra;
    if(maishextra>40){
        acres = 40*valorHora;
        maishextra -= 40;
        he = 40;
    }else if(maishextra<=40){
        acres = maishextra*valorHora;
        he = maishextra;
    }
    return acres;
}

void valorTotal (int base, int acres, int desc){
    printf("%d\n", base+acres-desc);
}

int main(){
    
    int id, faltas, hextra;
    int base, desc, acres, total, maishextra=0, he;
    double valorDia, valorHora;
    //char cargo *;
    
    scanf("%d",&id);
    scanf("%d",&faltas);
    scanf("%d",&hextra);
    
    switch(id){
        case 1:
            base = 10000;
            //printf("cargo\t\t: Diretor\n");
            break;
        case 2:
            base = 8000;
            //printf("cargo\t\t: Gerente\n");
            break;
        case 3:
            base = 5000;
            //printf("cargo\t\t: Engenheiro\n");
            break;
        case 4:
            base = 3000;
            //printf("cargo\t\t: Tecnico\n");
            break;
        case 5:
            base = 2000;
            //printf("cargo\t\t: Operdor\n");
            break;
    }
    
    valorDia = base/20;
    valorHora = (valorDia/8)+40;
    //printf("teste: valorDia=%d  valorHora=%d\n",valorDia, valorHora);
    
    //desc = faltas*valorDia;
    /*
    maishextra += hextra;
    if(maishextra>40){
        acres = 40*valorHora;
        maishextra -= 40;
        he = 40;
    }else if(maishextra<=40){
        acres = maishextra*valorHora;
        he = maishextra;
    }*/
    
    
    //total = base+acrescimo(hextra, valorHora)-desconto(faltas, valorDia);
    valorTotal(base, acrescimo(hextra, valorHora), desconto(faltas, valorDia));
    
    //printf("# de faltas\t: %d\n", faltas);
    //printf("# horas-extra\t: %d\n", he);
    //printf("descontos\t: %d\n", desc);
    //printf("acrescimos\t: %d\n", acres);
    //printf("salario\t\t: %d\n", total);
    //printf("%d\n", total);
    
    return 0;
}