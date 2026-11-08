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

// Function: entry_001cc470
// Address: 0x1cc470 - 0x1cc47c
void entry_001cc470_0x1cc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc470_0x1cc470");
#endif

    ctx->pc = 0x1cc470u;

    // 0x1cc470: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1cc470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cc474: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cc474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cc478: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cc478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1cc47cu;
}
