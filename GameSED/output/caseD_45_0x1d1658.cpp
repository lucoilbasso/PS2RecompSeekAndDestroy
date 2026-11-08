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

// Function: caseD_45
// Address: 0x1d1658 - 0x1d1670
void caseD_45_0x1d1658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_45_0x1d1658");
#endif

    ctx->pc = 0x1d1658u;

    // 0x1d1658: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d1658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d165c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D165Cu;
    {
        const bool branch_taken_0x1d165c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D165Cu;
        // 0x1d1660: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d165c) {
            ctx->pc = 0x1D1670u;
            return;
        }
    }
    ctx->pc = 0x1D1664u;
    // 0x1d1664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1664u;
    {
        const bool branch_taken_0x1d1664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1664u;
        // 0x1d1668: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1664) {
            ctx->pc = 0x1D1688u;
            return;
        }
    }
    ctx->pc = 0x1D166Cu;
    // 0x1d166c: 0x0  nop
    ctx->pc = 0x1d166cu;
    // NOP
    ctx->pc = 0x1d1670u;
}
