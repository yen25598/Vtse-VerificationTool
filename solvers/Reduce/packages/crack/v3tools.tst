%*******************************************************************%
%                                                                   %
%                      V 3 T O O L S . T S T                        %
%                      ---------------------                        %
%  v3tools.tst contains test examples for the program v3tools.red.  %
%  To run this test read into the session the files crack.red and   %
%  v3tools.red or load their compiled version before.               %
%                                                                   %
%  Author: Thomas Wolf                                              %
%  Date:   15. June 2004                                            %
%                                                                   %
%  Details about the syntax of v3tools are given in v3tools.tex.    %
%                                                                   %
%                                                                   %
%*******************************************************************%

COMMENT -------------------------------------------------------------
The package v3tools involves 3 global variables:
V_     : the list of vectors involved
GBASE_ : a Groebner basis of the identities satisfied by the vectors V_
HEADS_ : the list of leading terms in GBASE_.

The computations to be done in this test file involve only vectors
A,B,U,V. For these the global variables V_, GBASE_, HEADS_ are already
assigned. If other vectors shall be used, call the procedure VINIT
first with the list of vectors to be used, e.g. VINIT({A,B,U,V})  .

The following are vector expessions which we will use in the tests below.
Identifiers starting with !& are parameters, all others are vector products.;

lisp(print_:=nil)$           % to suppress printing the computation

kap:=-aa$
hamh:=ab*uu-1/2*au*bu+buv$   
hami:=!&p1*abu$
fi6:=bu**2*((bu*aa-ab*au)**2*uu+2*(bu*aa-ab*au)*(bu*auv-buv*au)
              -vv*uba**2-(bu*av-bv*au)**2-uu*vv*ab**2-kap*uu*vv*bb)$

fi5:=4*!&p1*bu*((ab*uu*(aa*bu-au*ab)*abu+vv*(ab*bu-au*bb)*abu)
                +(au*bv-av*bu)*(bv*abu-bu*abv)
                +bu*uv*(ab*(aa*bu-au*ab)-kap*(ab*bu-au*bb))
                -ab*(ab*bu-au*bb)*(2*au*uv-av*uu)
                +uu*(aa*bu-au*ab)*(bb*av-2*ab*bv))$

fi4:=!&p1**2*(4*((ab*bu-au*bb)*(av*bu+2*ab*uv)-bv*bu*(aa*bu-au*ab)
              -2*ab*uu*(ab*bv-av*bb))*abu
              +4*bu*(bu*(aa*bu-au*ab)-au*(ab*bu-au*bb))*abv
              -8*(ab*bu-au*bb)*(ab*bv-av*bb)*uv
              +(4*ab**2*au*(ab*bu-au*bb)-4*bu*(2*ab**2-aa*bb)*
                (aa*bu-ab*au)
                +4*(ab*bv-av*bb)**2)*uu-4*ab**2*(ab**2-aa*bb)*uu**2)$

fi3:=8*!&p1**3*(aa*bb-ab**2)*(ab*uu*abu+(bb*av-bv*ab)*uu+
                              (ab*bu-au*bb)*uv)$

fi2:=-4*!&p1**4*(aa*bb-ab**2)*(ab**2*uu-bb*vv)$

COMMENT -------------------------------------------------------------
In order to ensure that the same order of vector names is used for the same products
one can convert all to the correct name using the procedure e2s. The following
should produce all zeros:  ;

write"0 = ",e2s (abu - uab);
write"0 = ",e2s (abu + aub);
write"0 = ",e2s (ba*uu-1/2*ua*ub+vbu - hamh);

COMMENT -------------------------------------------------------------
Just in case the data above which have not been generated by the program have
vectors ordered not lexicographically we re-write them again: ;

hamh:=e2s hamh$   hami:=e2s hami$
fi6:=e2s fi6$   fi5:=e2s fi5$   fi4:=e2s fi4$   fi3:=e2s fi3$   fi2:=e2s fi2$ 

COMMENT -------------------------------------------------------------
To convert a vector expression into component form we can use v2c;

write"Conversion into component form: 0 = ",
    v2c(hamh)  
    - (  a1*b1*u1**2 + 2*a1*b1*u2**2 + 2*a1*b1*u3**2 - a1*b2*u1*u2 - a1*b3*u1*u3
       - a2*b1*u1*u2 + 2*a2*b2*u1**2 + a2*b2*u2**2 + 2*a2*b2*u3**2 - a2*b3*u2*u3
       - a3*b1*u1*u3 - a3*b2*u2*u3 + 2*a3*b3*u1**2 + 2*a3*b3*u2**2 + a3*b3*u3**2
       + 2*b1*u2*v3 - 2*b1*u3*v2 - 2*b2*u1*v3 + 2*b2*u3*v1 + 2*b3*u1*v2 
       - 2*b3*u2*v1)/2;

