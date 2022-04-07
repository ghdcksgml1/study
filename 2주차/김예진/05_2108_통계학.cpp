#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<stack>

using namespace std;

//sort ���� 
//const ��� ���� �� ���//�� ���� �Ұ���
/////
///pair�� ù ��° ���ڴ� ����(key), �� ��° ���ڴ� �󵵼�///
bool comp(const pair<int, int>& p1, const pair<int, int>& p2) {

    if (p1.second == p2.second) {     
        //�󵵼��� ������ 
        return p1.first < p2.first;  
        //����(key)������ ������//��������
    }
    return p1.second > p2.second;    
    //�ٸ��� �󵵼��� ū�� ������//��������

}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;  cin >> n;

    vector<int> v;
    double sum = 0;    
    int key;
  
    for (int i = 0; i < n; i++) {
        cin >> key;
        //���� V�� �� �ڿ� �Է¹��� key ����
        v.push_back(key);
        sum += key;
    }

    sort(v.begin(), v.end());

    //������ ���
    //floor �����Լ��� �̿��� �Ҽ��� ���� �ݿø�
    //floor(N + 0.5);//N�� �ݿø� ��
    //#include<cmath>//�ݿø��Լ� round ��밡��//double round(double num);
    cout << (int)floor((sum / n) + 0.5) << endl;


    //�߾Ӱ� 
    cout << v[n / 2] << endl;


    //�ֺ�
    //vector<pair<int,int>>�� �� �ְ� comp ���ؿ� ���� ����
    //key �� �󵵼� �����ϴ� pair�� vector
    vector<pair<int, int> > st;             
    vector<int>::size_type i;

    for (i = 0; i < v.size(); i++) {
        if (st.empty()) {
            st.push_back(pair<int, int>(v[i], 1));
            ///�� 1�� �ʱ�ȭ?
            /// 
            continue;
        }

        //
        if (st.back().first == v[i]) {        //����(key)�������� �ִٸ� 
            pair<int, int> tmp = st.back();
            // ///
            tmp.second++;                     //�󵵼� ����
            st.pop_back();                    //������ ���ְ� 
            st.push_back(tmp);                //���ο� �� �ٽ� ���� 
            ///
        }
        else {
            st.push_back(pair<int, int>(v[i], 1));
            ///
        }
    }


    //�󵵼��� ����, ����(key)�� ���� ������ ���� 
    sort(st.begin(), st.end(), comp);

    if (st[0].second == st[1].second) {
        cout << st[1].first << endl;
    }
    else {
        cout << st[0].first << endl;
    }


    //����
    //���ĵ� v���� �� ������ ���� �� ó�� ���� ���� ����
    cout << v.back() - v.front() << endl;


    return 0;
}


/*
* ����
* vector<int>::size_type i;
* size_type�� ÷�ڳ� ������ ���� ���� ����//������ �ε��� �� ǥ��?
* �׳� int i; �ϸ� �ȵǴ� ����
*/