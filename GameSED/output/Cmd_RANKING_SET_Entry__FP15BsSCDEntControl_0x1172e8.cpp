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

// Function: Cmd_RANKING_SET_Entry__FP15BsSCDEntControl
// Address: 0x1172e8 - 0x1175c0
void Cmd_RANKING_SET_Entry__FP15BsSCDEntControl_0x1172e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_RANKING_SET_Entry__FP15BsSCDEntControl_0x1172e8");
#endif

    switch (ctx->pc) {
        case 0x117310u: goto label_117310;
        case 0x11731cu: goto label_11731c;
        case 0x117328u: goto label_117328;
        case 0x117358u: goto label_117358;
        case 0x117378u: goto label_117378;
        case 0x1173e0u: goto label_1173e0;
        case 0x117468u: goto label_117468;
        case 0x11747cu: goto label_11747c;
        default: break;
    }

    ctx->pc = 0x1172e8u;

    // 0x1172e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1172e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1172ec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1172ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1172f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1172f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172f4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1172f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1172f8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1172f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1172fc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1172fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x117300: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x117300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x117304: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x117304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x117308: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117308u;
    SET_GPR_U32(ctx, 31, 0x117310u);
    ctx->pc = 0x11730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117308u;
    // 0x11730c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117308u, 0x117310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117310u;
label_117310:
    // 0x117310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117314: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117314u;
    SET_GPR_U32(ctx, 31, 0x11731Cu);
    ctx->pc = 0x117318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117314u;
    // 0x117318: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117314u, 0x11731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11731Cu;
label_11731c:
    // 0x11731c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117320: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117320u;
    SET_GPR_U32(ctx, 31, 0x117328u);
    ctx->pc = 0x117324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117320u;
    // 0x117324: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117320u, 0x117328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117328u;
label_117328:
    // 0x117328: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x117328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11732c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11732cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x117330: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x117330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x117334: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x117334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117338: 0x8c640fe8  lw          $a0, 0xFE8($v1)
    ctx->pc = 0x117338u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1ED528u));
    // 0x11733c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x11733cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117340: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x117340u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1ED52Cu));
    // 0x117344: 0x27b10012  addiu       $s1, $sp, 0x12
    ctx->pc = 0x117344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x117348: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x117348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x11734c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x11734cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x117350: 0xa7a50010  sh          $a1, 0x10($sp)
    ctx->pc = 0x117350u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x117354: 0x0  nop
    ctx->pc = 0x117354u;
    // NOP
label_117358:
    // 0x117358: 0x128600  sll         $s0, $s2, 24
    ctx->pc = 0x117358u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x11735c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11735cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x117360: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x117360u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x117364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x117364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11736c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x11736cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x117370: 0xc045360  jal         func_114D80
    ctx->pc = 0x117370u;
    SET_GPR_U32(ctx, 31, 0x117378u);
    ctx->pc = 0x117374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117370u;
    // 0x117374: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x117370u, 0x117378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117378u;
label_117378:
    // 0x117378: 0x86020ff0  lh          $v0, 0xFF0($s0)
    ctx->pc = 0x117378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x11737c: 0x2a43000c  slti        $v1, $s2, 0xC
    ctx->pc = 0x11737cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x117380: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x117380u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x117384: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x117384u;
    {
        const bool branch_taken_0x117384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117384u;
        // 0x117388: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117384) {
            ctx->pc = 0x117358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117358;
        }
    }
    ctx->pc = 0x11738Cu;
    // 0x11738c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x11738cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x117390: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x117390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x117394: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x117398: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x117398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x11739c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11739cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1173a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1173a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1173a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1173a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1173a8: 0x246733b0  addiu       $a3, $v1, 0x33B0
    ctx->pc = 0x1173a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 13232));
    // 0x1173ac: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1173acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1173b0: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x1173b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
    // 0x1173b4: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x1173b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1173b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1173b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1173bc: 0x10450018  beq         $v0, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1173BCu;
    {
        const bool branch_taken_0x1173bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1173C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173BCu;
        // 0x1173c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173bc) {
            ctx->pc = 0x117420u;
            goto label_117420;
        }
    }
    ctx->pc = 0x1173C4u;
    // 0x1173c4: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1173c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1173c8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1173c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1173cc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1173ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1173d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1173d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1173d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1173d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1173d8: 0x45202b  sltu        $a0, $v0, $a1
    ctx->pc = 0x1173d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1173dc: 0x0  nop
    ctx->pc = 0x1173dcu;
    // NOP
