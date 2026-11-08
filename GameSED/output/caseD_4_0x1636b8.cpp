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

// Function: caseD_4
// Address: 0x1636b8 - 0x1636d4
void caseD_4_0x1636b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1636b8");
#endif

    ctx->pc = 0x1636b8u;

    // 0x1636b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1636b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1636bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1636bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1636c0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1636C0u;
    {
        const bool branch_taken_0x1636c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1636C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636C0u;
        // 0x1636c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636c0) {
            ctx->pc = 0x1636D4u;
            return;
        }
    }
    ctx->pc = 0x1636C8u;
    // 0x1636c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1636c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1636cc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1636CCu;
    {
        const bool branch_taken_0x1636cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1636cc) {
            ctx->pc = 0x1636D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1636CCu;
            // 0x1636d0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1636E4u;
            return;
        }
    }
    ctx->pc = 0x1636D4u;
}
