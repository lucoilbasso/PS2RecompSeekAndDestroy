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

// Function: Cmd_LOOP_CLIP_Entry__FP15BsSCDEntControl
// Address: 0x1a6840 - 0x1a696c
void Cmd_LOOP_CLIP_Entry__FP15BsSCDEntControl_0x1a6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOOP_CLIP_Entry__FP15BsSCDEntControl_0x1a6840");
#endif

    switch (ctx->pc) {
        case 0x1a6874u: goto label_1a6874;
        case 0x1a68a0u: goto label_1a68a0;
        case 0x1a68d4u: goto label_1a68d4;
        case 0x1a6908u: goto label_1a6908;
        default: break;
    }

    ctx->pc = 0x1a6840u;

    // 0x1a6840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6848: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a684c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a684cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6850: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a6850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a6854: 0x2650001c  addiu       $s0, $s2, 0x1C
    ctx->pc = 0x1a6854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a6858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a685c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6860: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6864: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6868: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a686c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A686Cu;
    SET_GPR_U32(ctx, 31, 0x1A6874u);
    ctx->pc = 0x1A6870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A686Cu;
    // 0x1a6870: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A686Cu, 0x1A6874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6874u;
label_1a6874:
    // 0x1a6874: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6878: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a6878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a687c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6880: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6884: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6888: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a688c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a688cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6890: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6890u;
    {
        const bool branch_taken_0x1a6890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6890u;
        // 0x1a6894: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6890) {
            ctx->pc = 0x1A68A4u;
            goto label_1a68a4;
        }
    }
    ctx->pc = 0x1A6898u;
    // 0x1a6898: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6898u;
    SET_GPR_U32(ctx, 31, 0x1A68A0u);
    ctx->pc = 0x1A689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6898u;
    // 0x1a689c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6898u, 0x1A68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68A0u;
label_1a68a0:
    // 0x1a68a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a68a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a68a4:
    // 0x1a68a4: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a68a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a68a8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a68ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a68acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a68b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a68b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a68b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a68b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a68b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a68bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a68c0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a68c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a68c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A68C4u;
    {
        const bool branch_taken_0x1a68c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68C4u;
        // 0x1a68c8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68c4) {
            ctx->pc = 0x1A68DCu;
            goto label_1a68dc;
        }
    }
    ctx->pc = 0x1A68CCu;
    // 0x1a68cc: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A68CCu;
    SET_GPR_U32(ctx, 31, 0x1A68D4u);
    ctx->pc = 0x1A68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68CCu;
    // 0x1a68d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A68CCu, 0x1A68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68D4u;
label_1a68d4:
    // 0x1a68d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a68d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a68d8: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a68d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1a68dc:
    // 0x1a68dc: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a68e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a68e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a68e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a68e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a68ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a68f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a68f4: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a68f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a68f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A68F8u;
    {
        const bool branch_taken_0x1a68f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68F8u;
        // 0x1a68fc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68f8) {
            ctx->pc = 0x1A690Cu;
            goto label_1a690c;
        }
    }
    ctx->pc = 0x1A6900u;
    // 0x1a6900: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6900u;
    SET_GPR_U32(ctx, 31, 0x1A6908u);
    ctx->pc = 0x1A6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6900u;
    // 0x1a6904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6900u, 0x1A6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6908u;
label_1a6908:
    // 0x1a6908: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a690c:
    // 0x1a690c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1a690cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1a6910: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6910u;
    {
        const bool branch_taken_0x1a6910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6910u;
        // 0x1a6914: 0xb0102a  slt         $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6910) {
            ctx->pc = 0x1A6930u;
            goto label_1a6930;
        }
    }
    ctx->pc = 0x1A6918u;
    // 0x1a6918: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1a6918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1a691c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a6920: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6920u;
    {
        const bool branch_taken_0x1a6920 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a6920) {
            ctx->pc = 0x1A6924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6920u;
            // 0x1a6924: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6928u;
            goto label_1a6928;
        }
    }
    ctx->pc = 0x1A6928u;
label_1a6928:
    // 0x1a6928: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6928u;
    {
        const bool branch_taken_0x1a6928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6928u;
        // 0x1a692c: 0xa28023  subu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6928) {
            ctx->pc = 0x1A694Cu;
            goto label_1a694c;
        }
    }
    ctx->pc = 0x1A6930u;
label_1a6930:
    // 0x1a6930: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6930u;
    {
        const bool branch_taken_0x1a6930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6930) {
            ctx->pc = 0x1A6934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6930u;
            // 0x1a6934: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6950u;
            goto label_1a6950;
        }
    }
    ctx->pc = 0x1A6938u;
    // 0x1a6938: 0x2051023  subu        $v0, $s0, $a1
    ctx->pc = 0x1a6938u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a693c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a6940: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6940u;
    {
        const bool branch_taken_0x1a6940 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a6940) {
            ctx->pc = 0x1A6944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6940u;
            // 0x1a6944: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6948u;
            goto label_1a6948;
        }
    }
    ctx->pc = 0x1A6948u;
label_1a6948:
    // 0x1a6948: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1a6948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a694c:
    // 0x1a694c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1a694cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_1a6950:
    // 0x1a6950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6958: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a695c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a695cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6960: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6964: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6964u;
        // 0x1a6968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A696Cu;
}
