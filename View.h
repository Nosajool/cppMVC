#ifndef _VIEW_
#define _VIEW_

#include "Observer.h"
#include "Controller.h"
#include "Model.h"
#include <iostream>

class View : public Observer {
public:
  View(Controller*, Model*);
  virtual ~View();
  virtual void update();
  void getInput();
private:
  Controller* controller_;
  Model* model_;
};

#endif
