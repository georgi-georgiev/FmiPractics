;; count digits in number
(define (log10 n)
  (if (zero? n) 
      1 
      (+ (floor (/ (log n) (log 10))) 1)))

;;sum digits in number
(define (sumator n sum)
  (if(zero? n)
     sum
     (sumator (quotient n 10) (+ sum (remainder n 10)))))

;;degree of ten
(define (degree10 count extent)
  (if(zero? count)
     extent
     (degree10 (- count 1) (* extent 10))))

(define (balanced? n)
  (if(= (sumator (quotient n (degree10 (floor(/ (log10 n) 2)) 1)) 0) (sumator (remainder n (degree10 (ceiling (/ (log10 n) 2)) 1)) 0))
     #t
     #f))


(define (even-fibonacci-sum n)
  
  (if(or (= n 0) (= n 1) (= n 2) (= n 3)) 0)
  
  (define (fibonacci number cur last sum)
      (if (> number n)
         sum
         (fibonacci (+ number 1) (+ cur last) cur (+ sum (if (= (remainder cur 2) 0) cur 0)))))
  
  (fibonacci 4 2 1 0))

(define divides?
  (lambda (a b)
    (= (remainder a b) 0)))
 
(define (prime-helper x k)
  (if (= x k) #t
  (if (= (remainder x k) 0) #f
      (prime-helper x (+ k 1)))))

(define ( prime? x )
    (cond
      (( = x 1 ) #t)
      (( = x 2 ) #t)
      ( else (prime-helper x 2 ) )))

(define (sum-of-prime-divisors n)
  (define (sum-divisors number sum)
    (if (> number n)
        sum
        (sum-divisors (+ number 1) (if (and (divides? n number) (prime? number)) (+ sum number) sum))))
    (sum-divisors 2 0))

(define (asd n number) (and (divides? n number) (prime? number)))