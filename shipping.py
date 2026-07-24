weight = 1.5

cost = 0

# Ground shipping variables and logic
flat_charge_ground = 20

if weight <= 2:
  cost = weight * 1.50
elif weight <= 6:
  cost = weight * 3
elif weight <= 10:
  cost = weight * 4
elif weight > 10:
  cost = weight * 4.75
else:
  print("Error: 0, Please try again.")

cost = cost + flat_charge_ground


print(f"Standard ground shipping: ${cost:.2f}")

# Premium ground shipping
flat_charge_premium = 125

print(f"Premium ground shipping: ${flat_charge_premium:.2f}")

# Drone Shipping
if weight <= 2:
  cost = weight * 4.50
elif weight <=6:
  cost = weight * 9
elif weight <= 10:
  cost = weight * 12
elif weight > 10:
  cost = weight * 14.25
else:
  print("ERROR: 1, Please try again.")

print(f"Drone shipping: ${cost:.2f}")
