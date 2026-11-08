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

// Function: entry_001068b8
// Address: 0x1068b8 - 0x1068f8
void entry_001068b8_0x1068b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001068b8_0x1068b8");
#endif

    switch (ctx->pc) {
        case 0x1068d8u: goto label_1068d8;
        case 0x1068ecu: goto label_1068ec;
        case 0x1068f4u: goto label_1068f4;
        default: break;
    }

    ctx->pc = 0x1068b8u;

    // 0x1068b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1068b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1068bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1068bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1068c0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1068c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1068c4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1068c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1068c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1068c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068cc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1068ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1068d0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1068D0u;
    SET_GPR_U32(ctx, 31, 0x1068D8u);
    ctx->pc = 0x1068D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068D0u;
    // 0x1068d4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1068D0u, 0x1068D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1068D8u;
label_1068d8:
    // 0x1068d8: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x1068d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1068dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1068dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1068e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068e4: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x1068E4u;
    SET_GPR_U32(ctx, 31, 0x1068ECu);
    ctx->pc = 0x1068E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068E4u;
    // 0x1068e8: 0x2484015c  addiu       $a0, $a0, 0x15C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1068E4u, 0x1068ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1068ECu;
label_1068ec:
    // 0x1068ec: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1068ECu;
    SET_GPR_U32(ctx, 31, 0x1068F4u);
    ctx->pc = 0x1068F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068ECu;
    // 0x1068f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1068ECu, 0x1068F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1068F4u;
label_1068f4:
    // 0x1068f4: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x1068f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x1068f8u;
}
