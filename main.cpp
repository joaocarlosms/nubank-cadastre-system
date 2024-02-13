
#include <cstdlib>
#include "Login.h"
#include "Node.h"
#include "BinaryTreeAVL.h"

using namespace std;

void menuOpcoes() {
    cout << "\n\t\t-------------------------------" << endl;
    cout << "\t\t             Menu               " << endl;
    cout << "\t\t1 - Insert " << endl;
    cout << "\t\t2 - Remove balancing " << endl << endl;
    cout << "\t\t3 - Insert balancing " << endl << endl;
    cout << "\t\t-------------------------------  " << endl;
    cout << "\t\ti - Print (in-order)" << endl;
    cout << "\t\tp - print (pos-order)" << endl;
    cout << "\t\to - print (pre-order)" << endl;
    cout << "\t\ts - Save data " << endl;
    cout << "\t\tq - Quit " << endl;
    cout << "\t\t-------------------------------  " << endl;
    cout << "\t\tChoose one option:";
}

int main() {
    int id;
    Login user;
    char option = 's';
    BinaryTreeAVL tree;
    //tree.loadProdutos();

    do {
        menuOpcoes();
        cin >> option;
        cout << "\t\t----------------------------\n";

        switch (option) {
            case '1':
                user.fill_data();
                tree.insert(user);
                break;
            case '2':
                cout << endl << endl << "*** Remoção de nó ***" << endl;
                cout << "Informe o id:";
                cin >> id;
                user.setId(id);
                tree.remove(user);
                cout << "*** Remoção feita com sucesso." << endl << endl;
                break;

            case '3':
            {
                user.fill_data();
                tree.insert(user);
                Node* newNode = tree.find(tree.getRoot(), user);
                tree.executeBalancing(newNode);
                
                cout << endl << endl;
                tree.print2D(tree.getRoot());
                cout << endl << endl;
                break;
            }

            case 'i':
            {
                cout << endl << endl << "*** Percurso na arvore ***" << endl;
                tree.inOrder(tree.getRoot());
                cout << endl << "*** Percurso feito." << endl << endl;
                break;
            }

            case 'p':
            {
                cout << endl << endl << "*** Percurso na arvore ***" << endl;
                tree.posOrder(tree.getRoot());
                cout << endl << "*** Percurso feito." << endl << endl;
                break;
            }

            case 'o':
            {
                cout << endl << endl << "*** Percurso na arvore ***" << endl;
                tree.preOrder(tree.getRoot());
                cout << endl << "*** Percurso feito." << endl << endl;
                break;
            }

            case 's':
            {
                cout << endl << endl << "*** Salvando no arquivo..." << endl;
                tree.saveDataInFileText();
                cout << "*** Salvo com sucesso." << endl << endl;
                break;
            }
            default:
                break;
        }
    } while (option != 'q' && option != 'Q');


    return 0;
}