COMMENT -------------------------------------------------------------
To convert a component form vector expression into standard vector form 
we can use c2s. $

write"Conversion into vector form: 0 = ",
   c2s(  a1*b1*u1**2 + 2*a1*b1*u2**2 + 2*a1*b1*u3**2 - a1*b2*u1*u2 - a1*b3*u1*u3
       - a2*b1*u1*u2 + 2*a2*b2*u1**2 + a2*b2*u2**2 + 2*a2*b2*u3**2 - a2*b3*u2*u3
       - a3*b1*u1*u3 - a3*b2*u2*u3 + 2*a3*b3*u1**2 + 2*a3*b3*u2**2 + a3*b3*u3**2
       + 2*b1*u2*v3 - 2*b1*u3*v2 - 2*b2*u1*v3 + 2*b2*u3*v1 + 2*b3*u1*v2 
       - 2*b3*u2*v1)/2 
     - hamh;

COMMENT -------------------------------------------------------------
The procedure s2e introduces n-products, like abcd for (a,bx(cxd)),
in order to compress an expression. (For notation see v3tools.tex). 
We call this extended vector form. The following computation can take 
a few minutes. It also needs some memory (10MB) ;

s2e(ab*abu*uu*(aa*bb - ab**2))$

COMMENT -------------------------------------------------------------
To test the correctness the following should give zero;

write"Conversion into extended vector form: 0 = ",ws - abauuubbaab;

COMMENT -------------------------------------------------------------
To convert a extended vector form into standard vector form is an easier
task and done by procedure e2s as well.  ;

write"Conversion into standard vector form: 0 = ",e2s(abauuubbaab) 
                                                  - ab*abu*uu*(aa*bb - ab**2)$

COMMENT -------------------------------------------------------------
Another quick (and absolute safe) test whether two vector expressions
are equal is to convert them into component form;

write"Conversion into component form: 0 = ",v2c(abauuubbaab) - 
                                            v2c(ab*abu*uu*(aa*bb - ab**2))$

COMMENT -------------------------------------------------------------
There are a number of identities between vectors. The function s2s
generates them and uses them to shorten a given vector expression. ;

s2s(aa*bb*vv - aa*bv**2 - ab**2*vv + 2*ab*av*bv)$

COMMENT -------------------------------------------------------------
The new vector expression found should be shorter. To check correctness
we do: ;

write"Shortening of standard vector form: 0 = ",ws - (abv**2 + av**2*bb);

COMMENT -------------------------------------------------------------
The procedure poisson_c computes the poisson bracket of two expressions
in component form. We need the Poisson structure matrix which we will
assign once as STRUC_CONS and then use repeatedly in a number of examples.
Any assignment of identifiers in the structure matrix has to be done in
component form before the first call of poisson_c (or poisson_v, see below). 
The default structure constants used in v3tools.tst are: ;

kap:=-a1**2-a2**2-a3**2$

struc_cons:={{u1,u2, u3}, {u2,u3, u1}, {u3,u1, u2},
             {u1,v2, v3}, {u2,v3, v1}, {u3,v1, v2},
             {u1,v3,-v2}, {u2,v1,-v3}, {u3,v2,-v1},
             {v1,v2, kap*u3}, {v2,v3, kap*u1}, {v3,v1, kap*u2}}$

COMMENT : Structure matrices for other Lie-Poisson brackets are given
in v3tools.red. The following test shows that FI6 is a 6th degree
first integral of the Hamiltonian HAMh. (It needs 40MB memory!);

on time$off time$
write"Poisson bracket in components: 0 = ",
     poisson_c(v2c(hamh),v2c(fi6),struc_cons);

COMMENT -------------------------------------------------------------
One can compute the Poisson bracket also directy in standard vector
form.  When doing this the first time Poisson brackets for scalar
products and triple products have to be worked out automatically which
takes a bit more time and which takes the structure constants in
component form (and therefore also anything that turns up in the
structur constants, like kap, in component form). 


+++++++++++++++++++++++
The procedure
poisson_v needs a list of vectors as third argument. 
The third of the following tests shows that FI6+FI5+FI4+FI3+FI2
is a 6th degree (inhomogeneous) first integral of the (inhomogeneous)
Hamiltonian HAMh+HAMi ! $

on time$off time$
write"Poisson bracket in vector form: 0 = ",poisson_v(hamh,fi6,struc_cons);
on time$off time$
write"Poisson bracket in vector form: 0 = ",poisson_v(hamh,fi6,struc_cons);
on time$off time$
write"Poisson bracket in vector form: 0 = ",
poisson_v(hamh+hami,fi6+fi5+fi4+fi3+fi2,struc_cons);
on time$off time$

COMMENT -------------------------------------------------------------
The following procedure creates for a given list of vectors a list of
all their scalar and triple products. $

