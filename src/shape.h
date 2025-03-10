#ifndef INHERITANCE_SHAPE_H_
#define INHERITANCE_SHAPE_H_

#include <string>

class Shape {
 public:
  explicit Shape(int size) : size_(size){};
  virtual void draw() const = 0;
  virtual void error(const const std::string& msg);
  int objectID() const;

 protected:
  int size_;
}

#endif  // INHERITANCE_SHAPE_H_