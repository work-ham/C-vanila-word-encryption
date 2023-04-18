#include <iostream>
#include <string>
#include <cstring>
using namespace std;
	void start(){
	int kata, key, lapis, opt;
	kata = 1000;
	cout << "Masukkin Kunci (integer) : ";
		cin >> key;
			while (key >= 256){
   		key = key - 100;
	   };
		int i, x;
	string kalimat[kata];
   	string kalimat_awal[kata];
   	cout << "Masukkan kalimat : ";
   	for (int j =0; j < kata;j++){
   	cin >> kalimat_awal[j];
	   if (kalimat_awal[j] == "//"){
	   	kalimat_awal[j] = "";
	   	kata = j;
	   break;}
	   }
   	cout << "\nMau Diapain ?\n";
   	cout << "1 = Encrypt.\n";
  	cout << "2 = Decrypt.\n";
  	cout << "Masukin sini : ";
   	cin >> x;
	cout << "Lapis Enkripsi : ";
	cin >> lapis;
	for(int l = 0; l < kata; l++){
	int n = kalimat_awal[l].length();
	char str[n+1];
   	strcpy(str, kalimat_awal[l].c_str());
   	for (int p = 0; p < lapis; p++){
   //using switch case statements
   	switch(x)
   	{
      //first case for encrypting a string
      	case 1:
         	for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + key; 
        	 for (int s = 0; s <= i; s++)
        	 kalimat[l] = str;  
        	 break;

      //second case for decrypting a string
      	case 2:
        	 for(i = 0; (i < 100 && str[i] != '\0'); i++)
         	str[i] = str[i] - key; 
         	for (int s = 0; s <= i; s++)
        	 kalimat[l] = str;
      		break;

      	default:
        	 cout << "\nInvalid Input !!!\n";
   			}
   		}
	}
	if (x == 1){
	cout << "\nChipertext: \n";
	for (int k = 0; k < kata; k ++)
		cout << kalimat[k] << " ";
	}
	else if (x == 2){ 
	cout << "\nText : \n";
	for (int k = 0; k < kata; k ++)
		cout << kalimat[k] << " ";
	}
	else cout << "INVALID INPUT !!!!";
	cout << endl << "Exit ? "<< endl;
	cout << "1. YES" << endl;
	cout << "2. NO" << endl;
	cout << "Pilihan : "; cin >> opt;
	cout << endl << "====================================" << endl;
	if (opt == 1);
	else if (opt == 2) start();
	else cout << "INVALID INPUT !!!!";
	}

int main()
{
   start();
   return 0;
}
