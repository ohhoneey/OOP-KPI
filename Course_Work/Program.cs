using System;
using System.Collections.Generic;
using System.Linq;
using Library;
using System.Text;
using System.Threading.Tasks;

namespace CourseWork
{
    class Program
    {

        
        static void Main(string[] args)
        {
            //список предметів
            List<Subject> sybj = new List<Subject>();
            sybj.Add(new Subject() { ID = 12, Lesson = "English", Teacher = "Shevchenko I.O.", Type = "practice", Hours = 5 });
            sybj.Add(new Subject() { ID = 13, Lesson = "English", Teacher = "Borysova M.Y.", Type = "practice", Hours = 5 });
            sybj.Add(new Subject() { ID = 14, Lesson = "History", Teacher = "Kostyleva O.K.", Type = "lecture", Hours = 1 });
            sybj.Add(new Subject() { ID = 15, Lesson = "History", Teacher = "Buzan I.P.", Type = "practice", Hours = 5 });

            //створення об'єктів, які вистувають сховищами даних
            var groups = new GroupRepository();
            var subjects = new SubjectRepository(sybj);
            var audiences = new RoomsRepository();
            var planner = new PlanRepository();

            //додавання груп до списку-сховища
            groups.Adding(new Group() { ID = 1, Flow = "ИС", GroupNum = 91, Numbersof = 30 });
            groups.Adding(new Group() { ID = 2, Flow = "ИС", GroupNum = 92, Numbersof = 28 });
            groups.Adding(new Group() { ID = 3, Flow = "ИС", GroupNum = 93, Numbersof = 27 });

            //додавання предметів до списку-сховища
            subjects.Adding(new Subject() { ID = 1, Lesson = "Physics", Teacher = "Fedotov V.V.", Type = "lecture", Hours = 5 });
            subjects.Adding(new Subject() { ID = 2, Lesson = "Physics", Teacher = "Marchenko I.P.", Type = "practice", Hours = 5 });
            subjects.Adding(new Subject() { ID = 3, Lesson = "Physics", Teacher = "Ignatenko О.М", Type = "practice", Hours = 8 });
            subjects.Adding(new Subject() { ID = 4, Lesson = "Physics", Teacher = "Liakhovetskiy O.D.", Type = "practice", Hours = 8 });
            subjects.Adding(new Subject() { ID = 5, Lesson = "Math", Teacher = "Zhuk V.A.", Type = "lecture", Hours = 9 });
            subjects.Adding(new Subject() { ID = 6, Lesson = "Math", Teacher = "Orel K.M.", Type = "lecture", Hours = 5 });
            subjects.Adding(new Subject() { ID = 7, Lesson = "Math", Teacher = "Pelekhata O.B.", Type = "practice", Hours = 5 });
            subjects.Adding(new Subject() { ID = 8, Lesson = "Programming", Teacher = "Muha I.P.", Type = "lecture", Hours = 5 });
            subjects.Adding(new Subject() { ID = 9, Lesson = "Programming", Teacher = "Brodin O.M.", Type = "practice", Hours = 5 });
            subjects.Adding(new Subject() { ID = 10, Lesson = "OOS", Teacher = "Yarovoy V.M.", Type = "lecture", Hours = 2 });
            subjects.Adding(new Subject() { ID = 11, Lesson = "OOS", Teacher = "Khramchenlo N.I.", Type = "practice", Hours = 1 });

            //додавання груп до списку-сховища
            audiences.Adding(new Room() { ID = 1, Number = 102, Lesson = "Physics", Type = "lecture" });
            audiences.Adding(new Room() { ID = 2, Number = 107, Lesson = "Programming", Type = "lecture" });
            audiences.Adding(new Room() { ID = 3, Number = 112, Lesson = "OOS", Type = "practice" });
            audiences.Adding(new Room() { ID = 4, Number = 217, Lesson = "Physics", Type = "practice" });
            audiences.Adding(new Room() { ID = 5, Number = 102, Lesson = "Math", Type = "lecture" });
            audiences.Adding(new Room() { ID = 6, Number = 118, Lesson = "Math", Type = "practice" });
            audiences.Adding(new Room() { ID = 7, Number = 133, Lesson = "OOS", Type = "lecture" });
            audiences.Adding(new Room() { ID = 8, Number = 115, Lesson = "Physics", Type = "practice" });
            audiences.Adding(new Room() { ID = 9, Number = 36, Lesson = "Programming", Type = "practice" });
            audiences.Adding(new Room() { ID = 10, Number = 123, Lesson = "English", Type = "practice" });
            audiences.Adding(new Room() { ID = 11, Number = 223, Lesson = "History", Type = "practice" });
            audiences.Adding(new Room() { ID = 12, Number = 102, Lesson = "History", Type = "lecture" });


            //плануванння занять для ккожної групи
            planner.Adding(new Plan() { Day = "Monday", GroupID = 1, AudienceID = 1, SubjectID = 4});
            planner.Adding(new Plan() { Day = "Monday", GroupID = 1, AudienceID = 4, SubjectID = 2});
            planner.Adding(new Plan() { Day = "Monday", GroupID = 1, AudienceID = 2, SubjectID = 8});
            planner.Adding(new Plan() { Day = "Tuesday", GroupID = 1, AudienceID = 2, SubjectID = 8});
            planner.Adding(new Plan() { Day = "Tuesday", GroupID = 1, AudienceID = 1, SubjectID = 1});
            planner.Adding(new Plan() { Day = "Tuesday", GroupID = 1, AudienceID = 5, SubjectID = 5});
            planner.Adding(new Plan() { Day = "Wednesday", GroupID = 1, AudienceID = 10, SubjectID = 13});
            planner.Adding(new Plan() { Day = "Wednesday", GroupID = 1, AudienceID = 9, SubjectID = 9});
            planner.Adding(new Plan() { Day = "Thursday", GroupID = 1, AudienceID = 7, SubjectID = 10});
            planner.Adding(new Plan() { Day = "Thursday", GroupID = 1, AudienceID = 3, SubjectID = 11});
            planner.Adding(new Plan() { Day = "Friday", GroupID = 1, AudienceID = 12, SubjectID = 14});
            planner.Adding(new Plan() { Day = "Friday", GroupID = 1, AudienceID = 11, SubjectID = 15});

            planner.Adding(new Plan() { Day = "Monday", GroupID = 2, AudienceID = 10, SubjectID = 12});
            planner.Adding(new Plan() { Day = "Monday", GroupID = 2, AudienceID = 9, SubjectID = 9});
            planner.Adding(new Plan() { Day = "Monday", GroupID = 2, AudienceID = 2, SubjectID = 8});
            planner.Adding(new Plan() { Day = "Tuesday", GroupID = 2, AudienceID = 2, SubjectID = 8});
            planner.Adding(new Plan() { Day = "Tuesday", GroupID = 2, AudienceID = 1, SubjectID = 1});
            planner.Adding(new Plan() { Day = "Tuesday", GroupID = 2, AudienceID = 5, SubjectID = 5});
            planner.Adding(new Plan() { Day = "Wednesday", GroupID = 2, AudienceID = 10, SubjectID = 12});
            planner.Adding(new Plan() { Day = "Wednesday", GroupID = 2, AudienceID = 6, SubjectID = 7});
            planner.Adding(new Plan() { Day = "Thursday", GroupID = 2, AudienceID = 7, SubjectID = 10});
            planner.Adding(new Plan() { Day = "Thursday", GroupID = 2, AudienceID = 9, SubjectID = 9});
            planner.Adding(new Plan() { Day = "Friday", GroupID = 2, AudienceID = 12, SubjectID = 14});
            planner.Adding(new Plan() { Day = "Friday", GroupID = 2, AudienceID = 4, SubjectID = 2});

            planner.Adding(new Plan() { Day = "Monday", GroupID = 3, AudienceID = 6, SubjectID = 7 });
            planner.Adding(new Plan() { Day = "Monday", GroupID = 3, AudienceID = 2, SubjectID = 8 });
            planner.Adding(new Plan() { Day = "Tuesday", GroupID = 3, AudienceID = 2, SubjectID = 8 });
            planner.Adding(new Plan() { Day = "Tuesday", GroupID = 3, AudienceID = 1, SubjectID = 1 });
            planner.Adding(new Plan() { Day = "Tuesday", GroupID = 3, AudienceID = 5, SubjectID = 5 });
            planner.Adding(new Plan() { Day = "Wednesday", GroupID = 3, AudienceID = 10, SubjectID = 12 });
            planner.Adding(new Plan() { Day = "Wednesday", GroupID = 3, AudienceID = 3, SubjectID = 11 });
            planner.Adding(new Plan() { Day = "Thursday", GroupID = 3, AudienceID = 7, SubjectID = 10 });
            planner.Adding(new Plan() { Day = "Thursday", GroupID = 3, AudienceID = 10, SubjectID = 12 });
            planner.Adding(new Plan() { Day = "Friday", GroupID = 3, AudienceID = 12, SubjectID = 14 });
            planner.Adding(new Plan() { Day = "Friday", GroupID = 3, AudienceID = 5, SubjectID = 7 });


            //підписки на події
            audiences.Notify += DisplayMessage;
            groups.Notify += DisplayMessage;
            subjects.Notify += DisplayMessage;
            planner.Notify += DisplayMessage;
            

            string day = null; //день тижня
            Console.WriteLine("Welcome to the scheduler!");

            //цикл, що відбувається доти, доки користувач не обере "Вихід" з програми
            //а доти йому будуть надані можливості додати, видалити групу, подивитись розклад
            while (true)
            {

                Console.WriteLine("All groups");
                var gr = groups.FindAll();
                foreach (var i in gr)
                {
                    Console.WriteLine($"ID = {i.ID} {i.Flow} - {i.GroupNum}");
                }
                Console.WriteLine("Add group - 1, Remove group - 2, View schedule - 3");
                int num = Convert.ToInt32(Console.ReadLine());
                if (num == 1)
                {
                    Console.WriteLine("Enter the ID of the group. It should be different than previous");
                    int id = Convert.ToInt32(Console.ReadLine());
                    Console.WriteLine("Enter the flow of the group.");
                    string flow = Console.ReadLine();
                    Console.WriteLine("Enter the number of the group.");
                    int grnum = Convert.ToInt32(Console.ReadLine());
                    Console.WriteLine("Enter amount of students");
                    int numm = Convert.ToInt32(Console.ReadLine());
                    try
                    {
                        groups.Adding(new Group { ID = id, Flow = flow, GroupNum = grnum, Numbersof = numm });
                    }
                    catch(Exception e)
                    {
                        Console.ForegroundColor = ConsoleColor.DarkRed;
                        Console.WriteLine(e.Message);
                        Console.ResetColor();
                    }
                    
                    continue;
                    
                }
                if (num == 2)
                {
                    Console.WriteLine("Choose a group");
                    Console.WriteLine("Enter id");
                    var gropid = Convert.ToInt32(Console.ReadLine());
                    try
                    {
                        groups.Removing(gropid);
                    }
                    catch(Exception e)
                    {
                        Console.ForegroundColor = ConsoleColor.DarkRed;
                        Console.WriteLine(e.Message);
                        Console.ResetColor();
                    }
                    continue;
                }
                if (num == 3)
                {
                    Console.WriteLine("Choose a group");
                    Console.WriteLine("Enter id");
                    var id = Convert.ToInt32(Console.ReadLine());
                    
                    if (id < 1 || id > gr.Count() )
                    {
                        Console.ForegroundColor = ConsoleColor.Red;
                        Console.WriteLine("You entered the wrong ID!");
                        Console.WriteLine("Try again");
                        Console.ResetColor();
                        Console.WriteLine("All groups");
                        gr = groups.FindAll();
                        foreach (var i in gr)
                        {
                            Console.WriteLine($"ID = {i.ID} {i.Flow} - {i.GroupNum}");
                        }
                        Console.WriteLine("Choose a group");
                        Console.WriteLine("Enter id");
                        id = Convert.ToInt32(Console.ReadLine());

                    }

                    Console.WriteLine("Choose a day");
                    Console.WriteLine("Monday - 1, Tuesday - 2, Wednesday - 3, Thursday - 4, Friday - 5, Week - 6, Exit - 7");
                    var days = Convert.ToInt32(Console.ReadLine());
                    if (days < 1 || days > 7)
                    {
                        Console.ForegroundColor = ConsoleColor.Red;
                        Console.WriteLine("You entered the wrong number!");
                        Console.WriteLine("Try again");
                        Console.ResetColor();
                        Console.WriteLine("Choose a day");
                        Console.WriteLine("Monday - 1, Tuesday - 2, Wednesday - 3, Thursday - 4, Friday - 5, Week - 6, Exit - 7");
                        days = Convert.ToInt32(Console.ReadLine());

                    }
                    if (days == 1)
                    {
                        day = "Monday";
                    }

                    if (days == 2)
                    {
                        day = "Tuesday";
                    }

                    if (days == 3)
                    {
                        day = "Wednesday";
                    }

                    if (days == 4)
                    {
                        day = "Thursday";
                    }

                    if (days == 5)
                    {
                        day = "Friday";
                    }

                    if (days == 6)
                    {
                        Console.WriteLine("Choose a group");
                        var g = groups.FindAll();
                        foreach (var i in g)
                        {
                            Console.WriteLine($"ID = {i.ID} {i.Flow} - {i.GroupNum}");
                        }
                        Console.WriteLine("Enter id");
                        var idd = Convert.ToInt32(Console.ReadLine());
                        for (int i = 1; i < 5; i++)
                        {
                            switch (i)
                            {

                                case 1:
                                    day = "Monday";
                                    break;
                                case 2:
                                    day = "Tuesday";
                                    break;
                                case 3:
                                    day = "Wednesday";
                                    break;
                                case 4:
                                    day = "Thursday";
                                    break;
                                case 5:
                                    day = "Friday";
                                    break;

                            }

                            try
                            {
                                planner.Choose(planner, groups, subjects, audiences, day, id);
                            }
                            catch (Exception e)
                            {
                                Console.ForegroundColor = ConsoleColor.Red;
                                Console.WriteLine(e.Message);
                                Console.ResetColor();
                            }

                        }
                        break;
                    }

                    if (days == 7)
                    {
                        return;
                    }

                    try
                    {
                        planner.Choose(planner, groups, subjects, audiences, day, id);
                    }
                    catch(Exception e)
                    {
                        Console.ForegroundColor = ConsoleColor.Red;
                        Console.WriteLine(e.Message);
                        Console.ResetColor();
                        
                    }
                    
                    continue;
                }
                

                Console.WriteLine("Choose a group");
                Console.WriteLine("Enter id");
                var groupid = Convert.ToInt32(Console.ReadLine());
                if (groupid < 1 || groupid > gr.Count())
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You entered the wrong ID!");
                    Console.WriteLine("Try again");
                    Console.ResetColor();
                    Console.WriteLine("All groups");
                    gr = groups.FindAll();
                    foreach (var i in gr)
                    {
                        Console.WriteLine($"ID = {i.ID} {i.Flow} - {i.GroupNum}");
                    }
                    Console.WriteLine("Choose a group");
                    Console.WriteLine("Enter id");
                    groupid = Convert.ToInt32(Console.ReadLine());

                }
                

                Console.WriteLine("Choose a day");
                Console.WriteLine("Monday - 1, Tuesday - 2, Wednesday - 3, Thursday - 4, Friday - 5, Week - 6, Exit - 7");
                int d = Convert.ToInt32(Console.ReadLine());
                if(d < 1 || d > 7)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("You entered the wrong number!");
                    Console.WriteLine("Try again");
                    Console.ResetColor();
                    Console.WriteLine("Choose a day");
                    Console.WriteLine("Monday - 1, Tuesday - 2, Wednesday - 3, Thursday - 4, Friday - 5, Week - 6, Exit - 7");
                    d = Convert.ToInt32(Console.ReadLine());
                    
                }
                if (d == 1)
                {
                    day = "Monday";
                }

