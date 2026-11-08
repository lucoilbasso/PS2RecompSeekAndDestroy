#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001adb90
// Address: 0x1adb90 - 0x1adb98
void entry_001adb90_0x1adb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adb90_0x1adb90");
#endif

    ctx->pc = 0x1adb90u;

    // 0x1adb90: 0x24d20001  addiu       $s2, $a2, 0x1
    ctx->pc = 0x1adb90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1adb94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1adb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1adb98u;
}
