--depart_nation 추가
insert into depart_nation values('KR/ICH', '대한민국/인천');
insert into depart_nation values('KR/CJU', '대한민국/제주');
insert into depart_nation values('JP/HND', '일본/하네다');
insert into depart_nation values('JP/NRT', '일본/나리타');
insert into depart_nation values('US/JFK', '미국/뉴욕');
insert into depart_nation values('US/LAX', '미국/LA');
insert into depart_nation values('GB/LHR', '영국/런던');
insert into depart_nation values('TW/TPE', '대만/타오위안');
insert into depart_nation values('IT/FCO', '이탈리아/로마');
insert into depart_nation values('DE/HHH', '독일/프랑크푸르트');
insert into depart_nation values('CH/ZRH', '스위스/취리히');

--arrive_nation 추가
insert into arrive_nation values('KR/ICH', '대한민국/인천');
insert into arrive_nation values('KR/CJU', '대한민국/제주');
insert into arrive_nation values('JP/HND', '일본/하네다');
insert into arrive_nation values('JP/NRT', '일본/나리타');
insert into arrive_nation values('US/JFK', '미국/뉴욕');
insert into arrive_nation values('US/LAX', '미국/LA');
insert into arrive_nation values('GB/LHR', '영국/런던');
insert into arrive_nation values('TW/TPE', '대만/타오위안');
insert into arrive_nation values('IT/FCO', '이탈리아/로마');
insert into arrive_nation values('DE/HHH', '독일/프랑크푸르트');
insert into arrive_nation values('CH/ZRH', '스위스/취리히');

--passenger 占쌩곤옙
insert into passenger values('SJ960','안서준',960522,'010-9465-7709');
insert into passenger values('SJ777','이정석',951227,'010-1115-9999');
insert into passenger values('SH987','이승호',960522,'010-5156-9977');
insert into passenger values('MW305','김민우',960301,'010-1234-7895');
insert into passenger values('HM458','최효민',901005,'010-3214-9876');
insert into passenger values('JH667','배재현',890427,'010-4567-6543');
insert into passenger values('HW123','한현후',990516,'010-6543-7418');
insert into passenger values('MJ872','김민준',971027,'010-9009-8888');
insert into passenger values('TY446','장태연',951120,'010-4945-7236');
insert into passenger values('SZ996','송지원',960914,'010-2233-4411');
insert into passenger values('YY411','윤예일',910430,'010-7755-3369');
insert into passenger values('CH119','채상혁',971113,'010-5471-6664');
insert into passenger values('JY454','정용운',950909,'010-4521-1614');
insert into passenger values('GA777','곽지원',950904,'010-4451-6771');
insert into passenger values('MW123','최유석',950211,'010-4778-8774');
insert into passenger values('JH852','문지호',900101,'010-7891-1234');
insert into passenger values('PK557','박재성',890522,'010-5068-4741');
insert into passenger values('SY004','송용수',951115,'010-7412-6678');
insert into passenger values('KI112','김계영',951118,'010-3214-3369');
insert into passenger values('KL447','김경엽',951115,'010-7412-6678');
insert into passenger values('SG524','김성근',960116,'010-5242-4439');
insert into passenger values('SI119','어수일',951109,'010-2052-9645');
insert into passenger values('SM223','이상목',950203,'010-9509-2095');
insert into passenger values('HT605','안현태',950304,'010-5312-5239');
insert into passenger values('GM653','최규민',950907,'010-7521-1452');
insert into passenger values('YH732','최윤흠',991230,'010-2435-5626');
insert into passenger values('MY434','박민주',960427,'010-9543-2463');
insert into passenger values('SJ312','김수정',951217,'010-5622-1266');
insert into passenger values('BO650','김병오',880619,'010-8544-2135');
insert into passenger values('DH926','김도희',830925,'010-7161-1253');

--flight 추가

insert into flight values('KAL-001','2022-09-10',27,1445,'KR/ICN','JP/HND');
insert into flight values('KAL-002','2022-09-25',07,0715,'KR/ICN','JP/NRT');
insert into flight values('KAL-003','2022-09-17',41,2225,'KR/CJU','JP/NRT');
insert into flight values('KAL-004','2022-09-17',15,0830,'KR/ICN','US/LAX');
insert into flight values('OZ-001','2022-10-01',22,0600,'KR/ICN','US/JFK');
insert into flight values('OZ-002','2022-10-10',23,0530,'KR/ICN','GB/LHR');
insert into flight values('OZ-003','2022-09-30',26,0730,'KR/ICN','TW/TPE');
insert into flight values('OZ-004','2022-10-21',20,2030,'KR/ICN','IT/FCO');
insert into flight values('KAL-005','2022-11-09',31,1820,'KR/ICN','DE/HHH');
insert into flight values('OZ-005','222-11-10',24,2200,'KR/ICN','CH/ZRH');
insert into flight values('7C-001','2022-09-05',02,0900,'KR/ICN','KR/CJU');



