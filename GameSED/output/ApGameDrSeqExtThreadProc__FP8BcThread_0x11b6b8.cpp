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

// Function: ApGameDrSeqExtThreadProc__FP8BcThread
// Address: 0x11b6b8 - 0x11b724
void ApGameDrSeqExtThreadProc__FP8BcThread_0x11b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApGameDrSeqExtThreadProc__FP8BcThread_0x11b6b8");
#endif

    switch (ctx->pc) {
        case 0x11b6f0u: goto label_11b6f0;
        case 0x11b710u: goto label_11b710;
        default: break;
    }

    ctx->pc = 0x11b6b8u;

    // 0x11b6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b6c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b6c8: 0x48800  sll         $s1, $a0, 0
    ctx->pc = 0x11b6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x11b6cc: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x11b6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11b6d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6d4: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x11b6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x11b6d8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x11b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x11b6dc: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x11b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x11b6e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B6E0u;
    {
        const bool branch_taken_0x11b6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6E0u;
        // 0x11b6e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6e0) {
            ctx->pc = 0x11B6F0u;
            goto label_11b6f0;
        }
    }
    ctx->pc = 0x11B6E8u;
    // 0x11b6e8: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B6E8u;
    SET_GPR_U32(ctx, 31, 0x11B6F0u);
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B6E8u, 0x11B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B6F0u;
label_11b6f0:
    // 0x11b6f0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11b6f4: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x11b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x11b6f8: 0xae0040a0  sw          $zero, 0x40A0($s0)
    ctx->pc = 0x11b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16544), GPR_U32(ctx, 0));
    // 0x11b6fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b700: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11b700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11b704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b708: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x11B708u;
    SET_GPR_U32(ctx, 31, 0x11B710u);
    ctx->pc = 0x11B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B708u;
    // 0x11b70c: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x11B708u, 0x11B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B710u;
label_11b710:
    // 0x11b710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b71c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B71Cu;
        // 0x11b720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B724u;
}
