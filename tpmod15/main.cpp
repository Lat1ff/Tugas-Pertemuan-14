#include "tree.h"

using namespace std;

int main()
{
    adrnode root = nil;
    adrnode P;
    int x[9] = {5,3,9,10,4,7,1,8,6};

    cout << "================================================================================" << endl;
    for(int i = 0; i <= 8; i++){
        cout << x[i] << " ";
        P = newNode_1301213541(x[i]);
        insertNode_1301213541(root,P);
    }
    cout << endl;
    cout << endl;
    cout << "Pre Order\t\t: ";
    printPreOrder_1301213541(root);
    cout << endl;
    cout << endl;
    cout << "Descendent of Node 9\t: ";
    printDescendant_1301213541(root,9);
    cout << endl;
    cout << endl;
    cout << "Sum of BST Info\t\t: ";
    cout << sumNode_1301213541(root);
    cout << endl;
    cout << "Number of Leaves\t: ";
    cout << countLeaves_1301213541(root);
    cout<< endl;
    cout << "Height of Tree\t\t: ";
    cout << heightTree_1301213541(root);
    cout << endl;
    cout << "================================================================================";

    return 0;
}
