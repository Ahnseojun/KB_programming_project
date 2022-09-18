--drop table ticket;
create table ticket(
ticket_num varchar2(30) primary key,
flight_num varchar2(30),
name varchar2(30),
gate number,
seat varchar2(30),
boarding number,
depart_nation varchar2(30),
arrive_nation varchar2(30));

--drop table flight;
create table flight(
flight_num varchar2(30) primary key,
dated date,
gate number,
departure_time number,
depart_nation varchar2(30),
arrive_nation varchar2(30));

--drop table passenger;
create table passenger(
passport varchar2(30) primary key,
name varchar2(30),
birth number,
phone varchar2(30));

--drop table depart_nation;
create table depart_nation(
code varchar2(30) primary key,
name varchar2(30));


--drop table arrive_nation;
create table arrive_nation(
code varchar2(30) primary key,
name varchar2(30));


--drop table airport;
--create table airport(
--code varchar2(30) primary key,
--name varchar2(30));

alter table ticket add constraint fk_name foreign key(name) references passenger(passport); 
alter table ticket add constraint fk_depnation foreign key(depart_nation) references depart_nation(code);
alter table ticket add constraint fk_arrivenation foreign key(arrive_nation) references arrive_nation(code);
alter table ticket add constraint fk_flight_num foreign key(flight_num) references flight(flight_num);

alter table flight add constraint fk_departure foreign key(depart_nation) references depart_nation(code);
alter table flight add constraint fk_arrived foreign key(arrive_nation) references arrive_nation(code);

alter session set nls_date_format='YYYY/MM/DD HH24:MI'; -- ex) 2022-09-01 01:10' 


--sequence 생성
create sequence ticket_seq;
