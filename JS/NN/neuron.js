const train = [
    [0.0, 0.0],
    [1.0, 2.0],
    [2.0, 4.0],
    [3.0, 6.0],
    [4.0, 8.0]
];



// y = x*w;

w = Math.random()*10;

for(i = 0; i < train.length; i++){
    x = train[i][0];
    y = x*w;
    console.log(`actual: ${y}, expected: ${(train[i][0])}`)
}



console.log(train[4][1])
