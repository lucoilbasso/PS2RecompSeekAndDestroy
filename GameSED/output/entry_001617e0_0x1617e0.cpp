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

// Function: entry_001617e0
// Address: 0x1617e0 - 0x1617ec
void entry_001617e0_0x1617e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001617e0_0x1617e0");
#endif

    ctx->pc = 0x1617e0u;

    // 0x1617e0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1617e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1617e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1617e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1617ecu;
}
