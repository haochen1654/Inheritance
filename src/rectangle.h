#ifndef INHERITANCE_RECTANGLE_H_
#define INHERITANCE_RECTANGLE_H_

class Rectangle : public Shape {
 public:
  explicit Rectangle(int size, int angle) : angele_(angle), Shape(size){};
  virtual void draw() override;

 private:
  int angle_;
}
#endif  // INHERITANCE_RECTANGLE_H_