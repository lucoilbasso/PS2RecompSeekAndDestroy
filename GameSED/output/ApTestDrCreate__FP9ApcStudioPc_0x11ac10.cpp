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

// Function: ApTestDrCreate__FP9ApcStudioPc
// Address: 0x11ac10 - 0x11ac84
void ApTestDrCreate__FP9ApcStudioPc_0x11ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTestDrCreate__FP9ApcStudioPc_0x11ac10");
#endif

    switch (ctx->pc) {
        case 0x11ac34u: goto label_11ac34;
        case 0x11ac3cu: goto label_11ac3c;
        case 0x11ac5cu: goto label_11ac5c;
        case 0x11ac68u: goto label_11ac68;
        default: break;
    }

    ctx->pc = 0x11ac10u;

    // 0x11ac10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ac14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11ac18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ac18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac1c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x11ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11ac20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ac24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11ac28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11ac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11ac2c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x11AC2Cu;
    SET_GPR_U32(ctx, 31, 0x11AC34u);
    ctx->pc = 0x11AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC2Cu;
    // 0x11ac30: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x11AC2Cu, 0x11AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC34u;
label_11ac34:
    // 0x11ac34: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x11AC34u;
    SET_GPR_U32(ctx, 31, 0x11AC3Cu);
    ctx->pc = 0x11AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC34u;
    // 0x11ac38: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x11AC34u, 0x11AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC3Cu;
label_11ac3c:
    // 0x11ac3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11ac3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ac40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac44: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11ac48: 0x2442e7f8  addiu       $v0, $v0, -0x1808
    ctx->pc = 0x11ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961144));
    // 0x11ac4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11ac4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac50: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x11ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11ac54: 0xc046b22  jal         func_11AC88
    ctx->pc = 0x11AC54u;
    SET_GPR_U32(ctx, 31, 0x11AC5Cu);
    ctx->pc = 0x11AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC54u;
    // 0x11ac58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AC88u, 0x11AC54u, 0x11AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC5Cu;
label_11ac5c:
    // 0x11ac5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac60: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x11AC60u;
    SET_GPR_U32(ctx, 31, 0x11AC68u);
    ctx->pc = 0x11AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC60u;
    // 0x11ac64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x11AC60u, 0x11AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC68u;
label_11ac68:
    // 0x11ac68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11ac68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11ac6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ac70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ac70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ac74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11ac74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ac78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11ac78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11ac7c: 0x3e00008  jr          $ra
    ctx->pc = 0x11AC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC7Cu;
        // 0x11ac80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AC84u;
}
