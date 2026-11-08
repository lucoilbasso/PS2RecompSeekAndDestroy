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

// Function: ApRemoteWorkExec__Fb
// Address: 0x106990 - 0x106a08
void ApRemoteWorkExec__Fb_0x106990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRemoteWorkExec__Fb_0x106990");
#endif

    switch (ctx->pc) {
        case 0x1069b8u: goto label_1069b8;
        case 0x1069e4u: goto label_1069e4;
        default: break;
    }

    ctx->pc = 0x106990u;

    // 0x106990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106994: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x106994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x106998: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x106998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10699c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1069a0: 0x24500610  addiu       $s0, $v0, 0x610
    ctx->pc = 0x1069a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x1069a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1069a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1069a8: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1069a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1069ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1069acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1069b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1069b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069b4: 0x0  nop
    ctx->pc = 0x1069b4u;
    // NOP
label_1069b8:
    // 0x1069b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1069b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1069bc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1069BCu;
    {
        const bool branch_taken_0x1069bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1069bc) {
            ctx->pc = 0x1069C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1069BCu;
            // 0x1069c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1069E8u;
            goto label_1069e8;
        }
    }
    ctx->pc = 0x1069C4u;
    // 0x1069c4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1069C4u;
    {
        const bool branch_taken_0x1069c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1069c4) {
            ctx->pc = 0x1069DCu;
            goto label_1069dc;
        }
    }
    ctx->pc = 0x1069CCu;
    // 0x1069cc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1069ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1069d0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1069d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1069d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1069D4u;
    {
        const bool branch_taken_0x1069d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1069d4) {
            ctx->pc = 0x1069D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1069D4u;
            // 0x1069d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1069E8u;
            goto label_1069e8;
        }
    }
    ctx->pc = 0x1069DCu;
label_1069dc:
    // 0x1069dc: 0xc041aae  jal         func_106AB8
    ctx->pc = 0x1069DCu;
    SET_GPR_U32(ctx, 31, 0x1069E4u);
    ctx->pc = 0x1069E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1069DCu;
    // 0x1069e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AB8u, 0x1069DCu, 0x1069E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1069E4u;
label_1069e4:
    // 0x1069e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1069e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1069e8:
    // 0x1069e8: 0x621fff3  bgez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1069E8u;
    {
        const bool branch_taken_0x1069e8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1069ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069E8u;
        // 0x1069ec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069e8) {
            ctx->pc = 0x1069B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1069b8;
        }
    }
    ctx->pc = 0x1069F0u;
    // 0x1069f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1069f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1069f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1069f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1069f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1069f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1069fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1069fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106a00: 0x3e00008  jr          $ra
    ctx->pc = 0x106A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A00u;
        // 0x106a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106A08u;
}
