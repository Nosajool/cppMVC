#include "Subject.h"

Subject::Subject() {}

Subject::~Subject() {}

void Subject::subscribe(Observer* o) {
  subscribers_.push_back(o);
}

void Subject::notify() {
  std::cout << "Notifying subscribers: " << std::endl;
  for (auto it=subscribers_.begin(); it!=subscribers_.end(); ++it) {
    (*it)->update();
  }
}
