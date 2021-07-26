function shuffle(array) { 
var currentIndex = array.length, randomIndex;

while (0 !== currentIndex) {
randomIndex = Math.floor(Math.random() * currentIndex); 
currentIndex--;
[array[currentIndex], array[randomIndex]] = [array[randomIndex], array[currentIndex]];
    } 

    return array; 
}

// For Example:
var arr = [2, 11, 37, 42]; shuffle(arr); console.log(arr);
