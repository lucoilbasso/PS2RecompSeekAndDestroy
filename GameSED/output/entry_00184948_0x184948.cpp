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

// Function: entry_00184948
// Address: 0x184948 - 0x184954
void entry_00184948_0x184948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184948_0x184948");
#endif

    ctx->pc = 0x184948u;

    // 0x184948: 0x6d182d  daddu       $v1, $v1, $t5
    ctx->pc = 0x184948u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 13));
    // 0x18494c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x18494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x184950: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x184950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->pc = 0x184954u;
}
