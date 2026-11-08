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

// Function: WViewCreate__Fv
// Address: 0x1872c0 - 0x187314
void WViewCreate__Fv_0x1872c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WViewCreate__Fv_0x1872c0");
#endif

    switch (ctx->pc) {
        case 0x1872d4u: goto label_1872d4;
        case 0x1872dcu: goto label_1872dc;
        case 0x1872f4u: goto label_1872f4;
        case 0x187300u: goto label_187300;
        default: break;
    }

    ctx->pc = 0x1872c0u;

    // 0x1872c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1872c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1872c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1872c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1872c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1872c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1872cc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1872CCu;
    SET_GPR_U32(ctx, 31, 0x1872D4u);
    ctx->pc = 0x1872D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872CCu;
    // 0x1872d0: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1872CCu, 0x1872D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872D4u;
label_1872d4:
    // 0x1872d4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1872D4u;
    SET_GPR_U32(ctx, 31, 0x1872DCu);
    ctx->pc = 0x1872D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872D4u;
    // 0x1872d8: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1872D4u, 0x1872DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872DCu;
label_1872dc:
    // 0x1872dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1872dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1872e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1872e4: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x1872e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x1872e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1872e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872ec: 0xc061cc6  jal         func_187318
    ctx->pc = 0x1872ECu;
    SET_GPR_U32(ctx, 31, 0x1872F4u);
    ctx->pc = 0x1872F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872ECu;
    // 0x1872f0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187318u, 0x1872ECu, 0x1872F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872F4u;
label_1872f4:
    // 0x1872f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1872f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872f8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1872F8u;
    SET_GPR_U32(ctx, 31, 0x187300u);
    ctx->pc = 0x1872FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872F8u;
    // 0x1872fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1872F8u, 0x187300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187300u;
label_187300:
    // 0x187300: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187304: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18730c: 0x3e00008  jr          $ra
    ctx->pc = 0x18730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18730Cu;
        // 0x187310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187314u;
}
