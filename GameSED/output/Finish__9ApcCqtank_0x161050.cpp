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

// Function: Finish__9ApcCqtank
// Address: 0x161050 - 0x1610e8
void Finish__9ApcCqtank_0x161050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9ApcCqtank_0x161050");
#endif

    switch (ctx->pc) {
        case 0x161080u: goto label_161080;
        case 0x161094u: goto label_161094;
        case 0x1610a8u: goto label_1610a8;
        case 0x1610d4u: goto label_1610d4;
        default: break;
    }

    ctx->pc = 0x161050u;

    // 0x161050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x161054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161058: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x161058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16105c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16105cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161064: 0x263019c0  addiu       $s0, $s1, 0x19C0
    ctx->pc = 0x161064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6592));
    // 0x161068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16106c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x161070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161070u;
    {
        const bool branch_taken_0x161070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161070u;
        // 0x161074: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161070) {
            ctx->pc = 0x161080u;
            goto label_161080;
        }
    }
    ctx->pc = 0x161078u;
    // 0x161078: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x161078u;
    SET_GPR_U32(ctx, 31, 0x161080u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x161078u, 0x161080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161080u;
label_161080:
    // 0x161080: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x161084: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x161084u;
    {
        const bool branch_taken_0x161084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x161084) {
            ctx->pc = 0x161088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161084u;
            // 0x161088: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161098u;
            goto label_161098;
        }
    }
    ctx->pc = 0x16108Cu;
    // 0x16108c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x16108Cu;
    SET_GPR_U32(ctx, 31, 0x161094u);
    ctx->pc = 0x161090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16108Cu;
    // 0x161090: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x16108Cu, 0x161094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161094u;
label_161094:
    // 0x161094: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x161094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_161098:
    // 0x161098: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161098u;
    {
        const bool branch_taken_0x161098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161098u;
        // 0x16109c: 0x262211b0  addiu       $v0, $s1, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161098) {
            ctx->pc = 0x1610ACu;
            goto label_1610ac;
        }
    }
    ctx->pc = 0x1610A0u;
    // 0x1610a0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1610A0u;
    SET_GPR_U32(ctx, 31, 0x1610A8u);
    ctx->pc = 0x1610A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1610A0u;
    // 0x1610a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1610A0u, 0x1610A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610A8u;
label_1610a8:
    // 0x1610a8: 0x262211b0  addiu       $v0, $s1, 0x11B0
    ctx->pc = 0x1610a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4528));
label_1610ac:
    // 0x1610ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1610acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1610b0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1610b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1610b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1610b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610b8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1610b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1610bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1610bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1610c0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1610c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1610c4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1610c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1610c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1610c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1610cc: 0xc065e78  jal         func_1979E0
    ctx->pc = 0x1610CCu;
    SET_GPR_U32(ctx, 31, 0x1610D4u);
    ctx->pc = 0x1610D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1610CCu;
    // 0x1610d0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1979E0u, 0x1610CCu, 0x1610D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610D4u;
label_1610d4:
    // 0x1610d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1610d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1610d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1610d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1610dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1610dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1610e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1610E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1610E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610E0u;
        // 0x1610e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1610E8u;
}
