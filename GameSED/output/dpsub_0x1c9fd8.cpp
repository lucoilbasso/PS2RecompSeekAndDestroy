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

// Function: dpsub
// Address: 0x1c9fd8 - 0x1ca03c
void dpsub_0x1c9fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpsub_0x1c9fd8");
#endif

    switch (ctx->pc) {
        case 0x1c9ff8u: goto label_1c9ff8;
        case 0x1ca008u: goto label_1ca008;
        case 0x1ca024u: goto label_1ca024;
        case 0x1ca02cu: goto label_1ca02c;
        default: break;
    }

    ctx->pc = 0x1c9fd8u;

    // 0x1c9fd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c9fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c9fdc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1c9fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1c9fe0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9fe4: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1c9fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1c9fe8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1c9fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1c9fec: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1c9fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1c9ff0: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1C9FF0u;
    SET_GPR_U32(ctx, 31, 0x1C9FF8u);
    ctx->pc = 0x1C9FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9FF0u;
    // 0x1c9ff4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1C9FF0u, 0x1C9FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FF8u;
label_1c9ff8:
    // 0x1c9ff8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1c9ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9ffc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1c9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1ca000: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1CA000u;
    SET_GPR_U32(ctx, 31, 0x1CA008u);
    ctx->pc = 0x1CA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA000u;
    // 0x1ca004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1CA000u, 0x1CA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA008u;
label_1ca008:
    // 0x1ca008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca00c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1ca00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ca010: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ca010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca014: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1ca014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ca018: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ca018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ca01c: 0xc072748  jal         func_1C9D20
    ctx->pc = 0x1CA01Cu;
    SET_GPR_U32(ctx, 31, 0x1CA024u);
    ctx->pc = 0x1CA020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA01Cu;
    // 0x1ca020: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9D20u, 0x1CA01Cu, 0x1CA024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA024u;
label_1ca024:
    // 0x1ca024: 0xc073950  jal         func_1CE540
    ctx->pc = 0x1CA024u;
    SET_GPR_U32(ctx, 31, 0x1CA02Cu);
    ctx->pc = 0x1CA028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA024u;
    // 0x1ca028: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE540u, 0x1CA024u, 0x1CA02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA02Cu;
label_1ca02c:
    // 0x1ca02c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1ca02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca030: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1ca030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ca034: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA034u;
        // 0x1ca038: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA03Cu;
}
