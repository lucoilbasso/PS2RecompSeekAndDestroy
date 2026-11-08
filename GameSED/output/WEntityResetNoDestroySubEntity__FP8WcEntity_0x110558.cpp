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

// Function: WEntityResetNoDestroySubEntity__FP8WcEntity
// Address: 0x110558 - 0x1105b8
void WEntityResetNoDestroySubEntity__FP8WcEntity_0x110558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityResetNoDestroySubEntity__FP8WcEntity_0x110558");
#endif

    switch (ctx->pc) {
        case 0x110598u: goto label_110598;
        case 0x1105a0u: goto label_1105a0;
        default: break;
    }

    ctx->pc = 0x110558u;

label_110558:
    // 0x110558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11055c: 0x24030346  addiu       $v1, $zero, 0x346
    ctx->pc = 0x11055cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    // 0x110560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110564: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x110564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x110568: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x110568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11056c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x11056cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x110570: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x110570u;
    {
        const bool branch_taken_0x110570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x110570) {
            ctx->pc = 0x110574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110570u;
            // 0x110574: 0x8c900018  lw          $s0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110590u;
            goto label_110590;
        }
    }
    ctx->pc = 0x110578u;
    // 0x110578: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x110578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11057c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x11057cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x110580: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x110580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x110584: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x110584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x110588: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x110588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x11058c: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x11058cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_110590:
    // 0x110590: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110590u;
    {
        const bool branch_taken_0x110590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x110594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110590u;
        // 0x110594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110590) {
            ctx->pc = 0x1105A8u;
            goto label_1105a8;
        }
    }
    ctx->pc = 0x110598u;
label_110598:
    // 0x110598: 0xc044156  jal         func_110558
    ctx->pc = 0x110598u;
    SET_GPR_U32(ctx, 31, 0x1105A0u);
    ctx->pc = 0x11059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110598u;
    // 0x11059c: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110558u;
    goto label_110558;
    ctx->pc = 0x1105A0u;
label_1105a0:
    // 0x1105a0: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1105A0u;
    {
        const bool branch_taken_0x1105a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1105A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105A0u;
        // 0x1105a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105a0) {
            ctx->pc = 0x110598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110598;
        }
    }
    ctx->pc = 0x1105A8u;
label_1105a8:
    // 0x1105a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1105a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1105ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1105acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1105b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1105B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1105B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105B0u;
        // 0x1105b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1105B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1105B8u;
}
