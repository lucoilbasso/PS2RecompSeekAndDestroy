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

// Function: entry_001d275c
// Address: 0x1d275c - 0x1d2778
void entry_001d275c_0x1d275c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d275c_0x1d275c");
#endif

    ctx->pc = 0x1d275cu;

    // 0x1d275c: 0xae7d0000  sw          $sp, 0x0($s3)
    ctx->pc = 0x1d275cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 29));
    // 0x1d2760: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x1d2760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x1d2764: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2768: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d276c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2774: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1d2774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x1d2778u;
}
