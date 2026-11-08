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

// Function: entry_001239f8
// Address: 0x1239f8 - 0x123a10
void entry_001239f8_0x1239f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001239f8_0x1239f8");
#endif

    ctx->pc = 0x1239f8u;

    // 0x1239f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1239f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1239fc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1239fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x123a00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x123a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123a04: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x123a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x123a08: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x123a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x123a0c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x123a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x123a10u;
}
