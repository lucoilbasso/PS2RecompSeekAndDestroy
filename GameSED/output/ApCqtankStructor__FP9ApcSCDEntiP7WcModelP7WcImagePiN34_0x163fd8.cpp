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

// Function: ApCqtankStructor__FP9ApcSCDEntiP7WcModelP7WcImagePiN34
// Address: 0x163fd8 - 0x164778
void ApCqtankStructor__FP9ApcSCDEntiP7WcModelP7WcImagePiN34_0x163fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqtankStructor__FP9ApcSCDEntiP7WcModelP7WcImagePiN34_0x163fd8");
#endif

    switch (ctx->pc) {
        case 0x164030u: goto label_164030;
        case 0x16403cu: goto label_16403c;
        case 0x164044u: goto label_164044;
        case 0x164060u: goto label_164060;
        case 0x16406cu: goto label_16406c;
        case 0x164088u: goto label_164088;
        case 0x164094u: goto label_164094;
        case 0x16409cu: goto label_16409c;
        case 0x1640a8u: goto label_1640a8;
        case 0x164388u: goto label_164388;
        case 0x164438u: goto label_164438;
        case 0x164480u: goto label_164480;
        case 0x1644d0u: goto label_1644d0;
        case 0x164500u: goto label_164500;
        case 0x1645a4u: goto label_1645a4;
        case 0x1645c4u: goto label_1645c4;
        case 0x1645e8u: goto label_1645e8;
        case 0x1646d8u: goto label_1646d8;
        case 0x164744u: goto label_164744;
        default: break;
    }

    ctx->pc = 0x163fd8u;

    // 0x163fd8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x163fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x163fdc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x163fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x163fe0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x163fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fe4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x163fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x163fe8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x163fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fec: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x163fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x163ff0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x163ff0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ff4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x163ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ff8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x163ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ffc: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x163ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x164000: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x164000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x164004: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x164004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x164008: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x164008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x16400c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x16400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x164010: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x164010u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164014: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x164014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x164018: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x164018u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16401c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x16401cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x164020: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x164020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x164024: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x164024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x164028: 0xc043b48  jal         func_10ED20
    ctx->pc = 0x164028u;
    SET_GPR_U32(ctx, 31, 0x164030u);
    ctx->pc = 0x16402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164028u;
    // 0x16402c: 0x120f02d  daddu       $fp, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED20u, 0x164028u, 0x164030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164030u;
label_164030:
    // 0x164030: 0x24041846  addiu       $a0, $zero, 0x1846
    ctx->pc = 0x164030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x164034: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x164034u;
    SET_GPR_U32(ctx, 31, 0x16403Cu);
    ctx->pc = 0x164038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164034u;
    // 0x164038: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x164034u, 0x16403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16403Cu;
label_16403c:
    // 0x16403c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x16403Cu;
    SET_GPR_U32(ctx, 31, 0x164044u);
    ctx->pc = 0x164040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16403Cu;
    // 0x164040: 0x24041b00  addiu       $a0, $zero, 0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16403Cu, 0x164044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164044u;
label_164044:
    // 0x164044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164048: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x164048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x16404c: 0x2442f300  addiu       $v0, $v0, -0xD00
    ctx->pc = 0x16404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963968));
    // 0x164050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164054: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x164054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x164058: 0xc0583be  jal         func_160EF8
    ctx->pc = 0x164058u;
    SET_GPR_U32(ctx, 31, 0x164060u);
    ctx->pc = 0x16405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164058u;
    // 0x16405c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EF8u, 0x164058u, 0x164060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164060u;
label_164060:
    // 0x164060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164064: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x164064u;
    SET_GPR_U32(ctx, 31, 0x16406Cu);
    ctx->pc = 0x164068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164064u;
    // 0x164068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x164064u, 0x16406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16406Cu;
