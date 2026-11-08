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

// Function: dpadd
// Address: 0x1c9f80 - 0x1c9fd8
void dpadd_0x1c9f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpadd_0x1c9f80");
#endif

    switch (ctx->pc) {
        case 0x1c9fa0u: goto label_1c9fa0;
        case 0x1c9fb0u: goto label_1c9fb0;
        case 0x1c9fc0u: goto label_1c9fc0;
        case 0x1c9fc8u: goto label_1c9fc8;
        default: break;
    }

    ctx->pc = 0x1c9f80u;

    // 0x1c9f80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c9f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c9f84: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1c9f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1c9f88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9f8c: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1c9f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1c9f90: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1c9f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1c9f94: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1c9f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1c9f98: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1C9F98u;
    SET_GPR_U32(ctx, 31, 0x1C9FA0u);
    ctx->pc = 0x1C9F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F98u;
    // 0x1c9f9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1C9F98u, 0x1C9FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FA0u;
label_1c9fa0:
    // 0x1c9fa0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1c9fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9fa4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1c9fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1c9fa8: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1C9FA8u;
    SET_GPR_U32(ctx, 31, 0x1C9FB0u);
    ctx->pc = 0x1C9FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9FA8u;
    // 0x1c9fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1C9FA8u, 0x1C9FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FB0u;
label_1c9fb0:
    // 0x1c9fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c9fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c9fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fb8: 0xc072748  jal         func_1C9D20
    ctx->pc = 0x1C9FB8u;
    SET_GPR_U32(ctx, 31, 0x1C9FC0u);
    ctx->pc = 0x1C9FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9FB8u;
    // 0x1c9fbc: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9D20u, 0x1C9FB8u, 0x1C9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FC0u;
label_1c9fc0:
    // 0x1c9fc0: 0xc073950  jal         func_1CE540
    ctx->pc = 0x1C9FC0u;
    SET_GPR_U32(ctx, 31, 0x1C9FC8u);
    ctx->pc = 0x1C9FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9FC0u;
    // 0x1c9fc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE540u, 0x1C9FC0u, 0x1C9FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FC8u;
label_1c9fc8:
    // 0x1c9fc8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1c9fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9fcc: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1c9fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c9fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FD0u;
        // 0x1c9fd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9FD8u;
}
