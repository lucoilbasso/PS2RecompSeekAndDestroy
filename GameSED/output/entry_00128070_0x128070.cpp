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

// Function: entry_00128070
// Address: 0x128070 - 0x12809c
void entry_00128070_0x128070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128070_0x128070");
#endif

    ctx->pc = 0x128070u;

    // 0x128070: 0x1482002b  bne         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x128070u;
    {
        const bool branch_taken_0x128070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x128074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128070u;
        // 0x128074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128070) {
            ctx->pc = 0x128120u;
            return;
        }
    }
    ctx->pc = 0x128078u;
    // 0x128078: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x128078u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12807c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128080: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x128080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x128084: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x128084u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x128088: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x128088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x12808c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12808Cu;
    {
        const bool branch_taken_0x12808c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12808Cu;
        // 0x128090: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12808c) {
            ctx->pc = 0x12809Cu;
            return;
        }
    }
    ctx->pc = 0x128094u;
    // 0x128094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x128094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128098: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x128098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12809cu;
}
