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

// Function: Create__7ApcTankP8ApcRsc3DP9ApcSCDEnti
// Address: 0x1d9a60 - 0x1d9ae4
void Create__7ApcTankP8ApcRsc3DP9ApcSCDEnti_0x1d9a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__7ApcTankP8ApcRsc3DP9ApcSCDEnti_0x1d9a60");
#endif

    switch (ctx->pc) {
        case 0x1d9a8cu: goto label_1d9a8c;
        case 0x1d9a94u: goto label_1d9a94;
        case 0x1d9ab8u: goto label_1d9ab8;
        case 0x1d9ac4u: goto label_1d9ac4;
        default: break;
    }

    ctx->pc = 0x1d9a60u;

    // 0x1d9a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9a64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9a68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a6c: 0x24041118  addiu       $a0, $zero, 0x1118
    ctx->pc = 0x1d9a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x1d9a70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9a74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9a78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d9a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9a80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9a84: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1D9A84u;
    SET_GPR_U32(ctx, 31, 0x1D9A8Cu);
    ctx->pc = 0x1D9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A84u;
    // 0x1d9a88: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1D9A84u, 0x1D9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A8Cu;
label_1d9a8c:
    // 0x1d9a8c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1D9A8Cu;
    SET_GPR_U32(ctx, 31, 0x1D9A94u);
    ctx->pc = 0x1D9A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A8Cu;
    // 0x1d9a90: 0x240408b0  addiu       $a0, $zero, 0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1D9A8Cu, 0x1D9A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A94u;
label_1d9a94:
    // 0x1d9a94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a9c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d9aa0: 0x2442f038  addiu       $v0, $v0, -0xFC8
    ctx->pc = 0x1d9aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963256));
    // 0x1d9aa4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d9aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9aa8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d9aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d9aac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d9aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ab0: 0xc053508  jal         func_14D420
    ctx->pc = 0x1D9AB0u;
    SET_GPR_U32(ctx, 31, 0x1D9AB8u);
    ctx->pc = 0x1D9AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AB0u;
    // 0x1d9ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D420u, 0x1D9AB0u, 0x1D9AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AB8u;
label_1d9ab8:
    // 0x1d9ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9abc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1D9ABCu;
    SET_GPR_U32(ctx, 31, 0x1D9AC4u);
    ctx->pc = 0x1D9AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9ABCu;
    // 0x1d9ac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1D9ABCu, 0x1D9AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AC4u;
label_1d9ac4:
    // 0x1d9ac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d9ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ad0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9ad4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9ad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9ad8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ADCu;
        // 0x1d9ae0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9AE4u;
}
