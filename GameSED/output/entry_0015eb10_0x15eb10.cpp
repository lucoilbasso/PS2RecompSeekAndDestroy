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

// Function: entry_0015eb10
// Address: 0x15eb10 - 0x15eb38
void entry_0015eb10_0x15eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb10_0x15eb10");
#endif

    ctx->pc = 0x15eb10u;

label_15eb10:
    // 0x15eb10: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x15eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x15eb14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15eb18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15eb1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15eb20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15eb24: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EB24u;
    {
        const bool branch_taken_0x15eb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB24u;
        // 0x15eb28: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb24) {
            ctx->pc = 0x15EB38u;
            return;
        }
    }
    ctx->pc = 0x15EB2Cu;
    // 0x15eb2c: 0x1445fff8  bne         $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15EB2Cu;
    {
        const bool branch_taken_0x15eb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x15EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB2Cu;
        // 0x15eb30: 0xac820200  sw          $v0, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb2c) {
            ctx->pc = 0x15EB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15eb10;
        }
    }
    ctx->pc = 0x15EB34u;
    // 0x15eb34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15eb34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15eb38u;
}