                if (d == 2)
                {
                    day = "Tuesday";
                }

                if (d == 3)
                {
                    day = "Wednesday";
                }

                if (d == 4)
                {
                    day = "Thursday";
                }

                if (d == 5)
                {
                    day = "Friday";
                }

                if (d == 6)
                {
                    Console.WriteLine("Choose a group");
                    var g = groups.FindAll();
                    foreach (var i in g)
                    {
                        Console.WriteLine($"ID = {i.ID} {i.Flow} - {i.GroupNum}");
                    }
                    Console.WriteLine("Enter id");
                    var id = Convert.ToInt32(Console.ReadLine());
                    for (int i = 1; i < 5; i++)
                    {
                        switch (i)
                        {

                            case 1:
                                day = "Monday";
                                break;
                            case 2:
                                day = "Tuesday";
                                break;
                            case 3:
                                day = "Wednesday";
                                break;
                            case 4:
                                day = "Thursday";
                                break;
                            case 5:
                                day = "Friday";
                                break;

                        }
                        planner.Choose(planner, groups, subjects, audiences, day, id); 

                    }
                    break;
                }

                if (d == 7)
                {
                    return;
                }

                
                planner.Choose(planner, groups, subjects, audiences, day, groupid);


            }

            Console.ReadKey();
        }

        //обробник подій
        public static void DisplayMessage(string message)
        {
            Console.ForegroundColor = ConsoleColor.Red;
            Console.WriteLine(message);
            Console.ResetColor();
        }
    }
}


