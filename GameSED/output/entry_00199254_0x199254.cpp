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

// Function: entry_00199254
// Address: 0x199254 - 0x1992f4
void entry_00199254_0x199254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199254_0x199254");
#endif

    switch (ctx->pc) {
        case 0x19925cu: goto label_19925c;
        case 0x199264u: goto label_199264;
        case 0x19926cu: goto label_19926c;
        case 0x199284u: goto label_199284;
        case 0x19928cu: goto label_19928c;
        case 0x199294u: goto label_199294;
        case 0x19929cu: goto label_19929c;
        case 0x1992c4u: goto label_1992c4;
        case 0x1992d8u: goto label_1992d8;
        case 0x1992f0u: goto label_1992f0;
        default: break;
    }

    ctx->pc = 0x199254u;

label_199254:
    // 0x199254: 0xc05dd18  jal         func_177460
label_199258:
    if (ctx->pc == 0x199258u) {
        ctx->pc = 0x199258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199254u;
        // 0x199258: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19925Cu;
        goto label_19925c;
    }
    ctx->pc = 0x199254u;
    SET_GPR_U32(ctx, 31, 0x19925Cu);
    ctx->pc = 0x199258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199254u;
    // 0x199258: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x199254u, 0x19925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19925Cu;
label_19925c:
    // 0x19925c: 0xc0664e0  jal         func_199380
label_199260:
    if (ctx->pc == 0x199260u) {
        ctx->pc = 0x199260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19925Cu;
        // 0x199260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199264u;
        goto label_199264;
    }
    ctx->pc = 0x19925Cu;
    SET_GPR_U32(ctx, 31, 0x199264u);
    ctx->pc = 0x199260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19925Cu;
    // 0x199260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199380u, 0x19925Cu, 0x199264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199264u;
label_199264:
    // 0x199264: 0xc05dd18  jal         func_177460
label_199268:
    if (ctx->pc == 0x199268u) {
        ctx->pc = 0x199268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199264u;
        // 0x199268: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19926Cu;
        goto label_19926c;
    }
    ctx->pc = 0x199264u;
    SET_GPR_U32(ctx, 31, 0x19926Cu);
    ctx->pc = 0x199268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199264u;
    // 0x199268: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x199264u, 0x19926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19926Cu;
label_19926c:
    // 0x19926c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x19926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_199270:
    // 0x199270: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x199270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_199274:
    // 0x199274: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x199274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_199278:
    // 0x199278: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x199278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_19927c:
    // 0x19927c: 0xc06bd28  jal         func_1AF4A0
label_199280:
    if (ctx->pc == 0x199280u) {
        ctx->pc = 0x199280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19927Cu;
        // 0x199280: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199284u;
        goto label_199284;
    }
    ctx->pc = 0x19927Cu;
    SET_GPR_U32(ctx, 31, 0x199284u);
    ctx->pc = 0x199280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19927Cu;
    // 0x199280: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19927Cu, 0x199284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199284u;
label_199284:
    // 0x199284: 0xc06bd28  jal         func_1AF4A0
label_199288:
    if (ctx->pc == 0x199288u) {
        ctx->pc = 0x199288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199284u;
        // 0x199288: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19928Cu;
        goto label_19928c;
    }
    ctx->pc = 0x199284u;
    SET_GPR_U32(ctx, 31, 0x19928Cu);
    ctx->pc = 0x199288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199284u;
    // 0x199288: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x199284u, 0x19928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19928Cu;
label_19928c:
    // 0x19928c: 0xc06bd28  jal         func_1AF4A0
label_199290:
    if (ctx->pc == 0x199290u) {
        ctx->pc = 0x199290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19928Cu;
        // 0x199290: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199294u;
        goto label_199294;
    }
    ctx->pc = 0x19928Cu;
    SET_GPR_U32(ctx, 31, 0x199294u);
    ctx->pc = 0x199290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19928Cu;
    // 0x199290: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19928Cu, 0x199294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199294u;
label_199294:
    // 0x199294: 0xc06bd28  jal         func_1AF4A0
label_199298:
    if (ctx->pc == 0x199298u) {
        ctx->pc = 0x199298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199294u;
        // 0x199298: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19929Cu;
        goto label_19929c;
    }
    ctx->pc = 0x199294u;
    SET_GPR_U32(ctx, 31, 0x19929Cu);
    ctx->pc = 0x199298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199294u;
    // 0x199298: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x199294u, 0x19929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19929Cu;
label_19929c:
    // 0x19929c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1992a0:
    // 0x1992a0: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x1992a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
label_1992a4:
    // 0x1992a4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1992a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1992a8:
    // 0x1992a8: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1992a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_1992ac:
    // 0x1992ac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1992acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1992b0:
    // 0x1992b0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1992b4:
    if (ctx->pc == 0x1992B4u) {
        ctx->pc = 0x1992B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992B0u;
        // 0x1992b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992B8u;
        goto label_1992b8;
    }
    ctx->pc = 0x1992B0u;
    {
        const bool branch_taken_0x1992b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1992b0) {
            ctx->pc = 0x1992B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1992B0u;
            // 0x1992b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1992F4u;
            return;
        }
    }
    ctx->pc = 0x1992B8u;
label_1992b8:
    // 0x1992b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1992b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1992bc:
    // 0x1992bc: 0xc05d9ee  jal         func_1767B8
label_1992c0:
    if (ctx->pc == 0x1992C0u) {
        ctx->pc = 0x1992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992BCu;
        // 0x1992c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992C4u;
        goto label_1992c4;
    }
    ctx->pc = 0x1992BCu;
    SET_GPR_U32(ctx, 31, 0x1992C4u);
    ctx->pc = 0x1992C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992BCu;
    // 0x1992c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1767B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1767B8u, 0x1992BCu, 0x1992C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992C4u;
label_1992c4:
    // 0x1992c4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1992c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1992c8:
    // 0x1992c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1992c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1992cc:
    // 0x1992cc: 0x8c50002c  lw          $s0, 0x2C($v0)
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1992d0:
    // 0x1992d0: 0xc05dcda  jal         func_177368
label_1992d4:
    if (ctx->pc == 0x1992D4u) {
        ctx->pc = 0x1992D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992D0u;
        // 0x1992d4: 0x8e05015c  lw          $a1, 0x15C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992D8u;
        goto label_1992d8;
    }
    ctx->pc = 0x1992D0u;
    SET_GPR_U32(ctx, 31, 0x1992D8u);
    ctx->pc = 0x1992D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992D0u;
    // 0x1992d4: 0x8e05015c  lw          $a1, 0x15C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177368u, 0x1992D0u, 0x1992D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992D8u;
label_1992d8:
    // 0x1992d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1992d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1992dc:
    // 0x1992dc: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x1992dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_1992e0:
    // 0x1992e0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1992e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1992e4:
    // 0x1992e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1992e8:
    // 0x1992e8: 0x40f809  jalr        $v0
label_1992ec:
    if (ctx->pc == 0x1992ECu) {
        ctx->pc = 0x1992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992E8u;
        // 0x1992ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992F0u;
        goto label_1992f0;
    }
    ctx->pc = 0x1992E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1992F0u);
        ctx->pc = 0x1992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992E8u;
        // 0x1992ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1992E8u, 0x1992F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1992F0u;
label_1992f0:
    // 0x1992f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1992f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1992f4u;
}
