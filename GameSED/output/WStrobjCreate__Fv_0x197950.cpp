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

// Function: WStrobjCreate__Fv
// Address: 0x197950 - 0x1979a4
void WStrobjCreate__Fv_0x197950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WStrobjCreate__Fv_0x197950");
#endif

    switch (ctx->pc) {
        case 0x197964u: goto label_197964;
        case 0x19796cu: goto label_19796c;
        case 0x197984u: goto label_197984;
        case 0x197990u: goto label_197990;
        default: break;
    }

    ctx->pc = 0x197950u;

    // 0x197950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197958: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x197958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19795c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x19795Cu;
    SET_GPR_U32(ctx, 31, 0x197964u);
    ctx->pc = 0x197960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19795Cu;
    // 0x197960: 0x24040846  addiu       $a0, $zero, 0x846 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2118));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x19795Cu, 0x197964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197964u;
label_197964:
    // 0x197964: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x197964u;
    SET_GPR_U32(ctx, 31, 0x19796Cu);
    ctx->pc = 0x197968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197964u;
    // 0x197968: 0x24040c00  addiu       $a0, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x197964u, 0x19796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19796Cu;
label_19796c:
    // 0x19796c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19796cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197970: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x197970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x197974: 0x244208a0  addiu       $v0, $v0, 0x8A0
    ctx->pc = 0x197974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
    // 0x197978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19797c: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x19797Cu;
    SET_GPR_U32(ctx, 31, 0x197984u);
    ctx->pc = 0x197980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19797Cu;
    // 0x197980: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1979A8u, 0x19797Cu, 0x197984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197984u;
label_197984:
    // 0x197984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197988: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x197988u;
    SET_GPR_U32(ctx, 31, 0x197990u);
    ctx->pc = 0x19798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197988u;
    // 0x19798c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x197988u, 0x197990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197990u;
label_197990:
    // 0x197990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x197990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197994: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x197994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19799c: 0x3e00008  jr          $ra
    ctx->pc = 0x19799Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1979A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19799Cu;
        // 0x1979a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19799Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1979A4u;
}
