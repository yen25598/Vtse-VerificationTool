(declare-fun IN_square_1_false_unreach_call_-1 () Real)
(declare-fun IN_square_1_false_unreach_call_0 () Real)
(declare-fun x_square_1_false_unreach_call_-1 () Real)
(declare-fun x_square_1_false_unreach_call_0 () Real)
(declare-fun result_square_1_false_unreach_call_-1 () Real)
(declare-fun result_square_1_false_unreach_call_0 () Real)
(declare-fun return_square_1_false_unreach_call_-1 () Real)
(declare-fun return_square_1_false_unreach_call_0 () Real)
(assert (and (and (= x_square_1_false_unreach_call_0 IN_square_1_false_unreach_call_0) (= result_square_1_false_unreach_call_0 (- (+ (- (+ 1.0 (* 0.5 x_square_1_false_unreach_call_0)) (* (* 0.125 x_square_1_false_unreach_call_0) x_square_1_false_unreach_call_0)) (* (* (* 0.0625 x_square_1_false_unreach_call_0) x_square_1_false_unreach_call_0) x_square_1_false_unreach_call_0)) (* (* (* (* 0.0390625 x_square_1_false_unreach_call_0) x_square_1_false_unreach_call_0) x_square_1_false_unreach_call_0) x_square_1_false_unreach_call_0)))) (= return_square_1_false_unreach_call_0 result_square_1_false_unreach_call_0)))
(assert (and (>= IN_square_1_false_unreach_call_0 0.0) (< IN_square_1_false_unreach_call_0 1.0)))
(assert (not (and (>= return_square_1_false_unreach_call_0 0) (< return_square_1_false_unreach_call_0 1.39))))
(check-sat)
(get-model)