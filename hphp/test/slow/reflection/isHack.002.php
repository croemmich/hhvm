<?hh

class A {
  public function d() {}
}

class B extends ReflectionClass {}

function c() {}

$a = new ReflectionClass('A');
$b = new ReflectionClass('B');
$c = new ReflectionFunction('c');
$d = $a->getMethod('d');

$rc = new ReflectionClass('ReflectionClass');

var_dump($a->isHack());
var_dump($b->isHack());
var_dump($c->isHack());
var_dump($d->isHack());
var_dump($rc->isHack());
