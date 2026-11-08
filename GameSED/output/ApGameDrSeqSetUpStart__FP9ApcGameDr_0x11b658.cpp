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

// Function: ApGameDrSeqSetUpStart__FP9ApcGameDr
// Address: 0x11b658 - 0x11b6b8
void ApGameDrSeqSetUpStart__FP9ApcGameDr_0x11b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApGameDrSeqSetUpStart__FP9ApcGameDr_0x11b658");
#endif

    switch (ctx->pc) {
        case 0x11b69cu: goto label_11b69c;
        case 0x11b6a8u: goto label_11b6a8;
        default: break;
    }

    ctx->pc = 0x11b658u;

    // 0x11b658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b65c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11b660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b664: 0x249020a0  addiu       $s0, $a0, 0x20A0
    ctx->pc = 0x11b664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8352));
    // 0x11b668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11b66c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11b66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b670: 0xac8340a4  sw          $v1, 0x40A4($a0)
    ctx->pc = 0x11b670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16548), GPR_U32(ctx, 3));
    // 0x11b674: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11b674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11b678: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x11b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x11b67c: 0x24a820c0  addiu       $t0, $a1, 0x20C0
    ctx->pc = 0x11b67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8384));
    // 0x11b680: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30
    ctx->pc = 0x11b680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
    // 0x11b684: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x11b684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x11b688: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x11b688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x11b68c: 0x240907f8  addiu       $t1, $zero, 0x7F8
    ctx->pc = 0x11b68cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x11b690: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x11b690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x11b694: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x11B694u;
    SET_GPR_U32(ctx, 31, 0x11B69Cu);
    ctx->pc = 0x11B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B694u;
    // 0x11b698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x11B694u, 0x11B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B69Cu;
label_11b69c:
    // 0x11b69c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b6a0: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x11B6A0u;
    SET_GPR_U32(ctx, 31, 0x11B6A8u);
    ctx->pc = 0x11B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B6A0u;
    // 0x11b6a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x11B6A0u, 0x11B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B6A8u;
label_11b6a8:
    // 0x11b6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b6ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6B0u;
        // 0x11b6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B6B8u;
}
