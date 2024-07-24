

function getLength(str) {
    console.log("Original String:", str);
    console.log("Length:", str.length);
  }
  getLength("Radha Krishna");
  
  // indexOf
  function findIndexOf(str, target) {
    console.log("Original String:", str);
    console.log("Index:", str.indexOf(target));
  }
  findIndexOf("Radhe Krishna", "Krishna");
  
  // lastIndexOf
  function findLastIndexOf(str, target) {
    console.log("Original String:", str);
    console.log("Index:", str.lastIndexOf(target));
  }
  findLastIndexOf("Radhe  Radhe", "Radhe");
  
  