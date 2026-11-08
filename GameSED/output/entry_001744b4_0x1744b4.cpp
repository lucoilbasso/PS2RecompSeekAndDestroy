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

// Function: entry_001744b4
// Address: 0x1744b4 - 0x1744c8
void entry_001744b4_0x1744b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001744b4_0x1744b4");
#endif

    ctx->pc = 0x1744b4u;

    // 0x1744b4: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1744b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1744b8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1744b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1744bc: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1744bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1744c0: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1744c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1744c4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1744c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    ctx->pc = 0x1744c8u;
}
