function getRandomColor() {
    var r = Math.floor(Math.random() * 256);
    var g = Math.floor(Math.random() * 256);
    var b = Math.floor(Math.random() * 256);
    return 'rgb(' + r + ',' + g + ',' + b + ')';
  }

var sparkles = document.querySelectorAll('.sparkle');

document.addEventListener('mousemove', function(event) {
    // Mueve cada brillo a la posición del cursor
    sparkles.forEach(function(sparkle, index) {
      setTimeout(function() {
        sparkle.style.left = event.pageX + 'px';
        sparkle.style.top = event.pageY + 'px';
        
        // Asigna un color aleatorio
        sparkle.style.backgroundColor = getRandomColor();
        
        // Hace que el brillo aparezca y luego desaparezca
        sparkle.style.opacity = 1;
        setTimeout(function() {
          sparkle.style.opacity = 0;
        }, 500);
      }, index * 50); // Retrasa cada brillo para crear el efecto de rastro
    });
  });
  