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

// Function: entry_00173678
// Address: 0x173678 - 0x1736b4
void entry_00173678_0x173678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173678_0x173678");
#endif

    ctx->pc = 0x173678u;

    // 0x173678: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x173678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17367c: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x17367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x173680: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173684: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x173684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x173688: 0x24620043  addiu       $v0, $v1, 0x43
    ctx->pc = 0x173688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 67));
    // 0x17368c: 0x24630013  addiu       $v1, $v1, 0x13
    ctx->pc = 0x17368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x173690: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x173690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x173694: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x173694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173698: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x173698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x17369c: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x17369cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x1736a0: 0x16460005  bne         $s2, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1736A0u;
    {
        const bool branch_taken_0x1736a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        ctx->pc = 0x1736A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736A0u;
        // 0x1736a4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1736a0) {
            ctx->pc = 0x1736B8u;
            return;
        }
    }
    ctx->pc = 0x1736A8u;
    // 0x1736a8: 0x24a20170  addiu       $v0, $a1, 0x170
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
    // 0x1736ac: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x1736acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1736b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1736b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    ctx->pc = 0x1736b4u;
}
