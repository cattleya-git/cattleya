'''
01
'''
name = 'yuri_ebihara'
age = 40

formatted = f'{name} is {age:.2e}.'
print(formatted)

'''
02
'''
stores = [
    ('aaa', 12.25),
    ('bbb', 24.50),
    ('ccc', 36.75)
]
for i, (item, count) in enumerate(stores):
    print(f'{i+1}) '
          f'{item.title():<5s} = '
          f'{round(count)}')

'''
03
'''
places = 2
number = 601.8163
print(f'{number:.{places}f}')
