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

// Function: entry_001764e8
// Address: 0x1764e8 - 0x1764f4
void entry_001764e8_0x1764e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001764e8_0x1764e8");
#endif

    ctx->pc = 0x1764e8u;

    // 0x1764e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1764e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1764ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1764f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1764f4u;
}
