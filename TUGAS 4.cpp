#include <iostream>

using namespace std;

  int main(){
  	
  	int krktr;
	int healt;
	int damage;
	int senjata;
	int aks;
	int darahgoblin;
	int damagegoblin;
	
  	string Namakrktr;
	string Namasenjata;
	string Monster;
	string hasilserang;
	string hasilseranggoblin;
  	
  cout << "GAME MONSTER GOBLIN" << endl;
  cout <<"~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout <<  "~~~~~~~~~~~~~~~~~~" << endl;
  cout <<  "DAFTAR CHARACTER" << endl;
  cout <<  "================" << endl;
  cout <<      "1.KNIGHT" << endl;
  cout <<      "2.ARCHER" << endl;
  cout <<      "3.CLERIC" << endl;
  cout <<  "================" << endl << endl;
  cout << "Masukan Pilihan Character: ";
  cin >> krktr;
  
  if (krktr == 1){
  	Namakrktr = "KNIGHT";
  	healt = 100;
  	damage =10;
  }
  
  else if (krktr == 2){
  	Namakrktr = "ARCHER";
  	healt = 100;
  	damage =10;
  }
  
  else if (krktr == 3){
  	Namakrktr = "CLERIC";
  	healt = 100;
  	damage =5;
  }
  
  
  else {
  	cout << "PILIHAN TIDAK ADA";
  	return 1;
  	
  }
 
   cout << "_____________________" << endl;
   cout <<     "PILIH SENJATA" << endl;
   cout <<       "1.PEDANG" << endl;
   cout <<       "2.PANAH"  <<endl;
   cout <<       "3.TASBIH" <<endl;
   cout << "_____________________" << endl << endl;
   cout << "Masukan Pilihan Senjata: ";
   cin >> senjata;
   
   if (senjata == 1){
   	Namasenjata = "PEDANG";
   	damage += 10;
   	
   }
   else if (senjata == 2){
   	Namasenjata = "PANAH";
   	damage += 10;
   	
   }
   else if (senjata == 3){
   	Namasenjata = "TASBIH";
   	damage += 5;
   	
   }
   
   // MONSTER GOBLIN
   Monster = "GOBLIN";
   damagegoblin = 25;
   darahgoblin = 100;
   
   while (true){
   	cout << hasilserang << endl;
   	cout << hasilseranggoblin << endl;
   	cout << Namakrktr << endl;
   	cout << "HEALT: " << healt << endl;
   	cout << "DAMAGE: " << damage << endl;
   	cout <<"************" << endl;
   	cout << "DARAH GOBLIN: " << darahgoblin << endl;
   	cout << "DAMAGE GOBLIN: " << damagegoblin << endl;
   	cout <<"************" << endl;
   	cout << "Pilih" << endl;
   	cout <<"1.serang"<< endl;
   	cout <<"2.memulihkan" << endl;
   	cout <<"************" << endl ;
   	cout << "Masukan pilihan: ";
   	cin >> aks;
   	
   	if (aks == 1){
   		darahgoblin -= damage;
   		healt -= damagegoblin;
   		hasilserang = "ANDA MENYERANG GOBLIN";
   		hasilseranggoblin = "GOBLIN MENYERANG BALIK";
   		
	   }
   	else if (aks == 2){
   		healt += 25;
   		hasilserang = "Anda Mengisi Darah sebanyak 20";
   		hasilseranggoblin = " ";
   		
	   }
   	else {
   		hasilserang = "Pilihan anda tidak valid";
   		return 1;
   		
	   }pp
	   
	   if (darahgoblin <= 0){
	   	cout << "ANDA BERHASIL MENGALAHKAN MONSTER GOBLIN";
	   	return 0;
	   	
	   }
   	else if (healt <= 0){
   		cout <<                "ANDA KALAH!"  <<endl;
   		cout << "MONSTER GOBLIN BERHASIL MENGALAHKAN ANDA!";
   		return 0;
   		
	   }
   	
   	
   }
    
    return 0;
}