label_16406c:
    // 0x16406c: 0xaeb30c00  sw          $s3, 0xC00($s5)
    ctx->pc = 0x16406cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3072), GPR_U32(ctx, 19));
    // 0x164070: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x164070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164074: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x164074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164078: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x164078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16407c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16407cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164080: 0xc0658a2  jal         func_196288
    ctx->pc = 0x164080u;
    SET_GPR_U32(ctx, 31, 0x164088u);
    ctx->pc = 0x164084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164080u;
    // 0x164084: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196288u, 0x164080u, 0x164088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164088u;
label_164088:
    // 0x164088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16408c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x16408Cu;
    SET_GPR_U32(ctx, 31, 0x164094u);
    ctx->pc = 0x164090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16408Cu;
    // 0x164090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x16408Cu, 0x164094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164094u;
label_164094:
    // 0x164094: 0xc05843a  jal         func_1610E8
    ctx->pc = 0x164094u;
    SET_GPR_U32(ctx, 31, 0x16409Cu);
    ctx->pc = 0x164098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164094u;
    // 0x164098: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1610E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1610E8u, 0x164094u, 0x16409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16409Cu;
label_16409c:
    // 0x16409c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16409Cu;
        // 0x1640a0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16409c) {
            ctx->pc = 0x164448u;
            goto label_164448;
        }
    }
    ctx->pc = 0x1640A4u;
    // 0x1640a4: 0x0  nop
    ctx->pc = 0x1640a4u;
    // NOP
label_1640a8:
    // 0x1640a8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1640a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1640ac: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1640ACu;
    {
        const bool branch_taken_0x1640ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1640B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640ACu;
        // 0x1640b0: 0x28620010  slti        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640ac) {
            ctx->pc = 0x1641B0u;
            goto label_1641b0;
        }
    }
    ctx->pc = 0x1640B4u;
    // 0x1640b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1640B4u;
    {
        const bool branch_taken_0x1640b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640B4u;
        // 0x1640b8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640b4) {
            ctx->pc = 0x1640D0u;
            goto label_1640d0;
        }
    }
    ctx->pc = 0x1640BCu;
    // 0x1640bc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1640bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1640c0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1640C0u;
    {
        const bool branch_taken_0x1640c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1640C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640C0u;
        // 0x1640c4: 0x2463ffee  addiu       $v1, $v1, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640c0) {
            ctx->pc = 0x1640F0u;
            goto label_1640f0;
        }
    }
    ctx->pc = 0x1640C8u;
    // 0x1640c8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1640C8u;
    {
        const bool branch_taken_0x1640c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640C8u;
        // 0x1640cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640c8) {
            ctx->pc = 0x1642F8u;
            goto label_1642f8;
        }
    }
    ctx->pc = 0x1640D0u;
label_1640d0:
    // 0x1640d0: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1640D0u;
    {
        const bool branch_taken_0x1640d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640D0u;
        // 0x1640d4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640d0) {
            ctx->pc = 0x164258u;
            goto label_164258;
        }
    }
    ctx->pc = 0x1640D8u;
    // 0x1640d8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1640d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1640dc: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1640DCu;
    {
        const bool branch_taken_0x1640dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1640E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640DCu;
        // 0x1640e0: 0x2463ffee  addiu       $v1, $v1, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640dc) {
            ctx->pc = 0x1642E8u;
            goto label_1642e8;
        }
    }
    ctx->pc = 0x1640E4u;
    // 0x1640e4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1640E4u;
    {
        const bool branch_taken_0x1640e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640E4u;
        // 0x1640e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640e4) {
            ctx->pc = 0x1642F8u;
            goto label_1642f8;
        }
    }
    ctx->pc = 0x1640ECu;
    // 0x1640ec: 0x0  nop
    ctx->pc = 0x1640ecu;
    // NOP
