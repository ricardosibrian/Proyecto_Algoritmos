#include <iostream>
#include "heap.hpp"

int main()
{
    // Crear un nodo para cada simbolo (Desconectados entre si)
    Node *nodeA = new Node{"\u0627", 0.29, nullptr, nullptr};  
    Node *nodeB = new Node{"\u0628", 0.18, nullptr, nullptr};  
    Node *nodeC = new Node{"\u062A", 0.50, nullptr, nullptr};  
    Node *nodeD = new Node{"\u062B", 0.37, nullptr, nullptr};  
    Node *nodeE = new Node{"\u062C", 0.72, nullptr, nullptr};  
    Node *nodeF = new Node{"\u062D", 0.51, nullptr, nullptr};  
    Node *nodeG = new Node{"\u062E", 0.23, nullptr, nullptr};  
    Node *nodeH = new Node{"\u062F", 0.40, nullptr, nullptr};  
    Node *nodeI = new Node{"\u0630", 0.71, nullptr, nullptr};  
    Node *nodeJ = new Node{"\u0631", 0.66, nullptr, nullptr};  
    Node *nodeK = new Node{"\u0632", 0.12, nullptr, nullptr};  
    Node *nodeL = new Node{"\u0633", 0.55, nullptr, nullptr};  
    Node *nodeLL = new Node{"\u0634", 0.67, nullptr, nullptr};  
    Node *nodeM = new Node{"\u0635", 0.37, nullptr, nullptr};  
    Node *nodeN = new Node{"\u0636", 0.20, nullptr, nullptr};  
    Node *nodeEnie = new Node{"\u0637", 0.09, nullptr, nullptr};  
    Node *nodeO = new Node{"\u0638", 0.35, nullptr, nullptr};  
    Node *nodeP = new Node{"\u0639", 0.31, nullptr, nullptr};  
    Node *nodeQ = new Node{"\u063A", 0.77, nullptr, nullptr};  
    Node *nodeR = new Node{"\u0641", 0.94, nullptr, nullptr};  
    Node *nodeS = new Node{"\u0642", 0.19, nullptr, nullptr};  
    Node *nodeT = new Node{"\u0643", 0.66, nullptr, nullptr};  
    Node *nodeU = new Node{"\u0644", 0.81, nullptr, nullptr};  
    Node *nodeV = new Node{"\u0645", 0.34, nullptr, nullptr};  
    Node *nodeW = new Node{"\u0646", 0.22, nullptr, nullptr};  
    Node *nodeX = new Node{"\u0647", 0.56, nullptr, nullptr};  
    Node *nodeY = new Node{"\u0648", 0.04, nullptr, nullptr};  
    Node *nodeZ = new Node{"\u064A", 0.38, nullptr, nullptr};


    // Crear el heap e insertar los nodos 
    MinHeap minHeap;
    minHeap.insert(nodeA);
    minHeap.insert(nodeB);
    minHeap.insert(nodeC);
    minHeap.insert(nodeD);
    minHeap.insert(nodeE);
    minHeap.insert(nodeF);
    minHeap.insert(nodeG);
    minHeap.insert(nodeH);
    minHeap.insert(nodeI);
    minHeap.insert(nodeJ);
    minHeap.insert(nodeK);
    minHeap.insert(nodeL);
    minHeap.insert(nodeLL);
    minHeap.insert(nodeM);
    minHeap.insert(nodeN);
    minHeap.insert(nodeEnie);
    minHeap.insert(nodeO);
    minHeap.insert(nodeP);
    minHeap.insert(nodeQ);
    minHeap.insert(nodeR);
    minHeap.insert(nodeS);
    minHeap.insert(nodeT);
    minHeap.insert(nodeU);
    minHeap.insert(nodeV);
    minHeap.insert(nodeW);
    minHeap.insert(nodeX);
    minHeap.insert(nodeY);
    minHeap.insert(nodeZ);

    // Mostrar el tamaño del heap
    std::cout << "Tamano del monticulo: " << minHeap.getSize() << std::endl;

    // Extraer el nodo con la probabilidad mínima
    Node *minNode = minHeap.extractMin();

    // Mostrar la información del nodo extraído
    std::cout << "Nodo extrado: " << minNode->ch << " " << minNode->prob << std::endl;

    return 0;
}
