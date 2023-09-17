#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

    string getResponse(const string& message) {
    if (message == "Привет") {
        return "Привет! Как ты?";
    }
    else if (message == "Пока") {
        return "Пока! Увидимся в следующий раз!";
    }
    else {
            vector<string> randomResponses = {
            "А ты молодец!",
            "Я не уверен, что понимаю. Можешь объяснить подробнее?",
            "Как интересно! Расскажи больше.",
            "Что ты имеешь в виду?",
            "Мне кажется, это интересная тема.",
            "Понятно. А что ты думаешь об этом?"
        };

        int numResponses = randomResponses.size();
        int randomIndex = rand() % numResponses;

        return randomResponses[randomIndex];
    }
}

int main() {
        setlocale(LC_ALL, "Russian");
        srand(time(0));

        string message;
        cout << "Привет! Чат-бот готов к общению." << endl;

    while (true) {
            cout << "> ";
            getline(cin, message);

        if (message.empty()) {
            continue;
        }

            string response = getResponse(message);
            cout << "Бот: " << response << std::endl;

        if (response == "Пока! Увидимся в следующий раз!") {
            break;
        }
    }

    return 0;
}