label_1173e0:
    // 0x1173e0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1173e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1173e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1173E4u;
    {
        const bool branch_taken_0x1173e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1173e4) {
            ctx->pc = 0x1173E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1173E4u;
            // 0x1173e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117408u;
            goto label_117408;
        }
    }
    ctx->pc = 0x1173ECu;
    // 0x1173ec: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1173ECu;
    {
        const bool branch_taken_0x1173ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1173F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173ECu;
        // 0x1173f0: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173ec) {
            ctx->pc = 0x117424u;
            goto label_117424;
        }
    }
    ctx->pc = 0x1173F4u;
    // 0x1173f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1173f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1173f8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1173f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1173fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1173FCu;
    {
        const bool branch_taken_0x1173fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173FCu;
        // 0x117400: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173fc) {
            ctx->pc = 0x117424u;
            goto label_117424;
        }
    }
    ctx->pc = 0x117404u;
    // 0x117404: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x117404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_117408:
    // 0x117408: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x117408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x11740c: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x11740Cu;
    {
        const bool branch_taken_0x11740c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11740Cu;
        // 0x117410: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11740c) {
            ctx->pc = 0x1175A0u;
            goto label_1175a0;
        }
    }
    ctx->pc = 0x117414u;
    // 0x117414: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x117414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x117418: 0x1447fff1  bne         $v0, $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x117418u;
    {
        const bool branch_taken_0x117418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x11741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117418u;
        // 0x11741c: 0x45202b  sltu        $a0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117418) {
            ctx->pc = 0x1173E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1173e0;
        }
    }
    ctx->pc = 0x117420u;
label_117420:
    // 0x117420: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x117420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_117424:
    // 0x117424: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x117424u;
    {
        const bool branch_taken_0x117424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117424u;
        // 0x117428: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117424) {
            ctx->pc = 0x1175A4u;
            goto label_1175a4;
        }
    }
    ctx->pc = 0x11742Cu;
    // 0x11742c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x11742cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x117430: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x117430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x117434: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x117434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x117438: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x117438u;
    {
        const bool branch_taken_0x117438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117438u;
        // 0x11743c: 0xac5200b0  sw          $s2, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117438) {
            ctx->pc = 0x1174D8u;
            goto label_1174d8;
        }
    }
    ctx->pc = 0x117440u;
    // 0x117440: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x117440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x117444: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x117444u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x117448: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11744c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11744cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x117450: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x117454: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x117454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x117458: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x117458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x11745c: 0x26103450  addiu       $s0, $s0, 0x3450
    ctx->pc = 0x11745cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13392));
    // 0x117460: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x117460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x117464: 0x0  nop
    ctx->pc = 0x117464u;
    // NOP
label_117468:
    // 0x117468: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x117468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11746c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11746cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117470: 0x26844620  addiu       $a0, $s4, 0x4620
    ctx->pc = 0x117470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17952));
    // 0x117474: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x117474u;
    SET_GPR_U32(ctx, 31, 0x11747Cu);
    ctx->pc = 0x117478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117474u;
    // 0x117478: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x117474u, 0x11747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11747Cu;