--ticket 占쌩곤옙
--delete from ticket;
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-001','SJ960',27,'51D','2022-09-10 14:45','KR/ICN','JP/HND');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-001','SJ777',27,'51C','2022-09-10 14:45','KR/ICN','JP/HND');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-002','SH987',07,'15A','2022-09-25 07:15','KR/ICN','JP/NRT');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-002','MW305',07,'34C','2022-09-25 07:15','KR/ICN','JP/NRT');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-003','HM458',41,'01A','2022-09-17 22:25','KR/CJU','JP/NRT');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-003','JH667',41,'26D','2022-09-17 22:25','KR/CJU','JP/NRT');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-004','HW123',15,'22B','2022-09-17 08:30','KR/ICN','US/LAX');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-004','MJ872',15,'22A','2022-09-17 08:30','KR/ICN','US/LAX');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-004','TY446',15,'22C','2022-09-17 08:30','KR/ICN','US/LAX');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-004','SZ996',15,'22D','2022-09-17 08:30','KR/ICN','US/LAX');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-005','YY411',31,'02A','2022-11-09 08:20','KR/ICN','DE/HHH');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-005','CH119',31,'19D','2022-11-09 08:20','KR/ICN','DE/HHH');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'7C-001','JY454',02,'30A','2022-09-05 09:00','KR/ICN','KR/CJU');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'7C-001','MW123',02,'30B','2022-09-05 09:00','KR/ICN','KR/CJU');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'OZ-001','JH852',22,'18D','2022-10-01 06:00','KR/ICN','US/JFK');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'OZ-001','PK557',22,'05C','2022-10-01 06:00','KR/ICN','US/JFK');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'OZ-002','SY004',23,'11D','2022-10-10 05:30','KR/ICN','GB/LHR');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'OZ-002','KI112',23,'16A','2022-10-10 05:30','KR/ICN','GB/LHR');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'OZ-003','KL447',26,'20E','2022-09-30 07:30','KR/ICN','TW/TPE');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'OZ-003','SG524',26,'29A','2022-09-30 07:30','KR/ICN','TW/TPE');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'OZ-004','SI119',20,'11D','2022-10-21 20:30','KR/ICN','IT/FCO');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'OZ-004','SM223',20,'11C','2022-10-21 20:30','KR/ICN','IT/FCO');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'OZ-005','HT605',24,'46D','2022-11-10 22:00','KR/ICN','CH/ZRH');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'OZ-005','GM653',24,'32A','2022-11-10 22:00','KR/ICN','CH/ZRH');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-001','YH732',27,'15E','2022-09-10 14:45','KR/ICN','JP/HND');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-002','SJ312',07,'29D','2022-09-25 07:15','KR/ICN','JP/NRT');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-003','BO650',41,'41A','2022-09-17 22:25','KR/CJU','JP/NRT');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-004','DH926',15,'05A','2022-09-17 08:30','KR/ICN','US/LAX');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-005','MY434',31,'02D','2022-11-09 08:20','KR/ICN','DE/HHH');
insert into ticket values('ticket-'||lpad(ticket_cnt.nextval,3, 0),'KAL-005','GA777',31,'11D','2022-11-09 08:20','KR/ICN','DE/HHH');

select * from ticket;
--delete from ticket where ticket_num = 'ticket-0004';

--占시뤄옙占쏙옙 占쏙옙占쏙옙 占쏙옙占쏙옙 占쏙옙占쏙옙 占쏙옙회占싹댐옙 select 占쏙옙
select * from ticket;
-- 
commit;
--

-- view
--drop view ticket_all;
create view ticket_all as
select ticket.ticket_num as ?깙?듅?렪, flight_num ?빆怨듬쾲?샇, passenger.name as ?듅媛앸챸, 
passenger.passport ?뿬沅뚮쾲?샇, ticket.boarding as ?깙?듅?떆媛?, gate as "?깙?듅 寃뚯씠?듃", seat as 醫뚯꽍踰덊샇, depart_nation.name as 異쒕컻吏? ,arrive_nation.name as 紐⑹쟻吏?
from ticket
join passenger on ticket.name=passenger.passport
join depart_nation on ticket.depart_nation=depart_nation.code
join arrive_nation on ticket.arrive_nation=arrive_nation.code;
---

select * from ticket_all;