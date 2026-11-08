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

// Function: caseD_22
// Address: 0x16a650 - 0x16a670
void caseD_22_0x16a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_22_0x16a650");
#endif

    ctx->pc = 0x16a650u;

    // 0x16a650: 0x8e240c98  lw          $a0, 0xC98($s1)
    ctx->pc = 0x16a650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3224)));
    // 0x16a654: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a658: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A658u;
    {
        const bool branch_taken_0x16a658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A658u;
        // 0x16a65c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a658) {
            ctx->pc = 0x16A670u;
            return;
        }
    }
    ctx->pc = 0x16A660u;
    // 0x16a660: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16a664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A664u;
    {
        const bool branch_taken_0x16a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A664u;
        // 0x16a668: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a664) {
            ctx->pc = 0x16A674u;
            return;
        }
    }
    ctx->pc = 0x16A66Cu;
    // 0x16a66c: 0x0  nop
    ctx->pc = 0x16a66cu;
    // NOP
    ctx->pc = 0x16a670u;
}
