#ifndef INHERITANCE_SHAPE_H_
#define INHERITANCE_SHAPE_H_

#include <string>

class Shape {
 public:
  virtual void draw() const = 0;
  virtual void error(const const std::string& msg);
  int objectID() const;
}

#endif  // INHERITANCE_SHAPE_H_
