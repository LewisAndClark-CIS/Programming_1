#Programming challenge
#Brad Riley

'''
1. Display company name, address, and phone.
2. Prompt to choose from a list of 5 products.
3. Prompt quanity.
4. Prompt how many months to pay.
5. Display all info gathered including total of all products.
'''


choiceOfProduct = -1
quanity = -1
monthsToPay = -1
payPerMonth = 0
price = 3
name = 1
totalPrice = 0
         #Product number  Product name   ID     PRICE
listOfProducts = (['1', 'Stove', 'ID HERE', 1],
                  ['2', 'Refrigerator', 'ID HERE', 2],
                  ['3', 'Dishwasher', 'ID HERE', 3],
                  ['4', 'Chair', 'ID HERE', 4],
                  ['5', 'Sofa', 'ID HERE', 5])

#Prints the product menu
def printMenu(listOfProducts):
    print('Products:')
    for i in listOfProducts:
        print(i[0], ' - ' , i[1], ' - ', i[2], ' - $', i[3])


   
#Main
print('''\n
\t\tCOMPANY NAME HERE\n
\t\tADDRESS HERE\n
\t\tPHONE NUMBER HERE\n
''')

printMenu(listOfProducts)

#Get product validation loop                     
while True:     
    try:
        
        choiceOfProduct = int(input('Enter product number: '))
        while (choiceOfProduct - 1) not in range(5):
            printMenu(listOfProducts)
            print('\nSorry, that is not a valid product number.')
            choiceOfProduct = int(input('Enter product number: '))
        break
    except ValueError:
        print()
        printMenu(listOfProducts)
        print('\nSorry, that is not a valid product number.')



#Get quanity validation loop 
while True:     
    try:
        quanity = int(input('Enter quanity of product: '))
        while quanity <= 0:
            print('Sorry, that is not a valid quanity.')
            quanity = int(input('Enter quanity of product: '))
        break
    except ValueError:
        print('Sorry, that is not a valid quanity')

#Get how many months to pay validation loop
while True:     
    try:
        monthsToPay = int(input('Enter how many months to pay for product: '))
        while monthsToPay <= 0:
            print('Sorry, that is not a valid time span.')
            monthsToPay = int(input('Enter how many months to pay for product: '))
        break
    except ValueError:
        print('Sorry, that is not a valid time span.')

#Get pay per month and total
totalPrice = (listOfProducts[(choiceOfProduct - 1)][price]) * quanity
payPerMonth = totalPrice//monthsToPay

#Print all of it pretty like
print()
print('Product ordered: ' + listOfProducts[(choiceOfProduct - 1)][name])
print('Quanity of product: ' + str(quanity))
print('Months to pay: ' + str(monthsToPay))
print('Monthly Payment: $' + str(payPerMonth))
print('Total price: $' + str(totalPrice))
