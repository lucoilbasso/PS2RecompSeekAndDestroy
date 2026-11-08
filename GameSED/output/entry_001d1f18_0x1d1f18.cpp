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

// Function: entry_001d1f18
// Address: 0x1d1f18 - 0x1d1f40
void entry_001d1f18_0x1d1f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1f18_0x1d1f18");
#endif

    ctx->pc = 0x1d1f18u;

    // 0x1d1f18: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1F18u;
    {
        const bool branch_taken_0x1d1f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1f18) {
            ctx->pc = 0x1D1F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1F18u;
            // 0x1d1f1c: 0x2a220066  slti        $v0, $s1, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1F40u;
            return;
        }
    }
    ctx->pc = 0x1D1F20u;
    // 0x1d1f20: 0xae7e0004  sw          $fp, 0x4($s3)
    ctx->pc = 0x1d1f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 30));
    // 0x1d1f24: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1d1f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x1d1f28: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1f2c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1f30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1f34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1f38: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x1D1F38u;
    {
        const bool branch_taken_0x1d1f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F38u;
        // 0x1d1f3c: 0x7e1821  addu        $v1, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f38) {
            ctx->pc = 0x1D2778u;
            return;
        }
    }
    ctx->pc = 0x1D1F40u;
}
