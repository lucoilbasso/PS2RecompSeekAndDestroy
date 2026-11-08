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

// Function: entry_0011c894
// Address: 0x11c894 - 0x11c89c
void entry_0011c894_0x11c894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c894_0x11c894");
#endif

    ctx->pc = 0x11c894u;

    // 0x11c894: 0x24a64e00  addiu       $a2, $a1, 0x4E00
    ctx->pc = 0x11c894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 19968));
    // 0x11c898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11c89cu;
}
