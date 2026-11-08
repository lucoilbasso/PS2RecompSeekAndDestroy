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

// Function: WeaponGaugeControl__8ApcPanel
// Address: 0x15c790 - 0x15c970
void WeaponGaugeControl__8ApcPanel_0x15c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WeaponGaugeControl__8ApcPanel_0x15c790");
#endif

    switch (ctx->pc) {
        case 0x15c7c0u: goto label_15c7c0;
        case 0x15c7d4u: goto label_15c7d4;
        case 0x15c7e8u: goto label_15c7e8;
        case 0x15c854u: goto label_15c854;
        case 0x15c864u: goto label_15c864;
        case 0x15c8ccu: goto label_15c8cc;
        case 0x15c8dcu: goto label_15c8dc;
        case 0x15c944u: goto label_15c944;
        case 0x15c954u: goto label_15c954;
        default: break;
    }

    ctx->pc = 0x15c790u;

    // 0x15c790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c794: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15c798: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15c798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15c7a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15c7a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15c7a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15c7ac: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x15c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x15c7b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C7B0u;
    {
        const bool branch_taken_0x15c7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c7b0) {
            ctx->pc = 0x15C7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C7B0u;
            // 0x15c7b4: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C7C4u;
            goto label_15c7c4;
        }
    }
    ctx->pc = 0x15C7B8u;
    // 0x15c7b8: 0xc05716a  jal         func_15C5A8
    ctx->pc = 0x15C7B8u;
    SET_GPR_U32(ctx, 31, 0x15C7C0u);
    ctx->pc = 0x15C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7B8u;
    // 0x15c7bc: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C5A8u, 0x15C7B8u, 0x15C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7C0u;
label_15c7c0:
    // 0x15c7c0: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x15c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_15c7c4:
    // 0x15c7c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C7C4u;
    {
        const bool branch_taken_0x15c7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c7c4) {
            ctx->pc = 0x15C7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C7C4u;
            // 0x15c7c8: 0x8e220128  lw          $v0, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C7D8u;
            goto label_15c7d8;
        }
    }
    ctx->pc = 0x15C7CCu;
    // 0x15c7cc: 0xc05716a  jal         func_15C5A8
    ctx->pc = 0x15C7CCu;
    SET_GPR_U32(ctx, 31, 0x15C7D4u);
    ctx->pc = 0x15C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7CCu;
    // 0x15c7d0: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C5A8u, 0x15C7CCu, 0x15C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7D4u;
label_15c7d4:
    // 0x15c7d4: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x15c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_15c7d8:
    // 0x15c7d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C7D8u;
    {
        const bool branch_taken_0x15c7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c7d8) {
            ctx->pc = 0x15C7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C7D8u;
            // 0x15c7dc: 0x8e2200a4  lw          $v0, 0xA4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C7ECu;
            goto label_15c7ec;
        }
    }
    ctx->pc = 0x15C7E0u;
    // 0x15c7e0: 0xc05716a  jal         func_15C5A8
    ctx->pc = 0x15C7E0u;
    SET_GPR_U32(ctx, 31, 0x15C7E8u);
    ctx->pc = 0x15C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7E0u;
    // 0x15c7e4: 0x26240120  addiu       $a0, $s1, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C5A8u, 0x15C7E0u, 0x15C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7E8u;
label_15c7e8:
    // 0x15c7e8: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x15c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_15c7ec:
    // 0x15c7ec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15C7ECu;
    {
        const bool branch_taken_0x15c7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7ECu;
        // 0x15c7f0: 0x263200a0  addiu       $s2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7ec) {
            ctx->pc = 0x15C864u;
            goto label_15c864;
        }
    }
    ctx->pc = 0x15C7F4u;
    // 0x15c7f4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x15c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x15c7f8: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x15c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15c7fc: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x15C7FCu;
    {
        const bool branch_taken_0x15c7fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c7fc) {
            ctx->pc = 0x15C800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C7FCu;
            // 0x15c800: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C830u;
            goto label_15c830;
        }
    }
    ctx->pc = 0x15C804u;
    // 0x15c804: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x15c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x15c808: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15c808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c80c: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x15c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x15c810: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15c810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15c814: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15c814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c818: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15c818u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15c81c: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15c81cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15c820: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x15c820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c824: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15C824u;
    {
        const bool branch_taken_0x15c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C824u;
        // 0x15c828: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c824) {
            ctx->pc = 0x15C84Cu;
            goto label_15c84c;
        }
    }
    ctx->pc = 0x15C82Cu;
    // 0x15c82c: 0x0  nop
    ctx->pc = 0x15c82cu;
    // NOP
label_15c830:
    // 0x15c830: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15c830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c834: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x15c834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x15c838: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15c838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c83c: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15c83cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15c840: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15c840u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15c844: 0x2a132aaa  slti        $s3, $s0, 0x2AAA
    ctx->pc = 0x15c844u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x15c848: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c84c:
    // 0x15c84c: 0xc056baa  jal         func_15AEA8
    ctx->pc = 0x15C84Cu;
    SET_GPR_U32(ctx, 31, 0x15C854u);
    ctx->pc = 0x15C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C84Cu;
    // 0x15c850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AEA8u, 0x15C84Cu, 0x15C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C854u;