label_1640f0:
    // 0x1640f0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1640f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1640f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1640f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1640f8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1640f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1640fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1640fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x164100: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164104: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164104u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164108: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164108u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16410c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16410cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164110: 0xc7818354  lwc1        $f1, -0x7CAC($gp)
    ctx->pc = 0x164110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164114: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x164114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x164118: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x164118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x16411c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16411cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164120: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x164120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x164124: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x164124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x164128: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16412c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x16412cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164130: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164130u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164134: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164134u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16413c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16413cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164140: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x164140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x164144: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x164144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x164148: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x164148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x16414c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x16414cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x164150: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x164150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x164154: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x164154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x164158: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164158u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16415c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16415cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164160: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164160u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164168: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16416c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x16416cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x164170: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x164170u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x164174: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x164174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x164178: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164178u;
    {
        const bool branch_taken_0x164178 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164178u;
        // 0x16417c: 0x8ea21ab0  lw          $v0, 0x1AB0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164178) {
            ctx->pc = 0x16419Cu;
            goto label_16419c;
        }
    }
    ctx->pc = 0x164180u;
    // 0x164180: 0xaea41aa8  sw          $a0, 0x1AA8($s5)
    ctx->pc = 0x164180u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6824), GPR_U32(ctx, 4));
    // 0x164184: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x164184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x164188: 0xaea21ab0  sw          $v0, 0x1AB0($s5)
    ctx->pc = 0x164188u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6832), GPR_U32(ctx, 2));
    // 0x16418c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x16418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x164190: 0x46100ad  bgez        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x164190u;
    {
        const bool branch_taken_0x164190 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x164194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164190u;
        // 0x164194: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164190) {
            ctx->pc = 0x164448u;
            goto label_164448;
        }
    }
    ctx->pc = 0x164198u;
    // 0x164198: 0x8ea21ab0  lw          $v0, 0x1AB0($s5)
    ctx->pc = 0x164198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6832)));
label_16419c:
    // 0x16419c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x16419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1641a0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1641a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1641a4: 0xaea31aac  sw          $v1, 0x1AAC($s5)
    ctx->pc = 0x1641a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6828), GPR_U32(ctx, 3));
    // 0x1641a8: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1641A8u;
    {
        const bool branch_taken_0x1641a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641A8u;
        // 0x1641ac: 0xaea21ab0  sw          $v0, 0x1AB0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641a8) {
            ctx->pc = 0x164444u;
            goto label_164444;
        }
    }
    ctx->pc = 0x1641B0u;
label_1641b0:
    // 0x1641b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1641b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1641b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1641b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1641b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1641b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1641bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1641bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1641c0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1641c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1641c4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1641c4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1641c8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1641c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1641cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1641ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1641d0: 0xc7818358  lwc1        $f1, -0x7CA8($gp)
    ctx->pc = 0x1641d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1641d4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1641d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1641d8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1641d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1641dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1641dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1641e0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1641e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1641e4: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1641e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1641e8: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1641e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1641ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1641ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1641f0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1641f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1641f4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1641f4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1641f8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1641f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1641fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1641fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164200: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164204: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x164204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x164208: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x164208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16420c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16420cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x164210: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x164210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x164214: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x164214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x164218: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164218u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16421c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16421cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164220: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164220u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164228: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16422c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x16422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x164230: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x164230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x164234: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x164234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x164238: 0x5cc00001  bgtzl       $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x164238u;
    {
        const bool branch_taken_0x164238 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x164238) {
            ctx->pc = 0x16423Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164238u;
            // 0x16423c: 0xaea61aa0  sw          $a2, 0x1AA0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 6816), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164240u;
            goto label_164240;
        }
    }
    ctx->pc = 0x164240u;
label_164240:
    // 0x164240: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x164240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164244: 0x442007f  bltzl       $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x164244u;
    {
        const bool branch_taken_0x164244 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x164244) {
            ctx->pc = 0x164248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164244u;
            // 0x164248: 0xaea21aa4  sw          $v0, 0x1AA4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 6820), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164444u;
            goto label_164444;
        }
    }
    ctx->pc = 0x16424Cu;
    // 0x16424c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x16424Cu;
    {
        const bool branch_taken_0x16424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16424Cu;
        // 0x164250: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16424c) {
            ctx->pc = 0x164448u;
            goto label_164448;
        }
    }
    ctx->pc = 0x164254u;
    // 0x164254: 0x0  nop
    ctx->pc = 0x164254u;
    // NOP
