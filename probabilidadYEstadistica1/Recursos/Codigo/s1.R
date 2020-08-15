evaluarNumero <- function(x=0) {
  if (is.nan(x)) {
    message("x is missing")
  } else if (is.infinite(x)) {
    message("x in infinite")
  } else if (x > 0){
    message("x is possitve")
  }else if (x < 0){
    message("x is negative")
  } else {
    message("x is zero")
  }
}