drinkPay, money, satisfied = map(int, input().split())

canHear = int(money / drinkPay)
if canHear < satisfied:
    print(canHear)
else :
    print(satisfied)
