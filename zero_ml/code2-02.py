price1 = [11, 22]
price2 = [33, 44]
all = [price1, price2]
print(f'all = {all}')
print(f'len(price1) = {len(price1)}')
print(f'len(all) = {len(all)}')

print(f'price1[0] = {price1[0]}')
print(f'all[0] = {all[0]}')
print(f'all[1][1] = {all[1][1]}')

price = []
print(f'price = {price}')
price.append(price1)
print(f'price = {price}')
price.append(price2)
print(f'price = {price}')
