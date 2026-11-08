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

// Function: SBMemPMgrExist__FP8BMemPoolPv
// Address: 0x1a0368 - 0x1a03d4
void SBMemPMgrExist__FP8BMemPoolPv_0x1a0368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SBMemPMgrExist__FP8BMemPoolPv_0x1a0368");
#endif

    switch (ctx->pc) {
        case 0x1a0398u: goto label_1a0398;
        default: break;
    }

    ctx->pc = 0x1a0368u;

    // 0x1a0368: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a0368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a036c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a036cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1a0370: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a0374: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a0374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0378: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a0378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a037c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A037Cu;
    {
        const bool branch_taken_0x1a037c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A037Cu;
        // 0x1a0380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a037c) {
            ctx->pc = 0x1A03CCu;
            goto label_1a03cc;
        }
    }
    ctx->pc = 0x1A0384u;
    // 0x1a0384: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x1a0384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x1a0388: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x1a0388u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x1a038c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a038cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1a0390: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x1a0390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1a0394: 0x0  nop
    ctx->pc = 0x1a0394u;
    // NOP
label_1a0398:
    // 0x1a0398: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0398u;
    {
        const bool branch_taken_0x1a0398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0398) {
            ctx->pc = 0x1A039Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0398u;
            // 0x1a039c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A03B0u;
            goto label_1a03b0;
        }
    }
    ctx->pc = 0x1A03A0u;
    // 0x1a03a0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1a03a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a03a4: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A03A4u;
    {
        const bool branch_taken_0x1a03a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03A4u;
        // 0x1a03a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03a4) {
            ctx->pc = 0x1A03CCu;
            goto label_1a03cc;
        }
    }
    ctx->pc = 0x1A03ACu;
    // 0x1a03ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a03acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a03b0:
    // 0x1a03b0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1a03b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1a03b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a03b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a03b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a03b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a03bc: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x1a03bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1a03c0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A03C0u;
    {
        const bool branch_taken_0x1a03c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a03c0) {
            ctx->pc = 0x1A03C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A03C0u;
            // 0x1a03c4: 0x671024  and         $v0, $v1, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0398;
        }
    }
    ctx->pc = 0x1A03C8u;
    // 0x1a03c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a03c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a03cc:
    // 0x1a03cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A03CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A03CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A03D4u;
}
