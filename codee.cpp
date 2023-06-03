# code-c-plus
#include <iostream>
#include <ctime>

int main() {
    std::time_t currentTime = std::time(0);
    std::tm* now = std::localtime(&currentTime);
    int hours = now->tm_hour;
    std::string greeting;

    if (hours < 12) {
        greeting = "Доброе утро";
    } else if (hours < 18) {
        greeting = "Добрый день";
    } else {
        greeting = "Добрый вечер";
    }

    std::cout << "Пожалуйста, введите ваше имя: ";
    std::string username;
    std::getline(std::cin, username);

    std::string message = greeting + ", " + username + "! Сегодня " + std::to_string(now->tm_mday) + "." + std::to_string(now->tm_mon + 1) + "." + std::to_string(now->tm_year + 1900) + " и время " + std::to_string(now->tm_hour) + ":" + std::to_string(now->tm_min) + ":" + std::to_string(now->tm_sec) + ".";
    std::cout << message << std::endl;

    return 0;
}
