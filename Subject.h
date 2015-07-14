#ifndef _SUBJECT_
#define _SUBJECT_

#include <vector>
#include <iostream>
#include "Observer.h"

class Subject {
public:
  Subject();
  virtual ~Subject();
  void subscribe(Observer*);
  void notify();
private:
  std::vector<Observer*> subscribers_;
};

#endif