label_164258:
    // 0x164258: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16425c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x16425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x164260: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x164260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x164264: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164268: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164268u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16426c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16426cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164274: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x164274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x164278: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x164278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16427c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x16427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x164280: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164284: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164284u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164288: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164288u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16428c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16428cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164294: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x164294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x164298: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x164298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16429c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16429cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1642a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1642a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1642a4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1642a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1642a8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1642a8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1642ac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1642acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1642b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1642b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1642b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1642b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1642b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1642b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1642bc: 0x26a41a90  addiu       $a0, $s5, 0x1A90
    ctx->pc = 0x1642bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6800));
    // 0x1642c0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1642c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1642c4: 0x26a31a80  addiu       $v1, $s5, 0x1A80
    ctx->pc = 0x1642c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 6784));
    // 0x1642c8: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x1642c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1642cc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1642ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1642d0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1642d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1642d4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1642d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1642d8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1642d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1642dc: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1642dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1642e0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1642E0u;
    {
        const bool branch_taken_0x1642e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642E0u;
        // 0x1642e4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642e0) {
            ctx->pc = 0x164448u;
            goto label_164448;
        }
    }
    ctx->pc = 0x1642E8u;
label_1642e8:
    // 0x1642e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1642e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1642ec: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1642ECu;
    {
        const bool branch_taken_0x1642ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642ECu;
        // 0x1642f0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642ec) {
            ctx->pc = 0x164440u;
            goto label_164440;
        }
    }
    ctx->pc = 0x1642F4u;
    // 0x1642f4: 0x0  nop
    ctx->pc = 0x1642f4u;
    // NOP
label_1642f8:
    // 0x1642f8: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x1642f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1642fc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1642FCu;
    {
        const bool branch_taken_0x1642fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642FCu;
        // 0x164300: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642fc) {
            ctx->pc = 0x16434Cu;
            goto label_16434c;
        }
    }
    ctx->pc = 0x164304u;
    // 0x164304: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x164304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164308: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x164308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x16430c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164310: 0x8c636fb0  lw          $v1, 0x6FB0($v1)
    ctx->pc = 0x164310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28592)));
    // 0x164314: 0x600008  jr          $v1
    ctx->pc = 0x164314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164320u: goto label_164320;
            case 0x164328u: goto label_164328;
            case 0x164330u: goto label_164330;
            case 0x164338u: goto label_164338;
            case 0x164340u: goto label_164340;
            case 0x164348u: goto label_164348;
            case 0x16434Cu: goto label_16434c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164314u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16431Cu;
    // 0x16431c: 0x0  nop
    ctx->pc = 0x16431cu;
    // NOP
label_164320:
    // 0x164320: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164320u;
    {
        const bool branch_taken_0x164320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164320u;
        // 0x164324: 0x249119e4  addiu       $s1, $a0, 0x19E4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6628));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164320) {
            ctx->pc = 0x16434Cu;
            goto label_16434c;
        }
    }
    ctx->pc = 0x164328u;
label_164328:
    // 0x164328: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164328u;
    {
        const bool branch_taken_0x164328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164328u;
        // 0x16432c: 0x249119f0  addiu       $s1, $a0, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164328) {
            ctx->pc = 0x16434Cu;
            goto label_16434c;
        }
    }
    ctx->pc = 0x164330u;
label_164330:
    // 0x164330: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164330u;
    {
        const bool branch_taken_0x164330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164330u;
        // 0x164334: 0x249119fc  addiu       $s1, $a0, 0x19FC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164330) {
            ctx->pc = 0x16434Cu;
            goto label_16434c;
        }
    }
    ctx->pc = 0x164338u;
label_164338:
    // 0x164338: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164338u;
    {
        const bool branch_taken_0x164338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164338u;
        // 0x16433c: 0x24911a08  addiu       $s1, $a0, 0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164338) {
            ctx->pc = 0x16434Cu;
            goto label_16434c;
        }
    }
    ctx->pc = 0x164340u;
label_164340:
    // 0x164340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164340u;
    {
        const bool branch_taken_0x164340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164340u;
        // 0x164344: 0x24911a14  addiu       $s1, $a0, 0x1A14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164340) {
            ctx->pc = 0x16434Cu;
            goto label_16434c;
        }
    }
    ctx->pc = 0x164348u;
