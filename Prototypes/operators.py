from gates import AndGate, OrGate, XorGate, NotGate

class HalfAdder:
  def __init__(self):
    self.xor1 = XorGate()
    self.and1 = AndGate()
  
  def __call__(self, a: bool, b: bool) -> tuple[bool, bool]:
    sum = self.xor1(a, b)
    cout = self.and1(a, b)
    return sum, cout
  
class FullAdder:
  def __init__(self):
    self.half1 = HalfAdder()
    self.half2 = HalfAdder()
    self.or1 = OrGate() # Add the two carries together
  
  def __call__(self, a: bool, b: bool, cin: bool) -> tuple[bool, bool]:
    halfSum, c1 = self.half1(a, b)
    sum, c2 = self.half2(halfSum, cin)
    cout = self.or1(c1, c2)
    return sum, cout
  
class HalfSubstractor:
  def __init__(self):
    self.xor1 = XorGate()
    self.not1 = NotGate()
    self.and1 = AndGate()

  def __call__(self, a: bool, b: bool) -> tuple[bool, bool]:
    diff = self.xor1(a, b)
    a_inv = self.not1(a)
    borrow = self.and1(a_inv, b)
    return diff, borrow