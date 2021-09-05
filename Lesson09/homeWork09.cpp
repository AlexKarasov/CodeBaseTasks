#include <iostream>

struct Worker {
    std::string nameOfWorker;
    int salary;
    Worker* nextWorker;
};

int main()
{
    Worker* headWorker = new Worker;
    Worker* theSecondWorker = new Worker;
    Worker* theThrirdWorker = new Worker;
    Worker* theFourthWorker = new Worker;

    headWorker->nameOfWorker = "Adam";
    headWorker->salary = 800;
    headWorker->nextWorker = theSecondWorker;

    theSecondWorker->nameOfWorker = "John";
    theSecondWorker->salary = 900;
    theSecondWorker->nextWorker = theThrirdWorker;

    theThrirdWorker->nameOfWorker = "Grey";
    theThrirdWorker->salary = 1200;
    theThrirdWorker->nextWorker = theFourthWorker;

    theFourthWorker->nameOfWorker = "Sergey";
    theFourthWorker->salary = 2000;
    theFourthWorker->nextWorker = nullptr;

    for (Worker* current = headWorker; current != nullptr; current = current->nextWorker) {
        std::cout << current->nameOfWorker << '\n' << current->salary << std::endl;
    }
   
    std::cout << std::endl;

    int totalEnterpriseSalary = 0;
    int workerCounter = 0;

    for (Worker* currentElement = headWorker; currentElement != nullptr; currentElement = currentElement->nextWorker) {
        totalEnterpriseSalary += currentElement->salary;
        workerCounter++;
    }

    double averageEnterpriseSalary = totalEnterpriseSalary / workerCounter;

    std::cout << "Average enterprise salary: " << averageEnterpriseSalary << std::endl;

    std::cout << "Input the worker name to remove: " << std::endl;
    std::string workerToRemove;
    std::cin >> workerToRemove;

    Worker* previousWorker = nullptr;

    for (Worker* currentEmployer = headWorker; currentEmployer != nullptr; currentEmployer = currentEmployer->nextWorker) {
        if  (currentEmployer->nameOfWorker == workerToRemove) {
            previousWorker->nextWorker = currentEmployer->nextWorker;
            delete currentEmployer;
            break;
        }
        previousWorker = currentEmployer;
    }

    std::cout << std::endl;

    for (Worker* current = headWorker; current != nullptr; current = current->nextWorker) {
        std::cout << current->nameOfWorker << '\n' << current->salary << std::endl;
    }
    
    return 0;
}
