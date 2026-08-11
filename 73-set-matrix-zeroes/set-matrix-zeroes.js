/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(arr) {
    let n = arr.length;
    let m = arr[0].length
    let row = new Array(n).fill(0)
    let col = new Array(m).fill(0)

    for(let i = 0; i < n; i++){
        for(let j = 0; j < m; j++){
            if(arr[i][j] === 0){
              row[i] = 1;
              col[j] = 1;   
            }
        }
    }
     for(let i = 0; i < n; i++){
        for(let j = 0; j < m; j++){
            if(row[i] == 1 || col[j] == 1){
              arr[i][j] = 0;
              
            }
        }
    }

    
};