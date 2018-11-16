const GAME_RULE = 
	{
		param  : {
			startAt:1,
			max: 20,
			answerSeperator : '\n'
		},
		fizz : {
			number : 3,
			ifTrue : 'fizz',
			ifFalse: ''
		},
		buzz : {
			number : 5,
			ifTrue : 'buzz',
			ifFalse: ''
		}
	}

const isDivisible 	= ( n, rule )	=> ( n % rule.number === 0 ? rule.ifTrue : rule.ifFalse );
const capitalize	= ( s )	=> (s.charAt(0).toUpperCase()+s.slice(1) );
const formatAnswer	= ( n, answer, settings )	=> ( capitalize(answer) || n )  + GAME_RULE.param.answerSeperator;

function playFizzBuzz ( number ) {
			
	let answer = 
			isDivisible( number, GAME_RULE.fizz ) +
			isDivisible( number, GAME_RULE.buzz )
			
	answer = formatAnswer( number, answer);
					
	if ( number < GAME_RULE.param.max )
		return answer + playFizzBuzz ( ++number);
	
	return answer;
}


let gameResults = playFizzBuzz(GAME_RULE.param.startAt);
console.log(gameResults);
