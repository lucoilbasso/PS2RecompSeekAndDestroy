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

// Function: Cmd_UNIT_SE_Entry__FP15BsSCDEntControl
// Address: 0x14b040 - 0x14b18c
void Cmd_UNIT_SE_Entry__FP15BsSCDEntControl_0x14b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_UNIT_SE_Entry__FP15BsSCDEntControl_0x14b040");
#endif

    switch (ctx->pc) {
        case 0x14b05cu: goto label_14b05c;
        case 0x14b094u: goto label_14b094;
        case 0x14b0b4u: goto label_14b0b4;
        case 0x14b0e0u: goto label_14b0e0;
        case 0x14b0f4u: goto label_14b0f4;
        case 0x14b124u: goto label_14b124;
        case 0x14b150u: goto label_14b150;
        default: break;
    }

    ctx->pc = 0x14b040u;

    // 0x14b040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14b048: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14b04c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14b04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14b050: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14b050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14b054: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14B054u;
    SET_GPR_U32(ctx, 31, 0x14B05Cu);
    ctx->pc = 0x14B058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B054u;
    // 0x14b058: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B054u, 0x14B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B05Cu;
label_14b05c:
    // 0x14b05c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b060: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14b064: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14b064u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x14b068: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x14b068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14b06c: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x14b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14b070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b074: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14b074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14b078: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B078u;
    {
        const bool branch_taken_0x14b078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x14B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B078u;
        // 0x14b07c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b078) {
            ctx->pc = 0x14B094u;
            goto label_14b094;
        }
    }
    ctx->pc = 0x14B080u;
    // 0x14b080: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b084: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14b084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b088: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0
    ctx->pc = 0x14b088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    // 0x14b08c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B08Cu;
    SET_GPR_U32(ctx, 31, 0x14B094u);
    ctx->pc = 0x14B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B08Cu;
    // 0x14b090: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B08Cu, 0x14B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B094u;
label_14b094:
    // 0x14b094: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14b094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14b098: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B098u;
    {
        const bool branch_taken_0x14b098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b098) {
            ctx->pc = 0x14B09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B098u;
            // 0x14b09c: 0x920201ab  lbu         $v0, 0x1AB($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B0C0u;
            goto label_14b0c0;
        }
    }
    ctx->pc = 0x14B0A0u;
    // 0x14b0a0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0a8: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8
    ctx->pc = 0x14b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    // 0x14b0ac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B0ACu;
    SET_GPR_U32(ctx, 31, 0x14B0B4u);
    ctx->pc = 0x14B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0ACu;
    // 0x14b0b0: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B0ACu, 0x14B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0B4u;
label_14b0b4:
    // 0x14b0b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14B0B4u;
    {
        const bool branch_taken_0x14b0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0B4u;
        // 0x14b0b8: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0b4) {
            ctx->pc = 0x14B0E4u;
            goto label_14b0e4;
        }
    }
    ctx->pc = 0x14B0BCu;
    // 0x14b0bc: 0x0  nop
    ctx->pc = 0x14b0bcu;
    // NOP
label_14b0c0:
    // 0x14b0c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14b0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14b0c4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B0C4u;
    {
        const bool branch_taken_0x14b0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b0c4) {
            ctx->pc = 0x14B0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B0C4u;
            // 0x14b0c8: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B0E4u;
            goto label_14b0e4;
        }
    }
    ctx->pc = 0x14B0CCu;
    // 0x14b0cc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0d4: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8
    ctx->pc = 0x14b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    // 0x14b0d8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B0D8u;
    SET_GPR_U32(ctx, 31, 0x14B0E0u);
    ctx->pc = 0x14B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0D8u;
    // 0x14b0dc: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B0D8u, 0x14B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0E0u;
label_14b0e0:
    // 0x14b0e0: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x14b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_14b0e4:
    // 0x14b0e4: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x14b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x14b0e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0ec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14B0ECu;
    SET_GPR_U32(ctx, 31, 0x14B0F4u);
    ctx->pc = 0x14B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0ECu;
    // 0x14b0f0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B0ECu, 0x14B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0F4u;
label_14b0f4:
    // 0x14b0f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14b0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0f8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B0F8u;
    {
        const bool branch_taken_0x14b0f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b0f8) {
            ctx->pc = 0x14B11Cu;
            goto label_14b11c;
        }
    }
    ctx->pc = 0x14B100u;
    // 0x14b100: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b104: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B104u;
    {
        const bool branch_taken_0x14b104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b104) {
            ctx->pc = 0x14B108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B104u;
            // 0x14b108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B114u;
            goto label_14b114;
        }
    }
    ctx->pc = 0x14B10Cu;
    // 0x14b10c: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x14b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x14b110: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14b110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14b114:
    // 0x14b114: 0x50510005  beql        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B114u;
    {
        const bool branch_taken_0x14b114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x14b114) {
            ctx->pc = 0x14B118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B114u;
            // 0x14b118: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B12Cu;
            goto label_14b12c;
        }
    }
    ctx->pc = 0x14B11Cu;
label_14b11c:
    // 0x14b11c: 0xc056832  jal         func_15A0C8
    ctx->pc = 0x14B11Cu;
    SET_GPR_U32(ctx, 31, 0x14B124u);
    ctx->pc = 0x14B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B11Cu;
    // 0x14b120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x14B11Cu, 0x14B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B124u;
label_14b124:
    // 0x14b124: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14b124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14b128: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x14b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_14b12c:
    // 0x14b12c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x14b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x14b130: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b134: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B134u;
    {
        const bool branch_taken_0x14b134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B134u;
        // 0x14b138: 0x36224000  ori         $v0, $s1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b134) {
            ctx->pc = 0x14B148u;
            goto label_14b148;
        }
    }
    ctx->pc = 0x14B13Cu;
    // 0x14b13c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14B13Cu;
    {
        const bool branch_taken_0x14b13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B13Cu;
        // 0x14b140: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b13c) {
            ctx->pc = 0x14B158u;
            goto label_14b158;
        }
    }
    ctx->pc = 0x14B144u;
    // 0x14b144: 0x0  nop
    ctx->pc = 0x14b144u;
    // NOP
label_14b148:
    // 0x14b148: 0xc06a298  jal         func_1A8A60
    ctx->pc = 0x14B148u;
    SET_GPR_U32(ctx, 31, 0x14B150u);
    ctx->pc = 0x14B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B148u;
    // 0x14b14c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x14B148u, 0x14B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B150u;
label_14b150:
    // 0x14b150: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14b150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b154: 0x36224000  ori         $v0, $s1, 0x4000
    ctx->pc = 0x14b154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
label_14b158:
    // 0x14b158: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14b158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14b15c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14b160: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x14b160u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x14b164: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x14b164u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14b168: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x14b168u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14b16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b170: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x14b170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x14b174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14b17c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14b17cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b180: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14b180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b184: 0x3e00008  jr          $ra
    ctx->pc = 0x14B184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B184u;
        // 0x14b188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B18Cu;
}
