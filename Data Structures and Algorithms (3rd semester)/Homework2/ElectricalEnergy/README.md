За тази домашна работа не е разрешено използването на std::sort и други вградени методи за сортиране

В града в който живеете има редица от N на брой сгради. Всяка сграда има определена височкина - H[i].

Вие разполагате с предавател, който може да изпрати сигнал до сграда по ваш избор. За да изпратите сигнал до определена сграда ви трябва различно количество електрическа енергия, базирано на броя по-високи сгради от нея по пътя на сигнала. По-точно за да изпратите сигнал до сграда с пореден номер i, ви трябва електрическа енергия E[i] = броят по-високи сгради между вашият предавател и въпрсоната сграда.

Сега ви интересува колко общо електрическа енергия би ви трябвала, за да изпратите сигнал до всяка от N-те сгради в редицата. Намерете нужната енергия, ако знаете че предавателят ви се намира от лявата страна на редицата от сгради.image

Input Format

На първият ред на входа се въвежда числото N - брой на сградите в редицата.

Следват N числа H[0], ..., H[N - 1] - височините на сградите.

Constraints

0 <= N <= 100 000;

0 <= H[i] <= 100 000;

Output Format

Изведете 1 число - необходимата електрическа енергия, за да изпратите сигнал до всяка сграда.

Sample Input 0

5
6 4 3 5 7
Sample Output 0

4