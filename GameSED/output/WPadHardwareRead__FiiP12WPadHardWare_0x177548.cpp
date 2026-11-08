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

// Function: WPadHardwareRead__FiiP12WPadHardWare
// Address: 0x177548 - 0x1776ec
void WPadHardwareRead__FiiP12WPadHardWare_0x177548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadHardwareRead__FiiP12WPadHardWare_0x177548");
#endif

    switch (ctx->pc) {
        case 0x177574u: goto label_177574;
        case 0x1775d8u: goto label_1775d8;
        case 0x177600u: goto label_177600;
        case 0x177648u: goto label_177648;
        case 0x177660u: goto label_177660;
        case 0x177694u: goto label_177694;
        case 0x1776c8u: goto label_1776c8;
        default: break;
    }

    ctx->pc = 0x177548u;

    // 0x177548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17754c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177550: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x177550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177558: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17755c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17755cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177560: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x177560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x177564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177568: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x177568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17756c: 0xc06e40a  jal         func_1B9028
    ctx->pc = 0x17756Cu;
    SET_GPR_U32(ctx, 31, 0x177574u);
    ctx->pc = 0x177570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17756Cu;
    // 0x177570: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9028u, 0x17756Cu, 0x177574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177574u;
label_177574:
    // 0x177574: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x177574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177578: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x177578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17757c: 0x12430053  beq         $s2, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x17757Cu;
    {
        const bool branch_taken_0x17757c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x177580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17757Cu;
        // 0x177580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17757c) {
            ctx->pc = 0x1776CCu;
            goto label_1776cc;
        }
    }
    ctx->pc = 0x177584u;
    // 0x177584: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x177584u;
    {
        const bool branch_taken_0x177584 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x177584) {
            ctx->pc = 0x177588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177584u;
            // 0x177588: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1775A8u;
            goto label_1775a8;
        }
    }
    ctx->pc = 0x17758Cu;
    // 0x17758c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177590: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x177590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x177594: 0xa2020034  sb          $v0, 0x34($s0)
    ctx->pc = 0x177594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x177598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17759c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17759cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1775a0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1775A0u;
    {
        const bool branch_taken_0x1775a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1775A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775A0u;
        // 0x1775a4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775a0) {
            ctx->pc = 0x1776CCu;
            goto label_1776cc;
        }
    }
    ctx->pc = 0x1775A8u;
label_1775a8:
    // 0x1775a8: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1775A8u;
    {
        const bool branch_taken_0x1775a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1775ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775A8u;
        // 0x1775ac: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775a8) {
            ctx->pc = 0x1775B8u;
            goto label_1775b8;
        }
    }
    ctx->pc = 0x1775B0u;
    // 0x1775b0: 0x16430046  bne         $s2, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1775B0u;
    {
        const bool branch_taken_0x1775b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1775B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775B0u;
        // 0x1775b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775b0) {
            ctx->pc = 0x1776CCu;
            goto label_1776cc;
        }
    }
    ctx->pc = 0x1775B8u;
label_1775b8:
    // 0x1775b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1775b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1775bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1775BCu;
    {
        const bool branch_taken_0x1775bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1775C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775BCu;
        // 0x1775c0: 0x26110034  addiu       $s1, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775bc) {
            ctx->pc = 0x1775F0u;
            goto label_1775f0;
        }
    }
    ctx->pc = 0x1775C4u;
    // 0x1775c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1775c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1775c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1775ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1775d0: 0xc06e550  jal         func_1B9540
    ctx->pc = 0x1775D0u;
    SET_GPR_U32(ctx, 31, 0x1775D8u);
    ctx->pc = 0x1775D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775D0u;
    // 0x1775d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9540u, 0x1775D0u, 0x1775D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775D8u;
label_1775d8:
    // 0x1775d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1775d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1775dc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1775dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1775e0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1775e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1775e4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1775E4u;
    {
        const bool branch_taken_0x1775e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1775E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775E4u;
        // 0x1775e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775e4) {
            ctx->pc = 0x1776C8u;
            goto label_1776c8;
        }
    }
    ctx->pc = 0x1775ECu;
    // 0x1775ec: 0x0  nop
    ctx->pc = 0x1775ecu;
    // NOP
label_1775f0:
    // 0x1775f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1775f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1775f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775f8: 0xc06e3ea  jal         func_1B8FA8
    ctx->pc = 0x1775F8u;
    SET_GPR_U32(ctx, 31, 0x177600u);
    ctx->pc = 0x1775FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775F8u;
    // 0x1775fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8FA8u, 0x1775F8u, 0x177600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177600u;
label_177600:
    // 0x177600: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x177600u;
    {
        const bool branch_taken_0x177600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177600) {
            ctx->pc = 0x177604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177600u;
            // 0x177604: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177620u;
            goto label_177620;
        }
    }
    ctx->pc = 0x177608u;
    // 0x177608: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x177608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17760c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177610: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x177610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x177614: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x177614u;
    {
        const bool branch_taken_0x177614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177614u;
        // 0x177618: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177614) {
            ctx->pc = 0x1776CCu;
            goto label_1776cc;
        }
    }
    ctx->pc = 0x17761Cu;
    // 0x17761c: 0x0  nop
    ctx->pc = 0x17761cu;
    // NOP
