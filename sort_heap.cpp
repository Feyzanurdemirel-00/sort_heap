//STL İLE HEAP SIRALAMASI
#include <iostream>
#include <algorithm> //make_heap, pop_heap, push_heap, sort_heap kullanabilmek için
#include <vector> //vektör kullanacağımız için
#include <iostream> //dosya islemleri
#include <fstream> //dosya islemleri

using namespace std;

int main(){
	
	vector <int> myvector; //myvector adında bir vektör tanımlandı.
	
	//dosya işlemleri
	ifstream readFile("input.txt"); //input.txt dosyamızdan verileri okuyacağız
	ofstream writeFile("output.txt"); //output.txt dosyasına çıktıyı yazdıracağız
	
	if(readFile){
		
		int value; //dosyamızın içindeki integer değerleri çekebilmek için bir value tanımladık.
		
	
	while( readFile >> value){
		
		myvector.push_back(value);
	}//input.txt dosyamızdaki ögeleri myvector'e okuttuk.
	
	}
	
	make_heap (myvector.begin(), myvector.end()); //make_heap ile heap'i oluşturuyoruz.
	
	sort_heap (myvector.begin(), myvector.end()); //sort_heap ile heap'i sıralıyoruz.
	
	cout<<"Heap'in siralanmis hali:";
	
	for(unsigned i=0; i<myvector.size(); i++) //i=0'dan başlıyor ve vektörün boyutu kadar vektörü dolaşıyor en sonunda sıralanmış haliyle tüm değerleri yazdırıyor.
	
	cout<< ' '<<myvector[i];
	cout<<'\n';
	
	//heap'in sıralanmış halini output.txt'ye yazdırıyoruz.
	for(unsigned x=0; x<myvector.size(); x++)
	writeFile<<' '<<myvector[x];
	cout<<'\n';
	
	//en sonunda dosyaları kapatıyoruz
	readFile.close();
	writeFile.close();
	
	
	return 0;
}
