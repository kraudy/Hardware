from gates import AndGate, OrGate, XorGate

class HalfAdder:
  def __init__(self):
    self.and1 = AndGate()
    self.xor1 = XorGate()
  
  def __call__(self, a: bool, b: bool) -> tuple[bool, bool]:
    sum = self.xor1(a, b)
    cout = self.and1(a, b)
    return sum, cout