label_177620:
    // 0x177620: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x177620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x177624: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177624u;
    {
        const bool branch_taken_0x177624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x177628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177624u;
        // 0x177628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177624) {
            ctx->pc = 0x177638u;
            goto label_177638;
        }
    }
    ctx->pc = 0x17762Cu;
    // 0x17762c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x17762Cu;
    {
        const bool branch_taken_0x17762c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17762Cu;
        // 0x177630: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17762c) {
            ctx->pc = 0x1776C8u;
            goto label_1776c8;
        }
    }
    ctx->pc = 0x177634u;
    // 0x177634: 0x0  nop
    ctx->pc = 0x177634u;
    // NOP
label_177638:
    // 0x177638: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x177638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17763c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17763cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177640: 0xc06e502  jal         func_1B9408
    ctx->pc = 0x177640u;
    SET_GPR_U32(ctx, 31, 0x177648u);
    ctx->pc = 0x177644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177640u;
    // 0x177644: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9408u, 0x177640u, 0x177648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177648u;
label_177648:
    // 0x177648: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17764c: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x17764cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x177650: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x177650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177654: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x177654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177658: 0xc06e502  jal         func_1B9408
    ctx->pc = 0x177658u;
    SET_GPR_U32(ctx, 31, 0x177660u);
    ctx->pc = 0x17765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177658u;
    // 0x17765c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9408u, 0x177658u, 0x177660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177660u;
label_177660:
    // 0x177660: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x177660u;
    {
        const bool branch_taken_0x177660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177660) {
            ctx->pc = 0x177664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177660u;
            // 0x177664: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177670u;
            goto label_177670;
        }
    }
    ctx->pc = 0x177668u;
    // 0x177668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17766c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17766cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_177670:
    // 0x177670: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177674: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x177674u;
    {
        const bool branch_taken_0x177674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177674u;
        // 0x177678: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177674) {
            ctx->pc = 0x1776B0u;
            goto label_1776b0;
        }
    }
    ctx->pc = 0x17767Cu;
    // 0x17767c: 0x56420013  bnel        $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17767Cu;
    {
        const bool branch_taken_0x17767c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x17767c) {
            ctx->pc = 0x177680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17767Cu;
            // 0x177680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1776CCu;
            goto label_1776cc;
        }
    }
    ctx->pc = 0x177684u;
    // 0x177684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177688: 0x27868ca0  addiu       $a2, $gp, -0x7360
    ctx->pc = 0x177688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937760));
    // 0x17768c: 0xc06e5ae  jal         func_1B96B8
    ctx->pc = 0x17768Cu;
    SET_GPR_U32(ctx, 31, 0x177694u);
    ctx->pc = 0x177690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17768Cu;
    // 0x177690: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B96B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B96B8u, 0x17768Cu, 0x177694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177694u;
label_177694:
    // 0x177694: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x177694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17769c: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17769Cu;
    {
        const bool branch_taken_0x17769c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17769c) {
            ctx->pc = 0x1776A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17769Cu;
            // 0x1776a0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1776CCu;
            goto label_1776cc;
        }
    }
    ctx->pc = 0x1776A4u;
    // 0x1776a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1776A4u;
    {
        const bool branch_taken_0x1776a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776A4u;
        // 0x1776a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776a4) {
            ctx->pc = 0x1776D0u;
            goto label_1776d0;
        }
    }
    ctx->pc = 0x1776ACu;
    // 0x1776ac: 0x0  nop
    ctx->pc = 0x1776acu;
    // NOP
label_1776b0:
    // 0x1776b0: 0x56420006  bnel        $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1776B0u;
    {
        const bool branch_taken_0x1776b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1776b0) {
            ctx->pc = 0x1776B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1776B0u;
            // 0x1776b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1776CCu;
            goto label_1776cc;
        }
    }
    ctx->pc = 0x1776B8u;
    // 0x1776b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1776b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1776bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776c0: 0xc06e57e  jal         func_1B95F8
    ctx->pc = 0x1776C0u;
    SET_GPR_U32(ctx, 31, 0x1776C8u);
    ctx->pc = 0x1776C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776C0u;
    // 0x1776c4: 0x26060054  addiu       $a2, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B95F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B95F8u, 0x1776C0u, 0x1776C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776C8u;
label_1776c8:
    // 0x1776c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1776c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1776cc:
    // 0x1776cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1776ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1776d0:
    // 0x1776d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1776d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1776d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1776d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1776d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1776d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1776dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1776dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1776e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1776e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1776e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1776E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1776E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776E4u;
        // 0x1776e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1776E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1776ECu;
}
