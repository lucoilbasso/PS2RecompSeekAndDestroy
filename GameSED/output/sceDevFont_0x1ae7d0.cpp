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

// Function: sceDevFont
// Address: 0x1ae7d0 - 0x1ae90c
void sceDevFont_0x1ae7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFont_0x1ae7d0");
#endif

    switch (ctx->pc) {
        case 0x1ae814u: goto label_1ae814;
        case 0x1ae828u: goto label_1ae828;
        case 0x1ae840u: goto label_1ae840;
        case 0x1ae898u: goto label_1ae898;
        case 0x1ae8dcu: goto label_1ae8dc;
        default: break;
    }

    ctx->pc = 0x1ae7d0u;

    // 0x1ae7d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ae7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ae7d4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ae7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1ae7d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ae7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7dc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1ae7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1ae7e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ae7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ae7e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ae7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7e8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ae7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ae7ec: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1ae7ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7f0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1ae7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7f4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1ae7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1ae7f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ae7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ae7fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ae7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae800: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ae800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ae804: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ae804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae808: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ae808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1ae80c: 0xc06ba44  jal         func_1AE910
    ctx->pc = 0x1AE80Cu;
    SET_GPR_U32(ctx, 31, 0x1AE814u);
    ctx->pc = 0x1AE810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE80Cu;
    // 0x1ae810: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE910u, 0x1AE80Cu, 0x1AE814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE814u;
label_1ae814:
    // 0x1ae814: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ae814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae81c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae820: 0xc06ba62  jal         func_1AE988
    ctx->pc = 0x1AE820u;
    SET_GPR_U32(ctx, 31, 0x1AE828u);
    ctx->pc = 0x1AE824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE820u;
    // 0x1ae824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE988u, 0x1AE820u, 0x1AE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE828u;
label_1ae828:
    // 0x1ae828: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ae828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae82c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1ae82cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ae830: 0x2455fffc  addiu       $s5, $v0, -0x4
    ctx->pc = 0x1ae830u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1ae834: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AE834u;
    {
        const bool branch_taken_0x1ae834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE834u;
        // 0x1ae838: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae834) {
            ctx->pc = 0x1AE8ACu;
            goto label_1ae8ac;
        }
    }
    ctx->pc = 0x1AE83Cu;
    // 0x1ae83c: 0x3c140026  lui         $s4, 0x26
    ctx->pc = 0x1ae83cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
label_1ae840:
    // 0x1ae840: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ae840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ae844: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE844u;
    {
        const bool branch_taken_0x1ae844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE844u;
        // 0x1ae848: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae844) {
            ctx->pc = 0x1AE854u;
            goto label_1ae854;
        }
    }
    ctx->pc = 0x1AE84Cu;
    // 0x1ae84c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1ae84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae850: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x1ae850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1ae854:
    // 0x1ae854: 0x26839a38  addiu       $v1, $s4, -0x65C8
    ctx->pc = 0x1ae854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941240));
    // 0x1ae858: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ae858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae85c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1ae85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1ae860: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1ae860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1ae864: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ae864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ae868: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1ae868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1ae86c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1ae86cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ae870: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1ae870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ae874: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae878: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1ae878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ae87c: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1ae87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ae880: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x1ae880u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x1ae884: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ae884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae888: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1ae888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ae88c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1ae88cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1ae890: 0xc06b83e  jal         func_1AE0F8
    ctx->pc = 0x1AE890u;
    SET_GPR_U32(ctx, 31, 0x1AE898u);
    ctx->pc = 0x1AE894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE890u;
    // 0x1ae894: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE0F8u, 0x1AE890u, 0x1AE898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE898u;
label_1ae898:
    // 0x1ae898: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x1ae898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1ae89c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1ae89cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ae8a0: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1AE8A0u;
    {
        const bool branch_taken_0x1ae8a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8A0u;
        // 0x1ae8a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8a0) {
            ctx->pc = 0x1AE840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae840;
        }
    }
    ctx->pc = 0x1AE8A8u;
    // 0x1ae8a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ae8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae8ac:
    // 0x1ae8ac: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1ae8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1ae8b0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1ae8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1ae8b4: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1ae8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1ae8b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ae8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8bc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ae8bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1ae8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8c4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ae8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ae8c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ae8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae8d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ae8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8d4: 0xc06ba80  jal         func_1AEA00
    ctx->pc = 0x1AE8D4u;
    SET_GPR_U32(ctx, 31, 0x1AE8DCu);
    ctx->pc = 0x1AE8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8D4u;
    // 0x1ae8d8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEA00u, 0x1AE8D4u, 0x1AE8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8DCu;
label_1ae8dc:
    // 0x1ae8dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ae8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae8e0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ae8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae8e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ae8e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae8e8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1ae8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1ae8ec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ae8ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae8f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ae8f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae8f4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ae8f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae8f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae8f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae8fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae8fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae900: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae904: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE904u;
        // 0x1ae908: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE90Cu;
}
