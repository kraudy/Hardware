from gates import AndGate, NandGate, OrGate, NorGate, XnorGate, XorGate, NotGate

def test_AndGate():
  and1 = AndGate()

  truth_table = [
    (0, 0, 0),
    (0, 1, 0),
    (1, 0, 0),
    (1, 1, 1)
  ]

  for a, b, y in truth_table:
    assert and1(a, b) == y, f"Failed: {a} AND {b} -> {y}"
  
  print("test AndGate successful")

def test_NandGate():
  Nand1 = NandGate()

  truth_table = [
    (0, 0, 1),
    (0, 1, 1),
    (1, 0, 1),
    (1, 1, 0)
  ]

  for a, b, y in truth_table:
    assert Nand1(a, b) == y, f"Failed: {a} NAND {b} -> {y}"
  
  print("test NandGate successful")

def test_OrGate():
  or1 = OrGate()

  truth_table = [
    (0, 0, 0),
    (0, 1, 1),
    (1, 0, 1),
    (1, 1, 1)
  ]

  for a, b, y in truth_table:
    assert or1(a, b) == y, f"Failed: {a} OR {b} -> {y}"
  
  print("test OrGate successful")

def test_NorGate():
  Nor1 = NorGate()

  truth_table = [
    (0, 0, 1),
    (0, 1, 0),
    (1, 0, 0),
    (1, 1, 0)
  ]

  for a, b, y in truth_table:
    assert Nor1(a, b) == y, f"Failed: {a} NOR {b} -> {y}"
  
  print("test NorGate successful")

def test_XnorGate():
  Xnor1 = XnorGate()

  truth_table = [
    (0, 0, 1),
    (0, 1, 0),
    (1, 0, 0),
    (1, 1, 1)
  ]

  for a, b, y in truth_table:
    assert Xnor1(a, b) == y, f"Failed: {a} XNOR {b} -> {y}"
  
  print("test XnorGate successful")

def test_XorGate():
  Xor1 = XorGate()

  truth_table = [
    (0, 0, 0),
    (0, 1, 1),
    (1, 0, 1),
    (1, 1, 0)
  ]

  for a, b, y in truth_table:
    assert Xor1(a, b) == y, f"Failed: {a} XOR {b} -> {y}"
  
  print("test XorGate successful")

def test_NotGate():
  Not1 = NotGate()

  truth_table = [
    (0, 1),
    (1, 0)
  ]

  for a, y in truth_table:
    assert Not1(a) == y, f"Failed: NOT {a} -> {y}"
  
  print("test NotGate successful")

if __name__ == "__main__":
  test_AndGate()
  test_NandGate()
  test_OrGate()
  test_NorGate()
  test_XnorGate()
  test_XorGate()
  test_NotGate()