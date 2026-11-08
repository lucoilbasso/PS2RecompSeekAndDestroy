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

// Function: WMonitorLoadImage__FPUI80P15WMonitorBufInfoP7IRect16
// Address: 0x177028 - 0x177204
void WMonitorLoadImage__FPUI80P15WMonitorBufInfoP7IRect16_0x177028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMonitorLoadImage__FPUI80P15WMonitorBufInfoP7IRect16_0x177028");
#endif

    switch (ctx->pc) {
        case 0x177054u: goto label_177054;
        case 0x177088u: goto label_177088;
        case 0x17709cu: goto label_17709c;
        case 0x1770d4u: goto label_1770d4;
        case 0x17712cu: goto label_17712c;
        case 0x177134u: goto label_177134;
        case 0x177140u: goto label_177140;
        case 0x177160u: goto label_177160;
        case 0x177168u: goto label_177168;
        case 0x1771a8u: goto label_1771a8;
        case 0x1771e0u: goto label_1771e0;
        case 0x1771e8u: goto label_1771e8;
        default: break;
    }

    ctx->pc = 0x177028u;

    // 0x177028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17702c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x177030: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x177030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177034: 0x8f848c98  lw          $a0, -0x7368($gp)
    ctx->pc = 0x177034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    // 0x177038: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x177038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17703c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17703cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177040: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x177040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x177044: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x177044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x177048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x177048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17704c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17704Cu;
    SET_GPR_U32(ctx, 31, 0x177054u);
    ctx->pc = 0x177050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17704Cu;
    // 0x177050: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17704Cu, 0x177054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177054u;
label_177054:
    // 0x177054: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x177054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x177058: 0x8c62cec0  lw          $v0, -0x3140($v1)
    ctx->pc = 0x177058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x26CEC0u));
    // 0x17705c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17705Cu;
    {
        const bool branch_taken_0x17705c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17705Cu;
        // 0x177060: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17705c) {
            ctx->pc = 0x177088u;
            goto label_177088;
        }
    }
    ctx->pc = 0x177064u;
    // 0x177064: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x177064u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177068: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x177068u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17706c: 0x248478a8  addiu       $a0, $a0, 0x78A8
    ctx->pc = 0x17706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30888));
    // 0x177070: 0x86270002  lh          $a3, 0x2($s1)
    ctx->pc = 0x177070u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x177074: 0x86280004  lh          $t0, 0x4($s1)
    ctx->pc = 0x177074u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x177078: 0x86290006  lh          $t1, 0x6($s1)
    ctx->pc = 0x177078u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x17707c: 0x964a0002  lhu         $t2, 0x2($s2)
    ctx->pc = 0x17707cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x177080: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x177080u;
    SET_GPR_U32(ctx, 31, 0x177088u);
    ctx->pc = 0x177084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177080u;
    // 0x177084: 0x964b0004  lhu         $t3, 0x4($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x177080u, 0x177088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177088u;
label_177088:
    // 0x177088: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x177088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17708c: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x17708cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    // 0x177090: 0x248478d0  addiu       $a0, $a0, 0x78D0
    ctx->pc = 0x177090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30928));
    // 0x177094: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x177094u;
    SET_GPR_U32(ctx, 31, 0x17709Cu);
    ctx->pc = 0x177098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177094u;
    // 0x177098: 0x2610cf00  addiu       $s0, $s0, -0x3100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x177094u, 0x17709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17709Cu;
label_17709c:
    // 0x17709c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1770a0: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x1770a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1770a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1770a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1770a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1770a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1770ac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1770acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1770b0: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x1770b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1770b4: 0x86470004  lh          $a3, 0x4($s2)
    ctx->pc = 0x1770b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1770b8: 0x862b0006  lh          $t3, 0x6($s1)
    ctx->pc = 0x1770b8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1770bc: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x1770bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1770c0: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x1770c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1770c4: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x1770c4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1770c8: 0x86290002  lh          $t1, 0x2($s1)
    ctx->pc = 0x1770c8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1770cc: 0xc06ac76  jal         func_1AB1D8
    ctx->pc = 0x1770CCu;
    SET_GPR_U32(ctx, 31, 0x1770D4u);
    ctx->pc = 0x1770D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1770CCu;
    // 0x1770d0: 0x862a0004  lh          $t2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB1D8u, 0x1770CCu, 0x1770D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770D4u;
