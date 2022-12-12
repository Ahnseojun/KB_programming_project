use skyscanner;

create table book(
id varchar(255) not null,
ticketnum varchar(255) not null,
name varchar(255) not null,
출발공항 varchar(255) not null,
출발날짜 varchar(255) not null,
출발시간 varchar(255) not null,
도착공항 varchar(255) not null,
도착시간 varchar(255) not null,
운항편명 varchar(255) not null,
항공사  varchar(255) not null);

create table member(
id varchar(255) primary key,
pw varchar(255) not null,
name varchar(255) not null,
gender varchar(255) not null,
age int not null);

create table airport2 (
ticketnum int auto_increment primary key,
도착공항 varchar(255),
도착시간 time,
시작일자 date,
운항요일 varchar(255),
운항편명 varchar(255),
종료일자 date,
출발공항 varchar(100),
출발시간 time,
항공사 varchar(100)
);

select * from airport2;
select * from member;
select * from book;


use skyscanner;

create table d3data (
month varchar(100),
count varchar(1000)
);



select * from d3data;

insert into d3data values ("1월 국민", 	110876);
insert into d3data values ("1월 외국인", 	59749);

insert into d3data values ("2월 국민", 	81003);
insert into d3data values ("2월 외국인", 	47935);

insert into d3data values ("3월 국민", 	107717);
insert into d3data values ("3월 외국인", 	60380);

insert into d3data values ("4월 국민", 	177367);
insert into d3data values ("4월 외국인", 	84052);

insert into d3data values ("5월 국민", 	274621);
insert into d3data values ("5월 외국인", 	123846);

insert into d3data values ("6월 국민", 	370522);
insert into d3data values ("6월 외국인", 	174379);

insert into d3data values ("7월 국민", 	618473);
insert into d3data values ("7월 외국인", 	229181);

insert into d3data values ("8월 국민", 	641429);
insert into d3data values ("8월 외국인", 	229437);

insert into d3data values ("9월 국민", 	565682);
insert into d3data values ("9월 외국인", 	255164);