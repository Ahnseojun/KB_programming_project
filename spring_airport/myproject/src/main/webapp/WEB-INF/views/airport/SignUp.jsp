<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@ taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>

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


	<c:if test="${duple }">
		<h1>ID 중복입니다^^</h1>
	</c:if>


	<form action="/SignUp" method="post">
		아이디 : <input type="text" name="id"> <br /> 비밀번호 : <input
			type="password" name="pw"><br /> 이름 : <input type="text"
			name="name"><br /> 성별 : <input type="radio" name="gender"
			value="man">남자 <input type="radio" name="gender"
			value="woman">여자<br /> 나이 : <input type="text" name="age"><br />
		<br>
		<input type="submit" value="회원가입">
		<button onclick="location.href='checkDuplicate'">중복확인</button>
	</form>
</body>
</html>