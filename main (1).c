#include <stdio.h>
#include <string.h>                       //strcpy calismasi icin bu kutuphaneyi eklemeliyiz.

struct Elbise{                           // struct yapisi:Aralarinda mantiksal iliskiler bulunan farkli tur veya ayni turdeki bilgileri tutmamizi saglar..
	int fiyat;                           //Basit bir struct yapisi olusturduk.
        char renk[10];
	char beden[10];
};

int main() {
	struct Elbise elbise;
	elbise.fiyat=100;
	strcpy(elbise.renk,"Mor");
	strcpy(elbise.beden,"(S)");                                                           
    printf("Fiyat:%d\nRenk:%s\nBeden:%s",elbise.fiyat,elbise.renk,elbise.beden);
	
	return 0;
}


/*
struct Elbise elbise;
	elbise.fiyat=100;
	strcpy(elbise.renk,"Mor");
	strcpy(elbise.beden,"(S)");       
	
	Bunu strcpy kullanimini gostermek icin yaptik.
*/

/*
	Kodu daha kisa nasil yazariz?
	
	#include <stdio.h>
        #include <string.h>
struct Elbise{                           
	int fiyat;                           
        char renk[10];
	char beden[10];
};
int main() {
	struct Elbise elbise={100,"Mor","(S)"};
        printf("Fiyat:%d\nRenk:%s\nBeden:%s",elbise.fiyat,elbise.renk,elbise.beden);
	
	return 0;
}
*/	