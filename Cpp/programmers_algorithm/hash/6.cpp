#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> best_album;
    unordered_map<string, vector<pair<int, int>>> genres_plays_map;
    //장르, (고유번호, 플레이수) 형태로 hash map 저장
    for(int capital_num = 0; capital_num < genres.size(); capital_num++){
        genres_plays_map[genres[capital_num]].emplace_back(capital_num, plays[capital_num]);
    }
    //장르별 총 재생회수 계산
    int genre_play_count = 0;
    unordered_map<string, int> play_count_map;
    for(int capital_num = 0; capital_num < genres.size(); capital_num++){//
        play_count_map[genres[capital_num]] += plays[capital_num];
    }

    //장르별 총 재생회수 내림차순 정렬
    vector<pair<string, int>> play_count_sorted(play_count_map.begin(), play_count_map.end());// play_count_map의 모든 요소를 복사하는 방법....꼭 외워두기
    sort(play_count_sorted.begin(), play_count_sorted.end(), [](const pair<string, int>& a, const pair<string, int>& b){return a.second > b.second;});//내림차순 정령이 된 play_count_sort 배열생성

    //장르별 총 재생회수 
    for(const auto& genre : play_count_sorted){
        const string& genre_name = genre.first;//장르명
        auto& song_info = genres_plays_map[genre_name];//(고유번호, 플레이 수)
        //플레이 수 기준으로 재정렬
        sort(song_info.begin(), song_info.end(), [](const pair<int, int>& a, const pair<int, int>& b){return a.second > b.second;});//플레이 수 기준 내림차순 정렬

    //장르별 재생횟수 기준으로 내림차순 정렬을 먼저하였고 이후 다시 곡 별 플레이순으로 내림차순 정렬을 한 직후에 앞에서부터 2개 씩 앨범에 push_back하였으므로 자동으로 문제에서 요구하는 순서로 정렬이 됨
        for(int i = 0; i < 2; i++){
            best_album.push_back(song_info[i].first);
        }
    }

    return best_album;
}

/*
노래의 장르를 나타내는 문자열 배열 genres와 노래별 재생 횟수를 나타내는 정수 배열 plays가 주어질 때, 베스트 앨범에 들어갈 노래의 고유 번호를 순서대로 return 하도록 solution 함수를 완성하세요.

제한사항
genres[i]는 고유번호가 i인 노래의 장르입니다.
plays[i]는 고유번호가 i인 노래가 재생된 횟수입니다.
genres와 plays의 길이는 같으며, 이는 1 이상 10,000 이하입니다.
장르 종류는 100개 미만입니다.
장르에 속한 곡이 하나라면, 하나의 곡만 선택합니다.
모든 장르는 재생된 횟수가 다릅니다.
입출력 예
genres	plays	return
["classic", "pop", "classic", "classic", "pop"]	[500, 600, 150, 800, 2500]	[4, 1, 3, 0]
입출력 예 설명
classic 장르는 1,450회 재생되었으며, classic 노래는 다음과 같습니다.

고유 번호 3: 800회 재생
고유 번호 0: 500회 재생
고유 번호 2: 150회 재생
pop 장르는 3,100회 재생되었으며, pop 노래는 다음과 같습니다.

고유 번호 4: 2,500회 재생
고유 번호 1: 600회 재생
따라서 pop 장르의 [4, 1]번 노래를 먼저, classic 장르의 [3, 0]번 노래를 그다음에 수록합니다.

장르 별로 가장 많이 재생된 노래를 최대 두 개까지 모아 베스트 앨범을 출시하므로 2번 노래는 수록되지 않습니다.
*/

#include <iostream>

int main(){
    vector<int> answer = solution({"classic", "pop", "classic", "classic", "pop"}, {500, 600, 150, 800, 2500});
    for(const int ans : answer){
        cout << ans << endl;
    }
}