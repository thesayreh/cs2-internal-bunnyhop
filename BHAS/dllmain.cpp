#include "include.h"

uintptr_t client = (uintptr_t)GetModuleHandleA("client.dll");
uintptr_t cs2 = (uintptr_t)GetModuleHandleA("cs2.exe");

void BunnyHop() {
  uintptr_t localPawn = *(uintptr_t*)(client + dwLocalPlayerPawn);
  if (!localPawn) return;

  int flags = *(int*)(localPawn + m_fFlags);
  bool onGround = (flags & 1);

  if (onGround && (GetAsyncKeyState(VK_SPACE) & 0x8000)) {
      *(int*)(client + jump) = 65537;
      Sleep(1);
      *(int*)(client + jump) = 256;
  }
}

void Main() {

    AllocConsole();
    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);
    freopen_s(&file, "CONIN$", "r", stdin);

   std::cout << "+--------------------------------------+" << std::endl;
   std::cout << "|         CS2 bhop by thesayreh        |" << std::endl;
   std::cout << "+--------------------------------------+" << std::endl;
   std::cout << "[+] Bunnyhop activated! Don't close this console!" << std::endl;

   while (true)
   {
       if (GetAsyncKeyState(VK_END) & 1) break;
       BunnyHop();
       Sleep(1);
   }

   FreeConsole();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
  if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
      DisableThreadLibraryCalls(hModule);
      CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Main, nullptr, 0, nullptr);
  }
  return TRUE;
}