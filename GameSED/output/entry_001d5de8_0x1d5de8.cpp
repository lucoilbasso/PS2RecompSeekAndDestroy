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

// Function: entry_001d5de8
// Address: 0x1d5de8 - 0x1d5dec
void entry_001d5de8_0x1d5de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5de8_0x1d5de8");
#endif

    ctx->pc = 0x1d5de8u;

    // 0x1d5de8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x1d5de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d5decu;
}
