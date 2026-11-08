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

// Function: entry_00190740
// Address: 0x190740 - 0x190784
void entry_00190740_0x190740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190740_0x190740");
#endif

    ctx->pc = 0x190740u;

label_190740:
    // 0x190740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190744: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x190744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x190748: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x190748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19074c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x19074cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x190750: 0x0  nop
    ctx->pc = 0x190750u;
    // NOP
    // 0x190754: 0x14c8fffa  bne         $a2, $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x190754u;
    {
        const bool branch_taken_0x190754 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x190758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190754u;
        // 0x190758: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190754) {
            ctx->pc = 0x190740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190740;
        }
    }
    ctx->pc = 0x19075Cu;
    // 0x19075c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x19075cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x190760: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x190760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x190764: 0x1528fff2  bne         $t1, $t0, . + 4 + (-0xE << 2)
    ctx->pc = 0x190764u;
    {
        const bool branch_taken_0x190764 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        ctx->pc = 0x190768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190764u;
        // 0x190768: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190764) {
            ctx->pc = 0x190730u;
            return;
        }
    }
    ctx->pc = 0x19076Cu;
    // 0x19076c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x19076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x190770: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x190770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x190774: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x190774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190778: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x190778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19077c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19077cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190780: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x190780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    ctx->pc = 0x190784u;
}
