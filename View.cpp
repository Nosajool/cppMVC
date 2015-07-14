#include "View.h"

View::View(Controller* c, Model* m): controller_(c), model_(m) {
  std::cout << "View Constructor: " << std::endl;
  m->subscribe(this);
  update();
}

View::~View() {}

void View::getInput() {
  int a;
  std::cout << "Please enter an integer to update the model: ";
  std::cin >> a;
  controller_->setData(a);
}

void View::update() {
  std::cout << "Model data: ";
  std::cout << model_->getData() << std::endl;
}
