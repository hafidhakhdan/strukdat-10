/*
Nama	: Hafidh Akhdan Najib
Kelas	: A
NPM		: 140810180061
*/


#include<iostream>

using namespace std;

struct Simpul{
    int info;
    Simpul* left;
    Simpul* right;
};
typedef Simpul* pointer;
typedef pointer Tree;

void createSimpul(pointer& pBaru){
    pBaru=new Simpul;
    cout<<"Masukkan satu angka : ";
    cin>>pBaru->info;
    pBaru->left=NULL;
    pBaru->right=NULL;
}
void insertBST (Tree& Root, pointer pBaru){
    if(Root==NULL){
        Root=pBaru;
    }
    else if (pBaru->info < Root->info){
        insertBST(Root->left,pBaru);
    }
    else if (pBaru->info > Root->info){
        insertBST(Root->right,pBaru);
    }
    else{
        cout<<"Sudah ada"<<endl;
    }
}
void preOrder (Tree Root) {
    if (Root != NULL){
        cout<< Root->info <<" ";
        preOrder(Root->left);
        preOrder(Root->right);
    }
}

void inOrder (Tree Root) {
    if (Root != NULL){
        inOrder(Root->left);
        cout<< Root->info <<" ";
        inOrder(Root->right);
    }
}
void postOrder (Tree Root) {
    if (Root != NULL){
        postOrder(Root->left);
        postOrder(Root->right);
        cout<< Root->info <<" ";
    }
}

void notasiKurung(Tree Root){
    if (Root != NULL){
        cout<<"(" << Root->info;
        notasiKurung(Root->left);
        notasiKurung(Root->right);
        cout<<")";
    }
}


int main(){
 int n,pil;
    pointer p;
    Tree Root;
    Root = NULL;
    cout << "Jumlah data: "; cin >> n;
    
 	for(int i; i<n; i++){
  		createSimpul(p);
     	insertBST(Root, p);
 	}
 	
 	cout<<endl; notasiKurung(Root);
 
 	do{		
  		cout<<endl;
  		cout<<"======TREE======"<<endl;
 		cout<<"1. PreOrder"<<endl;
 		cout<<"2. InOrder"<<endl;
		cout<<"3. PostOrder"<<endl;
 		cout<<"4. Exit"<<endl;
 		cout<<"================";
 		cout<<"\nPilih (1/2/3/4) : "; cin>>pil;
 		
  		switch (pil){
  			case 1 :
   			system("cls");
   			cout<<"=====PREORDER====="<<endl;
   			preOrder(Root);
   			break;

   			case 2 :
 			system("cls");
  			cout<<"=====INORDER====="<<endl;
  		 	inOrder(Root);
   			break;
   
   			case 3 :
   			system("cls");
   			cout << "=====POSTORDER=====" <<endl;
   			postOrder(Root);
   			break;
  		}
 	} while(pil!=4);
}
    
