// cards.h

#ifndef __CARDS_H_INCLUDED__
#define __CARDS_H_INCLUDED__

// forward declaration dependencies here

#include <string>
#include <vector>

class Card {
  string name,desc;
public:
  void setName(string newName);
  string getName();
  void setDesc(string newDesc);
  string getDesc();
};

class Deck {
  string name;
  vector<Card> cards;
public:
  Deck(int decksize);
  void setName(string newName);
  string getName();
};

Deck::Deck (int decksize) {
  cards.resize(decksize);
  printf()
}

#endif
