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

// Function: Ap2DPanelCreate__Fv
// Address: 0x10bfa8 - 0x10bffc
void Ap2DPanelCreate__Fv_0x10bfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ap2DPanelCreate__Fv_0x10bfa8");
#endif

    switch (ctx->pc) {
        case 0x10bfbcu: goto label_10bfbc;
        case 0x10bfc4u: goto label_10bfc4;
        case 0x10bfdcu: goto label_10bfdc;
        case 0x10bfe8u: goto label_10bfe8;
        default: break;
    }

    ctx->pc = 0x10bfa8u;

    // 0x10bfa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bfac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bfb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10bfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10bfb4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10BFB4u;
    SET_GPR_U32(ctx, 31, 0x10BFBCu);
    ctx->pc = 0x10BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFB4u;
    // 0x10bfb8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10BFB4u, 0x10BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFBCu;
label_10bfbc:
    // 0x10bfbc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10BFBCu;
    SET_GPR_U32(ctx, 31, 0x10BFC4u);
    ctx->pc = 0x10BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFBCu;
    // 0x10bfc0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10BFBCu, 0x10BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFC4u;
label_10bfc4:
    // 0x10bfc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bfc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfc8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10bfcc: 0x2442e6a8  addiu       $v0, $v0, -0x1958
    ctx->pc = 0x10bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960808));
    // 0x10bfd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfd4: 0xc043000  jal         func_10C000
    ctx->pc = 0x10BFD4u;
    SET_GPR_U32(ctx, 31, 0x10BFDCu);
    ctx->pc = 0x10BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFD4u;
    // 0x10bfd8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C000u, 0x10BFD4u, 0x10BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFDCu;
label_10bfdc:
    // 0x10bfdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfe0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x10BFE0u;
    SET_GPR_U32(ctx, 31, 0x10BFE8u);
    ctx->pc = 0x10BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFE0u;
    // 0x10bfe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10BFE0u, 0x10BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFE8u;
label_10bfe8:
    // 0x10bfe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10bfe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10bfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10bff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bff4: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BFF4u;
        // 0x10bff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BFFCu;
}
