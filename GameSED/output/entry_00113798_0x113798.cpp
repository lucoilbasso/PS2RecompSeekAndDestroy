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

// Function: entry_00113798
// Address: 0x113798 - 0x113888
void entry_00113798_0x113798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113798_0x113798");
#endif

    switch (ctx->pc) {
        case 0x1137a0u: goto label_1137a0;
        case 0x1137ccu: goto label_1137cc;
        case 0x1137ecu: goto label_1137ec;
        case 0x11380cu: goto label_11380c;
        case 0x11382cu: goto label_11382c;
        case 0x113840u: goto label_113840;
        case 0x11385cu: goto label_11385c;
        default: break;
    }

    ctx->pc = 0x113798u;

    // 0x113798: 0xc04117a  jal         func_1045E8
    ctx->pc = 0x113798u;
    SET_GPR_U32(ctx, 31, 0x1137A0u);
    ctx->pc = 0x11379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113798u;
    // 0x11379c: 0x24100100  addiu       $s0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045E8u, 0x113798u, 0x1137A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137A0u;
label_1137a0:
    // 0x1137a0: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x1137a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1137a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1137a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1137a8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1137a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1137ac: 0x26510090  addiu       $s1, $s2, 0x90
    ctx->pc = 0x1137acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x1137b0: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x1137b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x1137b4: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x1137b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1137b8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1137b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1137bc: 0x24130212  addiu       $s3, $zero, 0x212
    ctx->pc = 0x1137bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
    // 0x1137c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1137c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1137c4: 0xc055a8a  jal         func_156A28
    ctx->pc = 0x1137C4u;
    SET_GPR_U32(ctx, 31, 0x1137CCu);
    ctx->pc = 0x1137C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137C4u;
    // 0x1137c8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A28u, 0x1137C4u, 0x1137CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137CCu;
label_1137cc:
    // 0x1137cc: 0x26430060  addiu       $v1, $s2, 0x60
    ctx->pc = 0x1137ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1137d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1137d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1137d4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1137d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1137d8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x1137d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x1137dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1137dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1137e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1137e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1137e4: 0xc055808  jal         func_156020
    ctx->pc = 0x1137E4u;
    SET_GPR_U32(ctx, 31, 0x1137ECu);
    ctx->pc = 0x1137E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137E4u;
    // 0x1137e8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156020u, 0x1137E4u, 0x1137ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137ECu;
label_1137ec:
    // 0x1137ec: 0x26430068  addiu       $v1, $s2, 0x68
    ctx->pc = 0x1137ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x1137f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1137f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1137f4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1137f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1137f8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x1137f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x1137fc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1137fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x113800: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x113800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x113804: 0xc053446  jal         func_14D118
    ctx->pc = 0x113804u;
    SET_GPR_U32(ctx, 31, 0x11380Cu);
    ctx->pc = 0x113808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113804u;
    // 0x113808: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D118u, 0x113804u, 0x11380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11380Cu;
label_11380c:
    // 0x11380c: 0x26430078  addiu       $v1, $s2, 0x78
    ctx->pc = 0x11380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x113810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113814: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x113814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113818: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x113818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x11381c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x11381cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x113820: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x113820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x113824: 0xc0619ce  jal         func_186738
    ctx->pc = 0x113824u;
    SET_GPR_U32(ctx, 31, 0x11382Cu);
    ctx->pc = 0x113828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113824u;
    // 0x113828: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186738u, 0x113824u, 0x11382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11382Cu;
label_11382c:
    // 0x11382c: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x11382cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x113830: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x113830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113834: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113838: 0xc0654de  jal         func_195378
    ctx->pc = 0x113838u;
    SET_GPR_U32(ctx, 31, 0x113840u);
    ctx->pc = 0x11383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113838u;
    // 0x11383c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195378u, 0x113838u, 0x113840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113840u;
label_113840:
    // 0x113840: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x113840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113844: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x113844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113848: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x113848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x11384c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x11384cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113850: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x113850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x113854: 0xc065514  jal         func_195450
    ctx->pc = 0x113854u;
    SET_GPR_U32(ctx, 31, 0x11385Cu);
    ctx->pc = 0x113858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113854u;
    // 0x113858: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195450u, 0x113854u, 0x11385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11385Cu;
label_11385c:
    // 0x11385c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11385cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113860: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x113860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113864: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113864u;
    {
        const bool branch_taken_0x113864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113864u;
        // 0x113868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113864) {
            ctx->pc = 0x113888u;
            return;
        }
    }
    ctx->pc = 0x11386Cu;
    // 0x11386c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113870: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x113874: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x113874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x113878: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x113878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x11387c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11387Cu;
    {
        const bool branch_taken_0x11387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11387Cu;
        // 0x113880: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11387c) {
            ctx->pc = 0x1138ACu;
            return;
        }
    }
    ctx->pc = 0x113884u;
    // 0x113884: 0x0  nop
    ctx->pc = 0x113884u;
    // NOP
    ctx->pc = 0x113888u;
}
