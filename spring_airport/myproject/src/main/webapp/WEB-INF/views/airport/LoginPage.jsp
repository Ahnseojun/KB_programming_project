<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>

<script
	src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/js/bootstrap.bundle.min.js"
	integrity="sha384-gtEjrD/SeCtmISkJkNUaaKMoLD0//ElJ19smozuHV6z3Iehds+3Ulb9Bn9Plx0x4"
	crossorigin="anonymous"></script>
<link rel="stylesheet"
	href="//code.jquery.com/ui/1.8.18/themes/base/jquery-ui.css" />
<script src="//ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js"></script>
<script src="//code.jquery.com/ui/1.8.18/jquery-ui.min.js"></script>


<meta charset="UTF-8">
<title>Insert title here</title>


<style>
body {
	height: 100%;
}

h1 {
	text-decoration: none;
	text-align: center;
}

form {
	text-align: center;
}

.hasDatepicker {
	height: 50px;
}

.ui-datepicker-trigger {
	height: 52px;
}

.btn {
	heihgt: 50px;
}

nav {
	margin-left: auto;
	top: 0;
	right: 0;
	padding: 20px;
	display: flex;
	float: right;
	width: 100%;
	height: 100px;
}

.navbar {
	background-color: #000000;
	margin-bottom: 70px;
}
</style>


</head>
<body>

	<!--  navbar -->
	<nav class="navbar navbar-dark" float=right;>
		<div class="container-fluid">
			<a href="MainPage" class="navbar-brand"><h2
					style="font-weight: 800;">티켓 컴바인</h2></a>
		</div>
	</nav>

	<link
		href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/css/bootstrap.min.css"
		rel="stylesheet"
		integrity="sha384-+0n0xVW2eSR5OomGNYDnhzAbDsOXxcvSN1TPprVMTNDbiYZCxYbOOl7+AMvyTG2x"
		crossorigin="anonymous">

	<h1>Login Page</h1>
	<p>
	<form action="Login" method="post">
		ID : <input type="text" placeHolder="id입력" name="id" /> <br> <br>
		PW : <input type="password" placeHolder="password 입력" name="pw" /> <br> <br>


		<input type="submit" value="로그인" />
	</form>
	</p>

</body>
</html>