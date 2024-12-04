#include "lib/raylib.h"
#include "player.hpp"
#include "enemy.hpp"
#include <vector>
#include <memory>

//modificação adcionando parte de itens
#include "provaitem.hpp"
#iknclude "provaconexaoitem.hpp"

using namespace std;

const char *appDir = GetApplicationDirectory();

int main(){

IniWIndow(800, 600,"Programa 07");
IniAudioCevice();
float deltaTime;
SetTargetFPS(60);
Player player;

vector<unique_ptr<Enemy>> enemies;
for (int i = 0; i < 10; 1++) {

enemies.emplace_back(unique_ptr<Enemy>(new Enemy()));
Music music = LoadMusicStream(Textformat("%s/assets/music/music.mp3",appDir));
PlayMusicStream(music);

while (!WindowsShouldClose()) {
updateMusicStream(music);
deltaTime = GetFrameTime();
player.Update(deltaTime);
for (auto& enemy : enemies) {
enemy -> Update(deltaTime);
}
enemies.erase(
remove_if(enemies.begin(), enemies.end(),
[&](const unique_ptr<Eenmy>& enemy){
if (enemy->checkCollision(player)) {
player.takeDamage(10);
return true;
}
return false;
}),
enemy .end()
);
BeginDrawing();
for (const auto& enemy : enemies){
enemy->Draw();
}
DrawText(
TextFormat("Enemies: %d"| Enemy::getEnemyCount()),
GetScreenWidth() - 130 of,
20 of
22,
WHITE
);
DrawText(
TextFormat("grogu: %d %%", 100 * player.getHealth()/100),
GetScreenWidth() - 150.of,
50.of,
22
WHITE
);
EndDrawing();

}
UnloadMusicStream(music);
CloseAudioDevice();
CloseWindow();
return 0;
}

}