label_15c854:
    // 0x15c854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c85c: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x15C85Cu;
    SET_GPR_U32(ctx, 31, 0x15C864u);
    ctx->pc = 0x15C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C85Cu;
    // 0x15c860: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15C85Cu, 0x15C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C864u;
label_15c864:
    // 0x15c864: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x15c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x15c868: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15C868u;
    {
        const bool branch_taken_0x15c868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C868u;
        // 0x15c86c: 0x263200e0  addiu       $s2, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c868) {
            ctx->pc = 0x15C8DCu;
            goto label_15c8dc;
        }
    }
    ctx->pc = 0x15C870u;
    // 0x15c870: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x15c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x15c874: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x15c874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15c878: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15C878u;
    {
        const bool branch_taken_0x15c878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c878) {
            ctx->pc = 0x15C87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C878u;
            // 0x15c87c: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C8A8u;
            goto label_15c8a8;
        }
    }
    ctx->pc = 0x15C880u;
    // 0x15c880: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x15c880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x15c884: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15c884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c888: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x15c888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x15c88c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15c890: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15c890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c894: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15c894u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15c898: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15c898u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15c89c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x15c89cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c8a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15C8A0u;
    {
        const bool branch_taken_0x15c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8A0u;
        // 0x15c8a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8a0) {
            ctx->pc = 0x15C8C4u;
            goto label_15c8c4;
        }
    }
    ctx->pc = 0x15C8A8u;
label_15c8a8:
    // 0x15c8a8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15c8a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c8ac: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x15c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x15c8b0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15c8b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c8b4: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15c8b4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15c8b8: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15c8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15c8bc: 0x2a132aaa  slti        $s3, $s0, 0x2AAA
    ctx->pc = 0x15c8bcu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x15c8c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c8c4:
    // 0x15c8c4: 0xc056baa  jal         func_15AEA8
    ctx->pc = 0x15C8C4u;
    SET_GPR_U32(ctx, 31, 0x15C8CCu);
    ctx->pc = 0x15C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8C4u;
    // 0x15c8c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AEA8u, 0x15C8C4u, 0x15C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8CCu;
label_15c8cc:
    // 0x15c8cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8d4: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x15C8D4u;
    SET_GPR_U32(ctx, 31, 0x15C8DCu);
    ctx->pc = 0x15C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8D4u;
    // 0x15c8d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15C8D4u, 0x15C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8DCu;
label_15c8dc:
    // 0x15c8dc: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x15c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x15c8e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15C8E0u;
    {
        const bool branch_taken_0x15c8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8E0u;
        // 0x15c8e4: 0x26310120  addiu       $s1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8e0) {
            ctx->pc = 0x15C954u;
            goto label_15c954;
        }
    }
    ctx->pc = 0x15C8E8u;
    // 0x15c8e8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x15c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15c8ec: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x15c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15c8f0: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15C8F0u;
    {
        const bool branch_taken_0x15c8f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8f0) {
            ctx->pc = 0x15C8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C8F0u;
            // 0x15c8f4: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C920u;
            goto label_15c920;
        }
    }
    ctx->pc = 0x15C8F8u;
    // 0x15c8f8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x15c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x15c8fc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15c8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c900: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x15c904: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15c904u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15c908: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15c908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c90c: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15c90cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15c910: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15c910u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15c914: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c918: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15C918u;
    {
        const bool branch_taken_0x15c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C918u;
        // 0x15c91c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c918) {
            ctx->pc = 0x15C93Cu;
            goto label_15c93c;
        }
    }
    ctx->pc = 0x15C920u;
label_15c920:
    // 0x15c920: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15c920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c924: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x15c924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x15c928: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15c928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c92c: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15c92cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15c930: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15c930u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15c934: 0x2a122aaa  slti        $s2, $s0, 0x2AAA
    ctx->pc = 0x15c934u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x15c938: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15c938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c93c:
    // 0x15c93c: 0xc056baa  jal         func_15AEA8
    ctx->pc = 0x15C93Cu;
    SET_GPR_U32(ctx, 31, 0x15C944u);
    ctx->pc = 0x15C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C93Cu;
    // 0x15c940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AEA8u, 0x15C93Cu, 0x15C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C944u;
label_15c944:
    // 0x15c944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c94c: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x15C94Cu;
    SET_GPR_U32(ctx, 31, 0x15C954u);
    ctx->pc = 0x15C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C94Cu;
    // 0x15c950: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15C94Cu, 0x15C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C954u;
label_15c954:
    // 0x15c954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15c954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c958: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15c958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15c95c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15c95cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c960: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15c960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c964: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15c964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c968: 0x3e00008  jr          $ra
    ctx->pc = 0x15C968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C968u;
        // 0x15c96c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C970u;
}
