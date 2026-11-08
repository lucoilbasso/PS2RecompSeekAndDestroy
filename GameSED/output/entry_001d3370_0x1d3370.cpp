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

// Function: entry_001d3370
// Address: 0x1d3370 - 0x1d3388
void entry_001d3370_0x1d3370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3370_0x1d3370");
#endif

    ctx->pc = 0x1d3370u;

    // 0x1d3370: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d3370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3374: 0x1e1823  negu        $v1, $fp
    ctx->pc = 0x1d3374u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x1d3378: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x1d3378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x1d337c: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1d337cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1d3380: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1d3380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1d3384: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d3384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1d3388u;
}
