(define (accumulate a b null-value combinator f next)
  (if(> a b)
     null-value
     (combinator (f a) (accumulate (next a) b null-value combinator f next))))
  
(define next
  (lambda (x)
    (+ x 1)))
(define square
  (lambda (x)
    (* x x)))