label_164348:
    // 0x164348: 0x24911a20  addiu       $s1, $a0, 0x1A20
    ctx->pc = 0x164348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
label_16434c:
    // 0x16434c: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x16434Cu;
    {
        const bool branch_taken_0x16434c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x164350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16434Cu;
        // 0x164350: 0x26a50d74  addiu       $a1, $s5, 0xD74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16434c) {
            ctx->pc = 0x164438u;
            goto label_164438;
        }
    }
    ctx->pc = 0x164354u;
    // 0x164354: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x164354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x164358: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x164358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x16435c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164360: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x164360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x164364: 0x28440021  slti        $a0, $v0, 0x21
    ctx->pc = 0x164364u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x164368: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x164368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x16436c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16436Cu;
    {
        const bool branch_taken_0x16436c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x164370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16436Cu;
        // 0x164370: 0x24700d80  addiu       $s0, $v1, 0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16436c) {
            ctx->pc = 0x164388u;
            goto label_164388;
        }
    }
    ctx->pc = 0x164374u;
    // 0x164374: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x164374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x164378: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x164378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16437c: 0x24a56f88  addiu       $a1, $a1, 0x6F88
    ctx->pc = 0x16437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28552));
    // 0x164380: 0xc068186  jal         func_1A0618
    ctx->pc = 0x164380u;
    SET_GPR_U32(ctx, 31, 0x164388u);
    ctx->pc = 0x164384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164380u;
    // 0x164384: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x164380u, 0x164388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164388u;
label_164388:
    // 0x164388: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x164388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16438c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x16438cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164390: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x164390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x164394: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164398: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x164398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x16439c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x16439cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1643a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1643a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1643a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1643a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1643a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1643a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1643ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1643acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1643b0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1643b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1643b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1643b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1643b8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1643b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1643bc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1643bcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1643c0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1643c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1643c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1643c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1643c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1643c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1643cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1643ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1643d0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1643d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1643d4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1643d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1643d8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1643d8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1643dc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1643dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1643e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1643e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1643e4: 0x8ea301b4  lw          $v1, 0x1B4($s5)
    ctx->pc = 0x1643e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
    // 0x1643e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1643e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1643ec: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1643ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1643f0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1643f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1643f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1643f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1643f8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1643f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1643fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1643fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164400: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x164400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164404: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x164404u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x164408: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x164408u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16440c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x16440cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x164410: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x164410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164414: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x164418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16441c: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x16441cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x164420: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x164420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x164424: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x164424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x164428: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x164428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x16442c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16442cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x164430: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164430u;
    {
        const bool branch_taken_0x164430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164430u;
        // 0x164434: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164430) {
            ctx->pc = 0x164444u;
            goto label_164444;
        }
    }
    ctx->pc = 0x164438u;
label_164438:
    // 0x164438: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x164438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16443c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x16443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_164440:
    // 0x164440: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x164440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_164444:
    // 0x164444: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x164444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_164448:
    // 0x164448: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x164448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16444c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x164450: 0x1460ff15  bnez        $v1, . + 4 + (-0xEB << 2)
    ctx->pc = 0x164450u;
    {
        const bool branch_taken_0x164450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164450u;
        // 0x164454: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164450) {
            ctx->pc = 0x1640A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1640a8;
        }
    }
    ctx->pc = 0x164458u;
    // 0x164458: 0x8ea31ab0  lw          $v1, 0x1AB0($s5)
    ctx->pc = 0x164458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6832)));
    // 0x16445c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164460: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164460u;
    {
        const bool branch_taken_0x164460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164460u;
        // 0x164464: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164460) {
            ctx->pc = 0x164470u;
            goto label_164470;
        }
    }
    ctx->pc = 0x164468u;
    // 0x164468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16446c: 0xaea21ab0  sw          $v0, 0x1AB0($s5)
    ctx->pc = 0x16446cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6832), GPR_U32(ctx, 2));
