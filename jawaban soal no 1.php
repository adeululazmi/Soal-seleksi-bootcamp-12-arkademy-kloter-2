<?php

$datasaya = [
		
		"name" => "Ade ulul azmi",
		"age" => 21,
		"address" => "Dusun Tegalharja RT 003 RW 006, Kec.Warungpring, Kab.Pemalang, Prov.Jawa Tengah",
		"hobbies" => [
			"sport",
			"programing",
			"traveling"
		],
		"is_married" => False,
		"list_scholl" => [
			
			"SDN_08_Warungpring" => [
				"year_in" => 2005,
				"year_out" => 2012
			],
			
			"SMPN_02_Warungpring" => [
				"year_in" => 2012,
				"year_out" => 2015
			],

			"SMK_Islam_Randudongkal" => [
				"year_in" => 2015,
				"year_out" => 2018
			],
			],

			"skills" => [
			"skill_name" => [
				"programing",
				"network"
			],
			"level" => "beginner",

			"interest_in_coding" => [
				"python",
				"React native",
				"React JS",
				"Express JS",
				"Node JS",
				"python",
				"android studio",
				"c++"
			],
		
		]
];

$data = json_encode($datasaya);
echo $data;

?>