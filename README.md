# Лабораторная работа №1: Работа с Git и GitHub 🖥️

## 📋 Описание проекта

Данный репозиторий был создан в рамках лабораторной работы по теме: "Основы работы с Git и GitHub". В результате работы были разработана программа для решения задачи, выбранной согласно заданию, и создан репозиторий для объединения программ.

## 🎯 Задание

**Задание:** Разработать алгоритм решения задачи по индивидуальному заданию. Для этого необходимо:

1. Выбрать задачу и разработать алгоритм ее решения. 🧑‍💻
2. Написать и отладить программу (в нашем случае на языке С++). 🧑‍🔧
3. Протестировать работу программы на различных данных. 🔍
4. Продемонстрировать работу с Git и GitHub на примере написанной программы. 🚀

## 🔧 Структура репозитория

main
│ └── main.cpp 🌿
│
├── shuballity 🌿
│ └── main.cpp
│
├──  task_b 🌿
│ └── main.cpp
│
├──  withmenu 🌿
│ └── task_b.cpp

Ветка main - корневая ветка репозитория.
Ветки shuballity, task_b - ветки, в которых были созданы программы, в последствии объединенные а main.
Ветка withmenu содержит программу для выбора между программами при запуске.

## 🛠️ Ход работы

Во время работы были созданы программы на языке C++, затем созданы ветки в репозиторие (git checkout -b <имя ветки>), в случае с Данилом был создан удаленный репозиторий (git remote add origin <ссылка на репозиторий>), Никита клонировал репозиторий локально (git clone <ssh-ссылка>), изменены ветки для работы (git switch <имя ветки>), добавлены файлы программ (git add), закоммичены изменения (git commit -m <сообщение>), далее запушены изменения (git push), изменена ветка для редактирования (git checkout <имя ветки>), объединены ветки (git checkout <имя той ветки, с которой объединяем>).
