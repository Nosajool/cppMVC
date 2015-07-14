#include "Model.h"

Model::Model(int data) : data_(data){

}

Model::~Model(){

}

int Model::getData() const {
  return data_;
}

void Model::setData(int data) {
  data_ = data;
  notify();
}
