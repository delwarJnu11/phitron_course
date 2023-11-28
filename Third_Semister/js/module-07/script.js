const laodData = () => {
  const inputText = document.getElementById("input-field").value;
  fetch(`https://www.themealdb.com/api/json/v1/1/search.php?f=${inputText}`)
    .then((res) => res.json())
    .then((data) => display(data.meals))
    .catch((err) => console.log(err));
};

const display = (data) => {
  const totalMeals = document.getElementById("total-meals");
  totalMeals.innerText = `Total meals: ${data.length}`;

  const row = document.getElementById("row");

  data?.forEach((meal) => {
    const col = document.createElement("div");
    col.classList.add("col-md-4");
    col.innerHTML = `
            <div class="card" style="width: 18rem;">
              <img src=${
                meal.strMealThumb
              } class="card-img-top" alt="meal photo">
              <div class="card-body">
                <h5 class="card-title">${meal.strMeal}</h5>
                <p class="card-text">${meal.strInstructions?.slice(0, 255)}</p>
                <button>Details</button>
              </div>
            </div>
    `;

    row.appendChild(col);
  });
};