label_164470:
    // 0x164470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164474: 0x26a31180  addiu       $v1, $s5, 0x1180
    ctx->pc = 0x164474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4480));
    // 0x164478: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x164478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16447c: 0x0  nop
    ctx->pc = 0x16447cu;
    // NOP
label_164480:
    // 0x164480: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x164480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x164484: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164484u;
    {
        const bool branch_taken_0x164484 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x164488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164484u;
        // 0x164488: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164484) {
            ctx->pc = 0x164498u;
            goto label_164498;
        }
    }
    ctx->pc = 0x16448Cu;
    // 0x16448c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x16448cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164490: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164490u;
    {
        const bool branch_taken_0x164490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164490u;
        // 0x164494: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164490) {
            ctx->pc = 0x16449Cu;
            goto label_16449c;
        }
    }
    ctx->pc = 0x164498u;
label_164498:
    // 0x164498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16449c:
    // 0x16449c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1644a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1644a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1644a4: 0x481fff6  bgez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1644A4u;
    {
        const bool branch_taken_0x1644a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1644A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644A4u;
        // 0x1644a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644a4) {
            ctx->pc = 0x164480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164480;
        }
    }
    ctx->pc = 0x1644ACu;
    // 0x1644ac: 0x12c00023  beqz        $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x1644ACu;
    {
        const bool branch_taken_0x1644ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1644ac) {
            ctx->pc = 0x16453Cu;
            goto label_16453c;
        }
    }
    ctx->pc = 0x1644B4u;
    // 0x1644b4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1644b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644b8: 0x26a611b0  addiu       $a2, $s5, 0x11B0
    ctx->pc = 0x1644b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4528));
    // 0x1644bc: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1644bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1644c0: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1644C0u;
    {
        const bool branch_taken_0x1644c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644C0u;
        // 0x1644c4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644c0) {
            ctx->pc = 0x16453Cu;
            goto label_16453c;
        }
    }
    ctx->pc = 0x1644C8u;
    // 0x1644c8: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1644c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1644cc: 0x0  nop
    ctx->pc = 0x1644ccu;
    // NOP
label_1644d0:
    // 0x1644d0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1644d4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1644d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1644d8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1644d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1644dc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1644dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1644e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1644e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1644e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1644e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1644e8: 0x58e00012  blezl       $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1644E8u;
    {
        const bool branch_taken_0x1644e8 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1644e8) {
            ctx->pc = 0x1644ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1644E8u;
            // 0x1644ec: 0x8d450000  lw          $a1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164534u;
            goto label_164534;
        }
    }
    ctx->pc = 0x1644F0u;
    // 0x1644f0: 0xc783835c  lwc1        $f3, -0x7CA4($gp)
    ctx->pc = 0x1644f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1644f4: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x1644f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1644f8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1644f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1644fc: 0x0  nop
    ctx->pc = 0x1644fcu;
    // NOP
label_164500:
    // 0x164500: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x164500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x164504: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x164504u;
    {
        const bool branch_taken_0x164504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x164508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164504u;
        // 0x164508: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164504) {
            ctx->pc = 0x164528u;
            goto label_164528;
        }
    }
    ctx->pc = 0x16450Cu;
    // 0x16450c: 0x0  nop
    ctx->pc = 0x16450cu;
    // NOP
    // 0x164510: 0x0  nop
    ctx->pc = 0x164510u;
    // NOP
    // 0x164514: 0x46021843  div.s       $f1, $f3, $f2
    ctx->pc = 0x164514u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x164518: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x164518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x16451c: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x16451cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x164520: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x164520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x164524: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x164524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_164528:
    // 0x164528: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x164528u;
    {
        const bool branch_taken_0x164528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164528u;
        // 0x16452c: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164528) {
            ctx->pc = 0x164500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164500;
        }
    }
    ctx->pc = 0x164530u;
    // 0x164530: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x164530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_164534:
    // 0x164534: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x164534u;
    {
        const bool branch_taken_0x164534 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x164538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164534u;
        // 0x164538: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164534) {
            ctx->pc = 0x1644D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1644d0;
        }
    }
    ctx->pc = 0x16453Cu;
