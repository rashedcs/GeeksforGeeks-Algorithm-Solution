        #include<bits/stdc++.h>
        using namespace std;


        struct employee
        {
            string name;
            int age;
        };

        bool is_younger(employee const& l, employee const& r)
        {
            return l.age < r.age;
        }

        int main()
        {
            ios::sync_with_stdio(false);

            vector<employee> employees(3);
            for(int j=0; j<3;++j)
            {
                cin>>employees[j].name>>employees[j].age;
            }

            sort(employees.begin(), employees.end(), is_younger);

            for(int j=0; j<3; j++)
            {
                cout<<employees[j].name<<"\t\t"<<employees[j].age<<"\n";
            }
            return 0;
        }










        #include<bits/stdc++.h>
        using namespace std;


        struct employee
        {
            string name;
            int age;
        };

        bool is_younger(employee const& l, employee const& r)
        {
            return l.age < r.age;
        }

        int main()
        {
            ios::sync_with_stdio(false);

            employee arr[3];

            for(int j=0; j<3;++j)
            {
                cin>>arr[j].name>>arr[j].age;
            }

            sort(arr, arr+3, is_younger);

            for(int j=0; j<3; j++)
            {
                cout<<arr[j].name<<"\t"<<arr[j].age<<"\n";
            }
            return 0;
        }

