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

// Function: WaitDma
// Address: 0x1ac0b0 - 0x1ac120
void WaitDma_0x1ac0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WaitDma_0x1ac0b0");
#endif

    switch (ctx->pc) {
        case 0x1ac0e0u: goto label_1ac0e0;
        case 0x1ac0f0u: goto label_1ac0f0;
        case 0x1ac0f8u: goto label_1ac0f8;
        default: break;
    }

    ctx->pc = 0x1ac0b0u;

    // 0x1ac0b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ac0b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ac0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ac0b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ac0bc: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x1ac0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x1ac0c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ac0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ac0c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac0c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ac0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ac0cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ac0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ac0d0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1ac0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1ac0d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AC0D4u;
    {
        const bool branch_taken_0x1ac0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0D4u;
        // 0x1ac0d8: 0x3c120026  lui         $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0d4) {
            ctx->pc = 0x1AC108u;
            goto label_1ac108;
        }
    }
    ctx->pc = 0x1AC0DCu;
    // 0x1ac0dc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ac0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ac0e0:
    // 0x1ac0e0: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC0E0u;
    {
        const bool branch_taken_0x1ac0e0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1ac0e0) {
            ctx->pc = 0x1AC0F8u;
            goto label_1ac0f8;
        }
    }
    ctx->pc = 0x1AC0E8u;
    // 0x1ac0e8: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AC0E8u;
    SET_GPR_U32(ctx, 31, 0x1AC0F0u);
    ctx->pc = 0x1AC0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC0E8u;
    // 0x1ac0ec: 0x264499b0  addiu       $a0, $s2, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AC0E8u, 0x1AC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC0F0u;
label_1ac0f0:
    // 0x1ac0f0: 0xc06b212  jal         func_1AC848
    ctx->pc = 0x1AC0F0u;
    SET_GPR_U32(ctx, 31, 0x1AC0F8u);
    ctx->pc = 0x1AC0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC0F0u;
    // 0x1ac0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC848u, 0x1AC0F0u, 0x1AC0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC0F8u;
label_1ac0f8:
    // 0x1ac0f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ac0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ac0fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1ac0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1ac100: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AC100u;
    {
        const bool branch_taken_0x1ac100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC100u;
        // 0x1ac104: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac100) {
            ctx->pc = 0x1AC0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac0e0;
        }
    }
    ctx->pc = 0x1AC108u;
label_1ac108:
    // 0x1ac108: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ac108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac10c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ac10cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac110: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ac110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac118: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC118u;
        // 0x1ac11c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC120u;
}
