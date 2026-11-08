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

// Function: entry_00160c48
// Address: 0x160c48 - 0x160c50
void entry_00160c48_0x160c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160c48_0x160c48");
#endif

    ctx->pc = 0x160c48u;

    // 0x160c48: 0x1012  mflo        $v0
    ctx->pc = 0x160c48u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x160c4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x160c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160c50u;
}
