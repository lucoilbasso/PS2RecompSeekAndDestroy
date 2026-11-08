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

// Function: entry_001c96d8
// Address: 0x1c96d8 - 0x1c96e0
void entry_001c96d8_0x1c96d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c96d8_0x1c96d8");
#endif

    ctx->pc = 0x1c96d8u;

    // 0x1c96d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c96d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96dc: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1c96dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c96e0u;
}
