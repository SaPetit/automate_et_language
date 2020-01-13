
(member 7 '(A B 7 9 N))

 (member 2 '(1 2 3))
 
  (member 'B '(A  C))
  
  
  
  
(define (intersection L M)

#corp de la fonction
(cond
((null? L) '())
((null? M) '())
((cons 
  	(first 
     	(member
         	(first L)
         	M) 
     )
  	 (intersection (rest L) M)
  )   
) 
)
)


(intersection '(A B K) '( A K B))


(define (intersection L M)

#corp de la fonction
(cond
((null? L) '())
((null? M) '())

((cons 
  	(first 
     	(member
         	(first L)
         	M) 
     )
  	 (intersection (rest L) M)
  )   
) 
)
)


(intersection '(A B K) '( A K B))



//////////////////////////////////////////////////


(define (intersection L M)

#corp de la fonction
(cond
((null? L) '())
((null? M) '())
((null? (member (first L) M)) (intersection (rest L) M)) #l'element n'est pas dans l'intersection
((null? (member (first L) (rest L))) #l'element est dans inter et ne reaparait pas dans L
(cons (first L) (intersection (rest L) M)   
))
((intersection (rest L) M))
))
  
 

(intersection '(A B K P I I L L) '( A L I I I I B O H L))

(define (inclu L M)
(if ( = (intersection L M) L) true nil)
  ) 



(inclu '(A B ) '( A L I I I I B O H L))

(= 1 2)


(define (incl L M)
(cond
 ((= L '()) true)
((null? (member (first L) M)) nil)
((incl (rest L) M))
 ))

(incl '(A B I J) '( A L I I I I B O H L))





(define (intersectionSD L M)

#corp de la fonction
(cond
((null? L) '())
((null? M) '())
((null? (member (first L) M)) (intersectionSD (rest L) M)) #l'element n'est pas dans l'intersection
((cons (first L) (intersectionSD (rest L) M)))
))

(intersectionSD '(A B I J) '( A L I I I I B O H L))