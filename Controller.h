#ifndef _CONTROLLER_
#define _CONTROLLER_

#include "Model.h"

class Controller{
public:
  Controller(Model*);
  ~Controller();
  void setData(int);
private:
  Model* model_;
};

#endif
