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

// Function: caseD_6
// Address: 0x168e70 - 0x168e84
void caseD_6_0x168e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x168e70");
#endif

    ctx->pc = 0x168e70u;

    // 0x168e70: 0x10c00097  beqz        $a2, . + 4 + (0x97 << 2)
    ctx->pc = 0x168E70u;
    {
        const bool branch_taken_0x168e70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E70u;
        // 0x168e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e70) {
            ctx->pc = 0x1690D0u;
            return;
        }
    }
    ctx->pc = 0x168E78u;
    // 0x168e78: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x168e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x168e7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168E7Cu;
    {
        const bool branch_taken_0x168e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E7Cu;
        // 0x168e80: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e7c) {
            ctx->pc = 0x168E90u;
            return;
        }
    }
    ctx->pc = 0x168E84u;
}
