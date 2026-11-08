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

// Function: caseD_3
// Address: 0x16c8c0 - 0x16c8f8
void caseD_3_0x16c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x16c8c0");
#endif

    ctx->pc = 0x16c8c0u;

    // 0x16c8c0: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x16c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x16c8c4: 0x8c500074  lw          $s0, 0x74($v0)
    ctx->pc = 0x16c8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x16c8c8: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x16C8C8u;
    {
        const bool branch_taken_0x16c8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8c8) {
            ctx->pc = 0x16C8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C8C8u;
            // 0x16c8cc: 0xae2001e0  sw          $zero, 0x1E0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C974u;
            return;
        }
    }
    ctx->pc = 0x16C8D0u;
    // 0x16c8d0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16c8d4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16c8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16c8d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c8dc: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x16c8dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16c8e0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x16c8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16c8e4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16c8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16c8e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C8E8u;
    {
        const bool branch_taken_0x16c8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8E8u;
        // 0x16c8ec: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8e8) {
            ctx->pc = 0x16C8F8u;
            return;
        }
    }
    ctx->pc = 0x16C8F0u;
    // 0x16c8f0: 0xc061920  jal         func_186480
    ctx->pc = 0x16C8F0u;
    SET_GPR_U32(ctx, 31, 0x16C8F8u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16C8F0u, 0x16C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8F8u;
}
