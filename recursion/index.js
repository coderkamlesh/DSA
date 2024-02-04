// function fun3(days) {
//   console.log(`${days} days left for birthday`);
//   fun2(days - 1);
// }

// function fun2(days) {
//   console.log(`${days} days left for birthday`);
//   fun1(days - 1);
// }
// function fun1(days) {
//   console.log(`${days} days left for birthday`);
// }

// fun3(3);

function fun3(days) {
  if (days === 0) {
    console.log("Happy birthday");
    return;
  }
  console.log(`${days} days left for birthday`);
  fun3(days - 1);
}

fun3(3);
