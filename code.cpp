#include<iostream>
using namespace std;
class match2;
class match3;
class match1
{
    private:
       string player_name;
       int player_score;
       int overs;
       int extras;
       float run_rate;
      static int total_score;

    public:
       void player_info()
       {
           cout<<"player name: ";
           cin>>player_name;
           cout<<"player score: ";
           cin>>player_score;
           total_score+=player_score;
       }
       void match_info()
       {
           cout<<"extras: ";
           cin>>extras;
           total_score+=extras;
           cout<<"total score: ";
           cout<<total_score<<endl;
           run_rate=total_score/20;
           cout<<"run rate: "<<run_rate<<endl;
       }
       void revised_info50()
       {
           cout<<"extras: ";
           cin>>extras;
           total_score+=extras;
           cout<<"total score: ";
           cout<<total_score<<endl;
           run_rate=total_score/50;
           cout<<"run rate: "<<run_rate<<endl;
       }
       void revised_info10()
       {
       cout<<"extras: ";
           cin>>extras;
           total_score+=extras;
           cout<<"total score: ";
           cout<<total_score<<endl;
           run_rate=total_score/10;
           cout<<"run rate: "<<run_rate<<endl;
       }
       friend void inter(match1, match2,match3);
};
class match2
{
    private:
       string player_name_opp;
       int player_score_opp;
       int overs_opp;
       int extras_opp;
       float run_rate_opp;
     static  int total_score_opp;
     static int total_score_opp_dls;
     int overs99;
    public:
       void player_info99()
       {

           cout<<"player name: ";
           cin>>player_name_opp;
           cout<<"player_score: ";
           cin>>player_score_opp;
           total_score_opp+=player_score_opp;
       }
       void match_info99()
       {
           cout<<"extras: ";
           cin>>extras_opp;
           total_score_opp+=extras_opp;
           cout<<"total score: ";
           cout<<total_score_opp<<endl;
           run_rate_opp=total_score_opp/20;
           cout<<"run rate: "<<run_rate_opp<<endl;
       }
       void revised_info9950()
       {
           cout<<"extras: ";
           cin>>extras_opp;
           total_score_opp+=extras_opp;
           cout<<"total score: ";
           cout<<total_score_opp<<endl;
           run_rate_opp=total_score_opp/50;
           cout<<"run rate: "<<run_rate_opp<<endl;
       }
       void revised_info9910()
       {
           cout<<"extras: ";
           cin>>extras_opp;
           total_score_opp+=extras_opp;
           cout<<"total score: ";
           cout<<total_score_opp<<endl;
           run_rate_opp=total_score_opp/10;
           cout<<"run rate: "<<run_rate_opp<<endl;
       }
       void player_revised_info99()
       {
           int overs99;
           cout<<"overs for DLS: ";
           cin>>overs99;
           cout<<"player name: ";
           cin>>player_name_opp;
           cout<<"player_score: ";
           cin>>player_score_opp;
           total_score_opp_dls+=player_score_opp;
       }
       void revised_target()
       {
           cout<<"extras: ";
           cin>>extras_opp;
           total_score_opp+=extras_opp;
           cout<<"total score: ";
           cout<<total_score_opp_dls<<endl;
           run_rate_opp=total_score_opp_dls/overs99;
           cout<<"run rate: "<<run_rate_opp<<endl;
       }
       friend void inter(match1, match2,match3);
};
class match3
{
    private:
       string player_name_revised;
       int player_score_revised;
       int overs_revised;
       int extras_revised;
       float run_rate_revised;
       static int total_score_revised;
    public:
       void player_info_revised()
       {
           cout<<"player name: ";
           cin>>player_name_revised;
           cout<<"player_score: ";
           cin>>player_score_revised;
           total_score_revised+=player_score_revised;
       }
       void match_info_revised()
       {
           cout<<"revised overs:";
           cin>>overs_revised;
           cout<<"extras: ";
           cin>>extras_revised;
           total_score_revised+=extras_revised;
           cout<<"total score: ";
           cout<<total_score_revised<<endl;
           run_rate_revised=total_score_revised/overs_revised;
           cout<<"run rate: "<<run_rate_revised<<endl;
       }
       friend void inter(match1, match2,match3);
};
//
//
int match1::total_score;
int match2::total_score_opp;
int match3::total_score_revised;
//
void inter(match1 info1,match2 info2,match3 info3)
{
    if(info1.total_score>info2.total_score_opp)
    {
        if(info1.total_score>info3.total_score_revised)
        {
            cout<<"your team won"<<endl;
        }
    }
    if(info1.total_score<info2.total_score_opp)
    {
        if(info2.total_score_opp>info3.total_score_revised)
        {
            cout<<"opp team won"<<endl;
        }
    }
    if(info1.total_score<info3.total_score_revised)
    {
        if(info1.total_score<info3.total_score_revised)
        {
            cout<<"opponent  team won"<<endl;
        }
    }

}
int main()
{
    match1 info1;match2 info2;match3 info3;
    string team_name;
    cout<<"what is your team name: ";
    cin>>team_name;
    int ovr;
    cout<<"overs per innings: ";
    cin>>ovr;
    cout<<"TEAM "<<team_name;
    cout<<endl;
    int wic;
    cout<<"wickets fallen: ";
    cin>>wic;
    if(ovr=20)
    {
        if(wic<=9)
        {
            int i;
            for(i=0;i<wic+2;i++)
            {
                info1.player_info();
            }
        }
        else if(wic=10)
        {
            int j;
            for(j=0;j<wic+1;j++)
            {
                info1.player_info();
            }
        }
        else
        {
            cout<<"enter correct count mate ";
        }
        info1.match_info();
    }
    else if(ovr=50)
    {
    	if(wic<=9)
        {
            int i;
            for(i=0;i<wic+2;i++)
            {
                info1.player_info();
            }
        }
        else if(wic=10)
        {
            int j;
            for(j=0;j<wic+1;j++)
            {
                info1.player_info();
            }
        }
        else
        {
            cout<<"enter correct count mate ";
        }
        info1.revised_info50();
	}
	else if(ovr=10)
	{
		if(wic<=9)
        {
            int i;
            for(i=0;i<wic+2;i++)
            {
                info1.player_info();
            }
        }
        else if(wic=10)
        {
            int j;
            for(j=0;j<wic+1;j++)
            {
                info1.player_info();
            }
        }
        else
        {
            cout<<"enter correct count mate ";
        }
        info1.revised_info10();
	}
	else
	{
		cout<<"test format will be updated soon!!! "<<endl;
		cout<<"hope you enjoy other format"<<endl;
		exit;
	}

    //
    //
    //
    int dls;
    cout<<"press 30 if DLS is required "<<endl;
    cout<<"press 20 if DLS is not required "<<endl;
    cin>>dls;
    if(dls==20)
    {
    string team_name_opp;
    cout<<"what is your team name: ";
    cin>>team_name_opp;
    cout<<"TEAM: "<<team_name_opp;
    cout<<endl;
    cout<<"wickets fallen: ";
    cin>>wic;
    if(ovr=20)
    {
        if(wic<=9)
        {
            int l;
            for(l=0;l<wic+2;l++)
            {
                info2.player_info99();
            }
        }
        else if(wic=10)
        {
            int k;
            for(k=0;k<wic+1;k++)
            {
                info2.player_info99();
            }
        }
        else
        {
            cout<<"enter correct count mate ";
        }
        info2.match_info99();
    }
    else if(ovr=50)
    {
    	if(wic<=9)
        {
            int l;
            for(l=0;l<wic+2;l++)
            {
                info2.player_info99();
            }
        }
        else if(wic=10)
        {
            int k;
            for(k=0;k<wic+1;k++)
            {
                info2.player_info99();
            }
        }
        else
        {
            cout<<"enter correct count mate ";
        }
        info2.revised_info9950();
	}
	else if(ovr=10)
	{
		if(wic<=9)
        {
            int l;
            for(l=0;l<wic+2;l++)
            {
                info2.player_info99();
            }
        }
        else if(wic=10)
        {
            int k;
            for(k=0;k<wic+1;k++)
            {
                info2.player_info99();
            }
        }
        else
        {
            cout<<"enter correct count mate ";
        }
        info2.revised_info9910();
	}
	else
	{
		cout<<"test format will be updated soon!!! "<<endl;
		cout<<"hope you enjoy other format"<<endl;
		exit(0);
	}



//\\
//\\
     friend function
     inter(info1,info2,info3);
}
else if(dls==30)
{
    int stop_status;
   cout<<"if you want to stop the match then press 101 "<<endl;
   cin>>stop_status;
   if(stop_status==101)
   {
   	   cout<<"umpires call off"<<endl;
   	   cout<<"end of day play"<<endl<<"match drawn"<<endl;
       exit(0);
   }
   else
   {
       string team_name_opp;
       cout<<"what is your team name: ";
       cin>>team_name_opp;
       cout<<"TEAM: "<<team_name_opp;
       cout<<endl;
       cout<<"wickets fallen: ";
       cin>>wic;
             if(wic<=9)
                    {
            int l;
            for(l=0;l<wic+2;l++)
            {
                info3.player_info_revised();
            }
        }
             else if(wic=10)
                    {
            int k;
            for(k=0;k<wic+1;k++)
            {
                info3.player_info_revised();
            }
        }

   }
   info3.match_info_revised();
}
else
{
    cout<<"enter the correct number mate "<<endl;
}
    inter(info1,info2,info3);

}


