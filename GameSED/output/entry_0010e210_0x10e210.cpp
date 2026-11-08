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

// Function: entry_0010e210
// Address: 0x10e210 - 0x10e21c
void entry_0010e210_0x10e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e210_0x10e210");
#endif

    ctx->pc = 0x10e210u;

    // 0x10e210: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x10e214: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x10e214u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x10e218: 0xac700044  sw          $s0, 0x44($v1)
    ctx->pc = 0x10e218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 16));
    ctx->pc = 0x10e21cu;
}
