from django.shortcuts import render

# data to send using context 
meals = {
    'meals' : [
        {
            "strMeal": "BeaverTails",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/ryppsv1511815505.jpg",
            "idMeal": 1,
            "strYoutube": "https://www.youtube.com/embed/jhryZ6ChLqY?si=et-ScWAU4hxUv_U-",
        },
        {
            "strMeal": "Breakfast Potatoes",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/1550441882.jpg",
            "idMeal": 2,
            "strYoutube": "https://www.youtube.com/embed/jhryZ6ChLqY?si=et-ScWAU4hxUv_U-",
        },
        {
            "strMeal": "Canadian Butter Tarts",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/wpputp1511812960.jpg",
            "idMeal": 3,
            "strYoutube": "https://www.youtube.com/embed/jhryZ6ChLqY?si=et-ScWAU4hxUv_U-",
        },
        {
            "strMeal": "Montreal Smoked Meat",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/uttupv1511815050.jpg",
            "idMeal": 4,
            "strYoutube": "https://www.youtube.com/embed/jhryZ6ChLqY?si=et-ScWAU4hxUv_U-",
        },
        {
            "strMeal": "Nanaimo Bars",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/vwuprt1511813703.jpg",
            "idMeal": 5,
            "strYoutube": "https://www.youtube.com/embed/jhryZ6ChLqY?si=et-ScWAU4hxUv_U-",
        },
        {
            "strMeal": "Pate Chinois",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/yyrrxr1511816289.jpg",
            "idMeal": 6,
            "strYoutube": "https://www.youtube.com/embed/jhryZ6ChLqY?si=et-ScWAU4hxUv_U-",
        },
        {
            "strMeal": "Pouding chomeur",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/yqqqwu1511816912.jpg",
            "idMeal": 7,
            "strYoutube": "https://www.youtube.com/embed/jhryZ6ChLqY?si=et-ScWAU4hxUv_U-",
        },
        {
            "strMeal": "Poutine",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/uuyrrx1487327597.jpg",
            "idMeal": 8,
            "strYoutube": "https://www.youtube.com/embed/jhryZ6ChLqY?si=et-ScWAU4hxUv_U-",
        },
        {
            "strMeal": "Rappie Pie",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/ruwpww1511817242.jpg",
            "idMeal": 9,
            "strYoutube": "https://www.youtube.com/embed/jhryZ6ChLqY?si=et-ScWAU4hxUv_U-",
        },
        {
            "strMeal": "Split Pea Soup",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/xxtsvx1511814083.jpg",
            "idMeal": 10,
            "strYoutube": "https://www.youtube.com/embed/jhryZ6ChLqY?si=et-ScWAU4hxUv_U-",
        }
    ]
}

# Create your views here.
def index(request):
    return render(request, 'meals/index.html',meals)

def details(request,meal_id):
    for meal in meals["meals"]:
        
        if meal['idMeal'] == meal_id:
            single_meal = meal
    return render(request, 'meals/details.html',{'single_meal': single_meal})