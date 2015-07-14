#ifndef _MODEL_
#define _MODEL_

#include "Subject.h"

class Model: public Subject {
public:
  Model(int);
  virtual ~Model();
  int getData() const;
  void setData(int);
private:
  int data_;
};

#endif
