#ifndef INHERITANCE_GAME_CHARACTOR_H_
#define INHERITANCE_GAME_CHARACTOR_H_

class GameCharater;
// function for default health calculation algorithm
int defaultHealthCalc(const GameCharacter& gc) { return 0; }

class GameCharacter {
 public:
  typedef int (*HealthCalcFunc)(const GameCharacter&);
  explicit GameChacter(HealthCalcFunc hcf = defaultHealthCalc)
      : healthFunc(hcf) {}
  int healthValue() const { return healthFunc(*this); }

 private:
  HealthCalcFunc healthFunc;
};

#endif  // INHERITANCE_GAME_CHARACTOR_H_