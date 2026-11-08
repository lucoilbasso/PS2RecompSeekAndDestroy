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

// Function: WMonitorStoreImage__FPUI80P15WMonitorBufInfoP7IRect16
// Address: 0x1773d0 - 0x17744c
void WMonitorStoreImage__FPUI80P15WMonitorBufInfoP7IRect16_0x1773d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMonitorStoreImage__FPUI80P15WMonitorBufInfoP7IRect16_0x1773d0");
#endif

    switch (ctx->pc) {
        case 0x177408u: goto label_177408;
        case 0x177410u: goto label_177410;
        case 0x177420u: goto label_177420;
        case 0x17742cu: goto label_17742c;
        default: break;
    }

    ctx->pc = 0x1773d0u;

    // 0x1773d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1773d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1773d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1773d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773d8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1773d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1773dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1773dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773e0: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1773e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1773e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1773e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773e8: 0x84cb0006  lh          $t3, 0x6($a2)
    ctx->pc = 0x1773e8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1773ec: 0x84c80000  lh          $t0, 0x0($a2)
    ctx->pc = 0x1773ecu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1773f0: 0x84c90002  lh          $t1, 0x2($a2)
    ctx->pc = 0x1773f0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1773f4: 0x84ca0004  lh          $t2, 0x4($a2)
    ctx->pc = 0x1773f4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1773f8: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x1773f8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1773fc: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1773fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177400: 0xc06acf0  jal         func_1AB3C0
    ctx->pc = 0x177400u;
    SET_GPR_U32(ctx, 31, 0x177408u);
    ctx->pc = 0x177404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177400u;
    // 0x177404: 0x84460002  lh          $a2, 0x2($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3C0u, 0x177400u, 0x177408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177408u;
label_177408:
    // 0x177408: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x177408u;
    SET_GPR_U32(ctx, 31, 0x177410u);
    ctx->pc = 0x17740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177408u;
    // 0x17740c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x177408u, 0x177410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177410u;
label_177410:
    // 0x177410: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x177410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x177414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x177414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177418: 0xc06b1f6  jal         func_1AC7D8
    ctx->pc = 0x177418u;
    SET_GPR_U32(ctx, 31, 0x177420u);
    ctx->pc = 0x17741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177418u;
    // 0x17741c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x177418u, 0x177420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177420u;
label_177420:
    // 0x177420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177424: 0xc06ad40  jal         func_1AB500
    ctx->pc = 0x177424u;
    SET_GPR_U32(ctx, 31, 0x17742Cu);
    ctx->pc = 0x177428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177424u;
    // 0x177428: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB500u, 0x177424u, 0x17742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17742Cu;
label_17742c:
    // 0x17742c: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x17742cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x177430: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x177430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x177434: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x177434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177438: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x177438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17743c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x17743cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x177440: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x177440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x177444: 0x3e00008  jr          $ra
    ctx->pc = 0x177444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177444u;
        // 0x177448: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17744Cu;
}