label_11747c:
    // 0x11747c: 0x6a02ffdf  ldl         $v0, -0x21($s0)
    ctx->pc = 0x11747cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x117480: 0x6e02ffd8  ldr         $v0, -0x28($s0)
    ctx->pc = 0x117480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x117484: 0x6a03ffe7  ldl         $v1, -0x19($s0)
    ctx->pc = 0x117484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x117488: 0x6e03ffe0  ldr         $v1, -0x20($s0)
    ctx->pc = 0x117488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11748c: 0x6a04ffef  ldl         $a0, -0x11($s0)
    ctx->pc = 0x11748cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x117490: 0x6e04ffe8  ldr         $a0, -0x18($s0)
    ctx->pc = 0x117490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x117494: 0x6a05fff7  ldl         $a1, -0x9($s0)
    ctx->pc = 0x117494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x117498: 0x6e05fff0  ldr         $a1, -0x10($s0)
    ctx->pc = 0x117498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11749c: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x11749cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174a0: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1174a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174a4: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x1174a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174a8: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x1174a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174ac: 0xb2040017  sdl         $a0, 0x17($s0)
    ctx->pc = 0x1174acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174b0: 0xb6040010  sdr         $a0, 0x10($s0)
    ctx->pc = 0x1174b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174b4: 0xb205001f  sdl         $a1, 0x1F($s0)
    ctx->pc = 0x1174b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174b8: 0xb6050018  sdr         $a1, 0x18($s0)
    ctx->pc = 0x1174b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174bc: 0x6a02ffff  ldl         $v0, -0x1($s0)
    ctx->pc = 0x1174bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1174c0: 0x6e02fff8  ldr         $v0, -0x8($s0)
    ctx->pc = 0x1174c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1174c4: 0xb2020027  sdl         $v0, 0x27($s0)
    ctx->pc = 0x1174c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174c8: 0xb6020020  sdr         $v0, 0x20($s0)
    ctx->pc = 0x1174c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174cc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1174ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1174d0: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1174D0u;
    {
        const bool branch_taken_0x1174d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174D0u;
        // 0x1174d4: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174d0) {
            ctx->pc = 0x117468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117468;
        }
    }
    ctx->pc = 0x1174D8u;
label_1174d8:
    // 0x1174d8: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1174d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1174dc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1174dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1174e0: 0x8c6400b0  lw          $a0, 0xB0($v1)
    ctx->pc = 0x1174e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1174e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1174e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1174e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1174e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1174ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1174ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1174f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1174f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1174f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1174f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1174f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1174f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1174fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1174fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x117500: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x117500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x117504: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x117504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x117508: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x117508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11750c: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x11750cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x117510: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x117510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x117514: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x117514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x117518: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x117518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11751c: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x11751cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x117520: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x117520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x117524: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x117524u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x117528: 0xb02633b7  sdl         $a2, 0x33B7($at)
    ctx->pc = 0x117528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11752c: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11752cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x117530: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x117530u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x117534: 0xb42633b0  sdr         $a2, 0x33B0($at)
    ctx->pc = 0x117534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117538: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x117538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x11753c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x11753cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x117540: 0xb02333bf  sdl         $v1, 0x33BF($at)
    ctx->pc = 0x117540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117544: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x117544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x117548: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x117548u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11754c: 0xb42333b8  sdr         $v1, 0x33B8($at)
    ctx->pc = 0x11754cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117550: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x117550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x117554: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x117554u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x117558: 0xb02433c7  sdl         $a0, 0x33C7($at)
    ctx->pc = 0x117558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11755c: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11755cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x117560: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x117560u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x117564: 0xb42433c0  sdr         $a0, 0x33C0($at)
    ctx->pc = 0x117564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117568: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x117568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x11756c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x11756cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x117570: 0xb02533cf  sdl         $a1, 0x33CF($at)
    ctx->pc = 0x117570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117574: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x117574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x117578: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x117578u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11757c: 0xb42533c8  sdr         $a1, 0x33C8($at)
    ctx->pc = 0x11757cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117580: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x117580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x117584: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x117584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x117588: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x117588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x11758c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x11758cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x117590: 0xb02633d7  sdl         $a2, 0x33D7($at)
    ctx->pc = 0x117590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117594: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x117594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x117598: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x117598u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11759c: 0xb42633d0  sdr         $a2, 0x33D0($at)
    ctx->pc = 0x11759cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1175a0:
    // 0x1175a0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1175a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1175a4:
    // 0x1175a4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1175a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1175a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1175a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1175ac: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1175acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1175b0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1175b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1175b4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1175b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1175b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1175B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1175BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175B8u;
        // 0x1175bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1175B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1175C0u;
}