label_16453c:
    // 0x16453c: 0x12e00081  beqz        $s7, . + 4 + (0x81 << 2)
    ctx->pc = 0x16453Cu;
    {
        const bool branch_taken_0x16453c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x164540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16453Cu;
        // 0x164540: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16453c) {
            ctx->pc = 0x164744u;
            goto label_164744;
        }
    }
    ctx->pc = 0x164544u;
    // 0x164544: 0x26b119c0  addiu       $s1, $s5, 0x19C0
    ctx->pc = 0x164544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 6592));
    // 0x164548: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x164548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16454c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16454cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164550: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x164550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164554: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x164554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x164558: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x164558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16455c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16455cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164560: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164560u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164564: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164564u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164568: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164568u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16456c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16456cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164574: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x164574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164578: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x164578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x16457c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x16457cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x164580: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x164584: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x164584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x164588: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x164588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16458c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16458cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164590: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x164590u;
    {
        const bool branch_taken_0x164590 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x164594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164590u;
        // 0x164594: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164590) {
            ctx->pc = 0x16459Cu;
            goto label_16459c;
        }
    }
    ctx->pc = 0x164598u;
    // 0x164598: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x164598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_16459c:
    // 0x16459c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x16459Cu;
    SET_GPR_U32(ctx, 31, 0x1645A4u);
    ctx->pc = 0x1645A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16459Cu;
    // 0x1645a0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x16459Cu, 0x1645A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645A4u;
label_1645a4:
    // 0x1645a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1645a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645a8: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1645A8u;
    {
        const bool branch_taken_0x1645a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1645ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645A8u;
        // 0x1645ac: 0xae26000c  sw          $a2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645a8) {
            ctx->pc = 0x1645D0u;
            goto label_1645d0;
        }
    }
    ctx->pc = 0x1645B0u;
    // 0x1645b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1645b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1645b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1645b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645b8: 0x24a56f98  addiu       $a1, $a1, 0x6F98
    ctx->pc = 0x1645b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28568));
    // 0x1645bc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1645BCu;
    SET_GPR_U32(ctx, 31, 0x1645C4u);
    ctx->pc = 0x1645C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1645BCu;
    // 0x1645c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1645BCu, 0x1645C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645C4u;
label_1645c4:
    // 0x1645c4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1645C4u;
    {
        const bool branch_taken_0x1645c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645C4u;
        // 0x1645c8: 0x26a519c0  addiu       $a1, $s5, 0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645c4) {
            ctx->pc = 0x1646B8u;
            goto label_1646b8;
        }
    }
    ctx->pc = 0x1645CCu;
    // 0x1645cc: 0x0  nop
    ctx->pc = 0x1645ccu;
    // NOP
label_1645d0:
    // 0x1645d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1645d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1645d4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1645d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645d8: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1645D8u;
    {
        const bool branch_taken_0x1645d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1645DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645D8u;
        // 0x1645dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645d8) {
            ctx->pc = 0x1646B4u;
            goto label_1646b4;
        }
    }
    ctx->pc = 0x1645E0u;
    // 0x1645e0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1645e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1645e4: 0x0  nop
    ctx->pc = 0x1645e4u;
    // NOP
