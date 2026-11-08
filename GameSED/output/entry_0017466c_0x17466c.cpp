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

// Function: entry_0017466c
// Address: 0x17466c - 0x174678
void entry_0017466c_0x17466c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017466c_0x17466c");
#endif

    ctx->pc = 0x17466cu;

    // 0x17466c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x17466cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x174670: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x174670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x174674: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x174674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    ctx->pc = 0x174678u;
}