write"Generation of vector products: ",
      if (genpro {a,b,u,v}) =
         {aa,ab,au,av,bb,bu,bv,uu,uv,vv,abu,abv,auv,buv} then "ok." 
                                                         else "*** wrong! ***"$

COMMENT -------------------------------------------------------------
Procedure genpro_wg generates a list of all scalar and triple products 
with weight lists for a given vector weight list. $

write"Generation of vector products with weights: ",

     if genpro_wg {{a,1,0,0},{b,0,1,0},{u,0,0,1},{v,1,0,1}} =
        {{aa,2,0,0}, {ab,1,1,0}, {au,1,0,1}, {av,2,0,1}, {bb,0,2,0},
         {bu,0,1,1}, {bv,1,1,1}, {uu,0,0,2}, {uv,1,0,2}, {vv,2,0,2},
         {abu,1,1,1},{abv,2,1,1},{auv,2,0,2},{buv,1,1,2}} then "ok." 
                                                          else "*** wrong! ***"$

COMMENT ------------------------------------------------------------- 
The following is a longer computation. To show intermediate results simply
replace the dollar sign by semicolon signs. The purpose will be to find
a first integral FI for the Hamiltonian HAMh.
At first we generate an ansatz using the procedure gfi to generate a 4th degree
expression in vectors u,v with appropriate homogeneity which then is multiplied 
with bu**2 as we want the first integral to have this factor. FL will be the
list of unknown coefficients. $

hh:=
gfi({4,2,4},                                    % total weights
    {{a,1,0,0},{b,0,1,0},{u,0,0,1},{v,1,0,1} }, % list of vectors + weights
    {},                                         % no restrictions for the
                                                % terms to be generated
    heads_                                      % apart from avoiding heads_
   )$
fi:=bu**2*(first hh)$
fl:=rest hh$

COMMENT ------------------------------------------------------------- 
Now we compute the Poisson bracket and split it wrt to all occuring
scalar and triple products to generate a list of conditions for the
unknown coefficients which is solved using solve. $

hh:={poisson_v(hamh,fi,struc_cons)}$

for each g in genpro {a,b,u,v} do 
hh:=for each h in hh join coeff(h,g)$

hh:=solve(hh,fl)$

COMMENT ------------------------------------------------------------- 
The solution for the coefficients is substituted into the ansatz for FI
and we check that it is the same as FI6 up to vector identities which
we get rid of by transforming into component form. 
The first of the two tests is sufficient to show that FI is a first
integral but to show that it is not any integral but the 6th degree
integral FI6 one can use preduce or v2c. The higher the degree the 
slower v2c becomes compared to preduce. To use s2s in order to shorten
an expression and find it to be zero is not reliable due to the non-
reliability of shortening of non-linear expressions in CRACK. $

fi:=sub(first hh,fi)$
off nat$

write"Check of a computed first integral: 0 = ",poisson_v(hamh,fi,struc_cons)$

COMMENT ------------------------------------------------------------- 
Test that FI ~ FI6 can be done by
factorize(preduce(FI,gbase_)-preduce(FI6,gbase_))
to find the value of arbcomplex(1). Assuming arbcomplex(1)=2 we check: $

write"Equivalence check with FI6: 0 = ",
      preduce(sub(arbcomplex(1)=-1,fi),gbase_)
     -preduce(fi6                     ,gbase_)$

COMMENT ------------------------------------------------------------- 
Now the same without assuming bu**2 to be a factor of the first
integral FI. The following example demonstrates the use of the
procedure fnc_dep which can determine any functional dependence of
homogeneous vectorial expressions even modulo vector identities. The
call of gfi() generates an ansatz for the first integral.  From this
ansatz terms had been dropped in gfi() such that the resulting
polynomial does not contain a functionally depending on
AA,AB,BB,UV,-AA*UU+VV,HAMh. $

hh:=
gfi({4,4,6},                                   % total weights
    {{a,1,0,0},{b,0,1,0},{u,0,0,1},{v,1,0,1}}, % list of vectors + weights
    {aa,ab,bb,        %  all constant
     uv,-aa*uu+vv,    %  Casimir 1 and 2
     hamh             %  Hamiltonian
    },
    heads_
   )$

fi:=first hh$
fl:=rest hh$

hh:={poisson_v(hamh,fi,struc_cons)}$

for each g in genpro {a,b,u,v} do 
hh:=for each h in hh join coeff(h,g)$

hh:=solve(hh,fl)$
fi:=sub(first hh,fi)$

write"Check of a computed first integral: 0 = ",
poisson_v(hamh,fi,struc_cons);

if fnc_dep(fi,{aa,ab,bb,uv,uu*aa-vv,hamh,fi6},
           {{a,1,0,0},{b,0,1,0},{u,0,0,1},{v,1,0,1}})
then write"Known first integral."
else write"New first integral!"$

clear g,h,hh,fi,fl$

lisp(depl!*:=nil)$ % to delete all dependencies of functions on variables

end$