label_1645e8:
    // 0x1645e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1645e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1645ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1645ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1645f0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1645f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1645f4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1645f4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1645f8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1645f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1645fc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1645fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x164600: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x164600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164604: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x164604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164608: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x164608u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16460c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16460cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164610: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164610u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164614: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x164614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164618: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x164618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16461c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16461cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164620: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164624: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164624u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164628: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164628u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16462c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16462cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164630: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164634: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x164634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164638: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x164638u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x16463c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16463cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164640: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164640u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164648: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x164648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16464c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x16464cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x164650: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x164650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x164654: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x164654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x164658: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x164658u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16465c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16465cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x164660: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x164660u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x164664: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x164664u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x164668: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x164668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x16466c: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x16466cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x164670: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x164670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x164674: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x164674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x164678: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x164678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16467c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16467cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x164680: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x164680u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x164684: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x164684u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x164688: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x164688u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x16468c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x16468cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x164690: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x164690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x164694: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x164694u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x164698: 0x127382a  slt         $a3, $t1, $a3
    ctx->pc = 0x164698u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x16469c: 0xe5040028  swc1        $f4, 0x28($t0)
    ctx->pc = 0x16469cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x1646a0: 0xe504002c  swc1        $f4, 0x2C($t0)
    ctx->pc = 0x1646a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
    // 0x1646a4: 0xad000030  sw          $zero, 0x30($t0)
    ctx->pc = 0x1646a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 0));
    // 0x1646a8: 0xad000034  sw          $zero, 0x34($t0)
    ctx->pc = 0x1646a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 0));
    // 0x1646ac: 0x14e0ffce  bnez        $a3, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1646ACu;
    {
        const bool branch_taken_0x1646ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646ACu;
        // 0x1646b0: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646ac) {
            ctx->pc = 0x1645E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1645e8;
        }
    }
    ctx->pc = 0x1646B4u;
label_1646b4:
    // 0x1646b4: 0x26a519c0  addiu       $a1, $s5, 0x19C0
    ctx->pc = 0x1646b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6592));
label_1646b8:
    // 0x1646b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1646b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1646bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1646bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1646c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1646c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646c4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1646c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1646c8: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1646C8u;
    {
        const bool branch_taken_0x1646c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1646CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646C8u;
        // 0x1646cc: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646c8) {
            ctx->pc = 0x164728u;
            goto label_164728;
        }
    }
    ctx->pc = 0x1646D0u;
    // 0x1646d0: 0xc7838360  lwc1        $f3, -0x7CA0($gp)
    ctx->pc = 0x1646d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1646d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1646d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1646d8:
    // 0x1646d8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1646d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1646dc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1646dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1646e0: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x1646E0u;
    {
        const bool branch_taken_0x1646e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1646e0) {
            ctx->pc = 0x1646E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1646E0u;
            // 0x1646e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16471Cu;
            goto label_16471c;
        }
    }
    ctx->pc = 0x1646E8u;
    // 0x1646e8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1646e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1646ec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1646ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1646f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1646F0u;
    {
        const bool branch_taken_0x1646f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1646f0) {
            ctx->pc = 0x164704u;
            goto label_164704;
        }
    }
    ctx->pc = 0x1646F8u;
    // 0x1646f8: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x1646f8u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
    // 0x1646fc: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x1646fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x164700: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x164700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_164704:
    // 0x164704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164708: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x164708u;
    {
        const bool branch_taken_0x164708 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164708) {
            ctx->pc = 0x16470Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164708u;
            // 0x16470c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16471Cu;
            goto label_16471c;
        }
    }
    ctx->pc = 0x164710u;
    // 0x164710: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x164710u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x164714: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x164714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x164718: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x164718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16471c:
    // 0x16471c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x16471cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x164720: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x164720u;
    {
        const bool branch_taken_0x164720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164720u;
        // 0x164724: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164720) {
            ctx->pc = 0x1646D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1646d8;
        }
    }
    ctx->pc = 0x164728u;
label_164728:
    // 0x164728: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x164728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x16472c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16472cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x164730: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x164730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164734: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x164734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164738: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16473c: 0xc05862e  jal         func_1618B8
    ctx->pc = 0x16473Cu;
    SET_GPR_U32(ctx, 31, 0x164744u);
    ctx->pc = 0x164740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16473Cu;
    // 0x164740: 0xe6a01ac4  swc1        $f0, 0x1AC4($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 6852), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1618B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1618B8u, 0x16473Cu, 0x164744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164744u;
label_164744:
    // 0x164744: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x164744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164748: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x164748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16474c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x16474cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x164750: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x164750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164754: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x164754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x164758: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x164758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16475c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x16475cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x164760: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x164760u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x164764: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x164764u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x164768: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x164768u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16476c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x16476cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x164770: 0x3e00008  jr          $ra
    ctx->pc = 0x164770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164770u;
        // 0x164774: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164778u;
}
