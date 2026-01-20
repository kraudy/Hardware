from gates import AndGate, NandGate, OrGate

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
    assert Nand1(a, b) == y, f"Failed: {a} AND {b} -> {y}"
  
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
    assert or1(a, b) == y, f"Failed: {a} AND {b} -> {y}"
  
  print("test OrGate successful")

if __name__ == "__main__":
  test_AndGate()
  test_NandGate()
  test_OrGate()