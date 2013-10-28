(define (fizzbuzz n)
  (cond ((and (= (remainder n 3) 0) (= (remainder n 5) 0)) "fizzbuzz")
        ((= (remainder n 3) 0) "fizz")
        ((= (remainder n 5) 0) "buzz")
        (else n)))
(define (contains-digit? number digit)
  (if(zero? number)
     (if(zero? digit)
        #t
        #f)
     (if(= (remainder number 10) digit)
         #t
         (contains-digit? (quotient number 10) digit))))
(define (mis? n)
  (if(= n 0)
   #t
   (if(>= (remainder n 10) (remainder (quotient n 10) 10))
     (mis? (quotient n 10))
     #f)))