import requests
import random
import time

apiKey = "37a53c999fab46e79c0660492c8b4f41"
base_url = f"https://newsapi.org/v2"
day = time.strftime('%Y-%m-%d')

def random_news():
    #to fetch the random news from top headlines
    news = requests.get(f"{base_url}/top-headlines?country=in&apiKey={apiKey}",timeout=30)
    articles = news.json()['articles']  #fetch top articles
    num = len(articles)  
    ran = random.randint(0,num-1)
    title = articles[ran]['title']
    detail = articles[ran]['description']
    return title,detail

def popular_news(index,category,lang,day):

    url = (f'{base_url}/top-headlines?'
           'country=in&'
           f'language={lang}&'
           f'category={category}&'
           f'from={day}&'
           'sortBy=popularity&'
           f'apiKey={apiKey}')
    news = requests.get(url,timeout=30)
    articles = news.json()['articles']
    title = articles[index]['title']
    detail = articles[index]['description']
    return title,detail

def ck_int():  #to conquer the error during input
    while True:
        try:
            var = input("Choose from the above option: ")
            var = int(var)
            break
        except ValueError:
            print("Please enter appropiate option!")

    return var

if __name__ == "__main__":
    while True:
        print("Welcome to NewsStation".center(50,':'))
        print("\n1.for random news")
        print("2.To generate news acc to category")
        print("3.exit\n")
        choice = ck_int()

        if (choice == 1):
            news = random_news()
            print(f"\n\nTitle: {news[0]}")
            print(f"\nMore Detail: {news[1]}")
            time.sleep(3)

        elif (choice == 2):
            categories = ['business','entertainment','general','health','science','sports','technology']
            print(f"\n{categories}")
            ch = ck_int()
            if ch not in range(len(categories)-1):
                print("\nplease choose from above opotion!!")
                continue
            cat = categories[ch]
            i = 0
            while True:
                news = popular_news(i,cat,"en",day)
                print(f"\n\nTitle: {news[0]}")
                print(f"\nMore Detail: {news[1]}")
                time.sleep(3)
                ans = input("\nwant to see more news on this(y/n): ")
                if ans.lower() == 'n':
                    break
                i = i + 1

        elif (choice == 3):
            ans = input("\n\n Confirm to exit (y/n): ")
            if ans.lower() == "y":
                break
            else:
                print("Please enter valid input!!")
            