label_1770d4:
    // 0x1770d4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1770d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1770d8: 0x2631024  and         $v0, $s3, $v1
    ctx->pc = 0x1770d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x1770dc: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1770DCu;
    {
        const bool branch_taken_0x1770dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1770dc) {
            ctx->pc = 0x1770E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1770DCu;
            // 0x1770e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1770F8u;
            goto label_1770f8;
        }
    }
    ctx->pc = 0x1770E4u;
    // 0x1770e4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1770e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1770e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1770e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1770ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1770ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1770f0: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x1770f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1770f4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1770f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1770f8:
    // 0x1770f8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1770f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1770fc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1770fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x177100: 0x2442cf00  addiu       $v0, $v0, -0x3100
    ctx->pc = 0x177100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954752));
    // 0x177104: 0xdc430060  ld          $v1, 0x60($v0)
    ctx->pc = 0x177104u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x26CF60u));
    // 0x177108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17710c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x17710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x177110: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x177110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177114: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x177114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x177118: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x177118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17711c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x17711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x177120: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x177120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177124: 0xc06bf56  jal         func_1AFD58
    ctx->pc = 0x177124u;
    SET_GPR_U32(ctx, 31, 0x17712Cu);
    ctx->pc = 0x177128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177124u;
    // 0x177128: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD58u, 0x177124u, 0x17712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17712Cu;
label_17712c:
    // 0x17712c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17712Cu;
    SET_GPR_U32(ctx, 31, 0x177134u);
    ctx->pc = 0x177130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17712Cu;
    // 0x177130: 0x8f848c64  lw          $a0, -0x739C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17712Cu, 0x177134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177134u;
label_177134:
    // 0x177134: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x177134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x177138: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x177138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x17713c: 0x0  nop
    ctx->pc = 0x17713cu;
    // NOP
label_177140:
    // 0x177140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x177140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177144: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x177144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x177148: 0x0  nop
    ctx->pc = 0x177148u;
    // NOP
    // 0x17714c: 0x0  nop
    ctx->pc = 0x17714cu;
    // NOP
    // 0x177150: 0x0  nop
    ctx->pc = 0x177150u;
    // NOP
    // 0x177154: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x177154u;
    {
        const bool branch_taken_0x177154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177154) {
            ctx->pc = 0x177140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177140;
        }
    }
    ctx->pc = 0x17715Cu;
    // 0x17715c: 0x0  nop
    ctx->pc = 0x17715cu;
    // NOP
label_177160:
    // 0x177160: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x177160u;
    SET_GPR_U32(ctx, 31, 0x177168u);
    ctx->pc = 0x177164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177160u;
    // 0x177164: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x177160u, 0x177168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177168u;
label_177168:
    // 0x177168: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x177168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x17716c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17716Cu;
    {
        const bool branch_taken_0x17716c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x177170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17716Cu;
        // 0x177170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17716c) {
            ctx->pc = 0x177160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177160;
        }
    }
    ctx->pc = 0x177174u;
    // 0x177174: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x177174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177178: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x177178u;
    {
        const bool branch_taken_0x177178 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177178u;
        // 0x17717c: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177178) {
            ctx->pc = 0x177198u;
            goto label_177198;
        }
    }
    ctx->pc = 0x177180u;
    // 0x177180: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x177180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x177184: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x177184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x177188: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x177188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17718c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x17718cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x177190: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x177190u;
    {
        const bool branch_taken_0x177190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177190u;
        // 0x177194: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177190) {
            ctx->pc = 0x1771A8u;
            goto label_1771a8;
        }
    }
    ctx->pc = 0x177198u;
label_177198:
    // 0x177198: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x177198u;
    {
        const bool branch_taken_0x177198 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177198u;
        // 0x17719c: 0x8f838c54  lw          $v1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177198) {
            ctx->pc = 0x1771ACu;
            goto label_1771ac;
        }
    }
    ctx->pc = 0x1771A0u;
    // 0x1771a0: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1771A0u;
    SET_GPR_U32(ctx, 31, 0x1771A8u);
    ctx->pc = 0x1771A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1771A0u;
    // 0x1771a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1771A0u, 0x1771A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771A8u;
label_1771a8:
    // 0x1771a8: 0x8f838c54  lw          $v1, -0x73AC($gp)
    ctx->pc = 0x1771a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_1771ac:
    // 0x1771ac: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x1771acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1771b0: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x1771b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1771b4: 0x8f848c6c  lw          $a0, -0x7394($gp)
    ctx->pc = 0x1771b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x1771b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1771b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1771bc: 0xac710030  sw          $s1, 0x30($v1)
    ctx->pc = 0x1771bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 17));
    // 0x1771c0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1771c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1771c4: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1771c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1771c8: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1771c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1771cc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1771ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1771d0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1771d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1771d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1771d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1771d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1771D8u;
    SET_GPR_U32(ctx, 31, 0x1771E0u);
    ctx->pc = 0x1771DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1771D8u;
    // 0x1771dc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1771D8u, 0x1771E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771E0u;
label_1771e0:
    // 0x1771e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1771E0u;
    SET_GPR_U32(ctx, 31, 0x1771E8u);
    ctx->pc = 0x1771E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1771E0u;
    // 0x1771e4: 0x8f848c98  lw          $a0, -0x7368($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1771E0u, 0x1771E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771E8u;
label_1771e8:
    // 0x1771e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1771e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1771ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1771ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1771f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1771f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1771f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1771f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1771f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1771f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1771fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1771FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771FCu;
        // 0x177200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1771FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177204u;
}
