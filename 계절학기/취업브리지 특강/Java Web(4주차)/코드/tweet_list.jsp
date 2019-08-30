<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>

<!DOCTYPE html>
<html>
<head>
<%@ include file="inc_header.html"%>
<title>Tweet List</title>
</head>
<body>
	<div class="container shadow mx-auto mt-5 p-5 w-60">
		<h3>My Simple Twitter!!</h3>
		<hr>
		<form method="post" action="/javaweb/twitter">
			<input type="hidden" name="action" value="tweet">
			<div class="input-group w-75">
				<button type="button" class="btn btn-outline-success">@${user}</button>&nbsp;
				<input class="form-control" type="text" name="msg">
				<input class="btn btn-warning" type="submit" value="Tweet">&nbsp;
				<a class="btn btn-secondary" href="/javaweb/twitter">Sign out</a>
			</div>
		</form>
		<hr>
		<ul class="list-group">
			<c:forEach var="msg" items="${msgs}">  <!-- JSTL -->
				<li class="list-group-item list-group-item-action">${msg}</li>
			</c:forEach>
		</ul>
	</div>
</body>
</html>