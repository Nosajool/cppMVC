#include "Controller.h"

Controller::Controller(Model* model): model_(model) {

}

void Controller::setData(int data) {
  model_->setData(data);
}
