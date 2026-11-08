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

// Function: entry_00142b98
// Address: 0x142b98 - 0x142ba0
void entry_00142b98_0x142b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142b98_0x142b98");
#endif

    ctx->pc = 0x142b98u;

    // 0x142b98: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x142b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x142b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142ba0u;
}
