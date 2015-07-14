#include "Model.h"
#include "Controller.h"
#include "View.h"

int main(int argc, char* argv[]) {
  Model* model = new Model(0);
  Controller* controller = new Controller(model);
  View* view = new View(controller, model);

  view->getInput();

  return 0;
}
