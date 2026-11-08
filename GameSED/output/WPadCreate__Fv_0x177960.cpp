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

// Function: WPadCreate__Fv
// Address: 0x177960 - 0x1779b4
void WPadCreate__Fv_0x177960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadCreate__Fv_0x177960");
#endif

    switch (ctx->pc) {
        case 0x177974u: goto label_177974;
        case 0x17797cu: goto label_17797c;
        case 0x177994u: goto label_177994;
        case 0x1779a0u: goto label_1779a0;
        default: break;
    }

    ctx->pc = 0x177960u;

    // 0x177960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17796c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17796Cu;
    SET_GPR_U32(ctx, 31, 0x177974u);
    ctx->pc = 0x177970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17796Cu;
    // 0x177970: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17796Cu, 0x177974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177974u;
label_177974:
    // 0x177974: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x177974u;
    SET_GPR_U32(ctx, 31, 0x17797Cu);
    ctx->pc = 0x177978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177974u;
    // 0x177978: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x177974u, 0x17797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17797Cu;
label_17797c:
    // 0x17797c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17797cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177980: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x177980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x177984: 0x2442f970  addiu       $v0, $v0, -0x690
    ctx->pc = 0x177984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965616));
    // 0x177988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17798c: 0xc05de6e  jal         func_1779B8
    ctx->pc = 0x17798Cu;
    SET_GPR_U32(ctx, 31, 0x177994u);
    ctx->pc = 0x177990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17798Cu;
    // 0x177990: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1779B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1779B8u, 0x17798Cu, 0x177994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177994u;
label_177994:
    // 0x177994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177998: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x177998u;
    SET_GPR_U32(ctx, 31, 0x1779A0u);
    ctx->pc = 0x17799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177998u;
    // 0x17799c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x177998u, 0x1779A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1779A0u;
label_1779a0:
    // 0x1779a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1779a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1779a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1779a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1779a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1779ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1779ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1779B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779ACu;
        // 0x1779b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1779ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1779B4u;
}
