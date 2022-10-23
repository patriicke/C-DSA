#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>

using namespace std;

int randomNumber(int min, int max){
    srand(time(0));
    return rand() % (max - min + 1) + min;
}


int main (){
    string words_categories[] = {"animals", "teams", "districts", "films", "books"};
    string animals_category[] = {"albatross", "elephant", "gorilla", "giraffe", "cheetah", "barracuda", "antelope", "armadillo", "lion", "dolphin"};
    string teams_category[] = {"barcelona", "real madrid", "rayon sport", "manchester united", "chelsea", "amavubi", "golden states", "juventus", "arsenal", "monaco"};
    string districts_category[] = {"Gasabo", "Musanze", "Rubavu", "Kigali", "Burera", "Bugesera", "Gicumbi", "Nyabihu", "Nyarugenge", "Nyaruguru"};
    string films_category[] = {"Blackout", "The Sinner", "The Midnight Club", "The Mole", "Cocomelon", "The Watcher", "Megamind", "he Blacklist", "The Gray Man", "Minions"};
    string books_category[] ={"Anna Karenina", "To Kill a Mockingbird","The Great Gatsby", "One Hundred Years of Solitude", "A Passage to India","Invisible Man", "Don Quixote", "Beloved", "Mrs. Dalloway", "Things Fall Apart"};
    string *current_category;
    int words_categories_length = sizeof(words_categories)/sizeof(typeof(words_categories[0])) ,i = 0, choosed_category, random_index;
    cout << "Categories of words to guess: " << endl;
    while (i < words_categories_length){
        cout << "\t"<< (i+1) << ". names of " << words_categories[i] << endl;
        i++;
    }
    choose_category_ref:
    cout << "Choose category: ";
    cin >> choosed_category;
    if(choosed_category < 1 || choosed_category > 5){
        goto choose_category_ref;
    }
    cout << "You chose to continue with " << words_categories[choosed_category -1] << " guessing game." <<endl;
    switch (choosed_category)
    {
    case 1:
    current_category = animals_category;
        break;
     case 2:
    current_category = teams_category;
        break;
     case 3:
    current_category = districts_category;
        break;
     case 4:
    current_category = films_category;
        break;
     case 5:
    current_category = books_category;
        break;
    }
    random_index = randomNumber(0,9);
    int trials;
    switch (current_category[random_index].length()){
    case 4:
    case 5:
    trials = 2;
    break;
    case 6:
    case 7:
        trials = 3;
    break;
    case 8:
    case 9:
    case 10:
        trials = 4;
    break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        trials = 6;
    break;
    }
    string trialsLetterArray[trials+1];
    for (int i = 0; i < trials; i++){
        incorrectLetter:
        cout << "Enter any letter: ";
        cin >> trialsLetterArray[i];
        if(trialsLetterArray[i].length() > 1 || trialsLetterArray[i].length() < 1) {
            goto incorrectLetter;
        }
        for (int j = 0; j < current_category[random_index].length(); j++){
            string currentText = animals_category[random_index];
            // cout << (currentText.compare(trialsLetterArray[i]) ? currentText.at(j) : "_";
        }
        cout << endl;
    }
    // cout << current_category[random_index] << " "  << (current_category[random_index]).length() << endl; 
    
    return 0;
}