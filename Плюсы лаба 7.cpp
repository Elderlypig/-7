#include <iostream>
#include <queue>



void print_queue(std::queue<double> очередь) {
    while (!очередь.empty()) {
        std::cout << очередь.front() << " ";
        очередь.pop();
    }
    std::cout << " " << std::endl;
}


int main() {
    std::queue<double> очередь;
    setlocale(LC_ALL, "Russian");

    int a;
    std::cout << "как вы хоттите ввести очередь? Рандомайзер(Для выбора введите 0) / Заполнение (Для выбора введи 1): ";
    std::cin >> a;

    if (a == 1) {
        for (int i = -50; i <= 50; i++) {
            очередь.push(i);
        }
        print_queue(очередь);

        int максимальный_элемент = очередь.front();
        while (!очередь.empty()) {
            if (очередь.front() > максимальный_элемент) {
                максимальный_элемент = очередь.front();
            }
            очередь.pop();
        }

        очередь.push(максимальный_элемент);


        while (!очередь.empty()) {
            std::cout << "Максимальный элемент:" << очередь.front() << " ";
            очередь.pop();
        }
    }

    if (a == 0) {
        for (int i = -50; i <= 50; i++) {

            double l = rand() % 101 - 50;

            очередь.push(l);

        }
        print_queue(очередь);

        double максимальный_элемент = очередь.front();
        while (!очередь.empty()) {
            if (очередь.front() > максимальный_элемент) {
                максимальный_элемент = очередь.front();
            }
            очередь.pop();
        }

        очередь.push(максимальный_элемент);
        
        while (!очередь.empty()) {
            std::cout <<"Максимальный элемент:" << очередь.front() << " ";
            очередь.pop();
        }
    }
    
}
