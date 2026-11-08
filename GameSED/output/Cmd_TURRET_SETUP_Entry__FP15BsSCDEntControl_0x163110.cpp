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

// Function: Cmd_TURRET_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x163110 - 0x163568
void Cmd_TURRET_SETUP_Entry__FP15BsSCDEntControl_0x163110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TURRET_SETUP_Entry__FP15BsSCDEntControl_0x163110");
#endif

    switch (ctx->pc) {
        case 0x16314cu: goto label_16314c;
        case 0x163158u: goto label_163158;
        case 0x163160u: goto label_163160;
        case 0x163180u: goto label_163180;
        case 0x1631f0u: goto label_1631f0;
        case 0x16320cu: goto label_16320c;
        case 0x163220u: goto label_163220;
        case 0x163234u: goto label_163234;
        case 0x16327cu: goto label_16327c;
        case 0x163298u: goto label_163298;
        case 0x1632b0u: goto label_1632b0;
        case 0x1632ccu: goto label_1632cc;
        case 0x163348u: goto label_163348;
        case 0x1633a0u: goto label_1633a0;
        case 0x163420u: goto label_163420;
        case 0x163428u: goto label_163428;
        case 0x1634e0u: goto label_1634e0;
        case 0x163538u: goto label_163538;
        default: break;
    }

    ctx->pc = 0x163110u;

    // 0x163110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x163110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x163114: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x163114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x163118: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x163118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16311c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16311cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x163120: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x163120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x163124: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x163124u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163128: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x163128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16312c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x16312cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x163130: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x163130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x163134: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x163134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x163138: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x163138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x16313c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x16313cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x163140: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x163140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x163144: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x163144u;
    SET_GPR_U32(ctx, 31, 0x16314Cu);
    ctx->pc = 0x163148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163144u;
    // 0x163148: 0x8c570044  lw          $s7, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163144u, 0x16314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16314Cu;
label_16314c:
    // 0x16314c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x163150: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x163150u;
    SET_GPR_U32(ctx, 31, 0x163158u);
    ctx->pc = 0x163154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163150u;
    // 0x163154: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x163150u, 0x163158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163158u;
label_163158:
    // 0x163158: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x163158u;
    SET_GPR_U32(ctx, 31, 0x163160u);
    ctx->pc = 0x16315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163158u;
    // 0x16315c: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x163158u, 0x163160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163160u;
label_163160:
    // 0x163160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163164: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x163164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x163168: 0x2442f1a0  addiu       $v0, $v0, -0xE60
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963616));
    // 0x16316c: 0x261101f0  addiu       $s1, $s0, 0x1F0
    ctx->pc = 0x16316cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x163170: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x163170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x163174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163178: 0xc061258  jal         func_184960
    ctx->pc = 0x163178u;
    SET_GPR_U32(ctx, 31, 0x163180u);
    ctx->pc = 0x16317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163178u;
    // 0x16317c: 0x26130210  addiu       $s3, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x163178u, 0x163180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163180u;
label_163180:
    // 0x163180: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x163180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x163184: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x163184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x163188: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x163188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x16318c: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x16318cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x163190: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x163190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x163194: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x163194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x163198: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x163198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x16319c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x16319cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1631a0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1631a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1631a4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1631a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1631a8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1631a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1631ac: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1631acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1631b0: 0xfa600000  sqc2        $vf0, 0x0($s3)
    ctx->pc = 0x1631b0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1631b4: 0x26150220  addiu       $s5, $s0, 0x220
    ctx->pc = 0x1631b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1631b8: 0xfaa00000  sqc2        $vf0, 0x0($s5)
    ctx->pc = 0x1631b8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1631bc: 0x24020111  addiu       $v0, $zero, 0x111
    ctx->pc = 0x1631bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x1631c0: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1631c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x1631c4: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1631c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x1631c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1631c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631cc: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1631ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x1631d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1631d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1631d4: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x1631d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x1631d8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1631d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631dc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x1631dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x1631e0: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1631e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x1631e4: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1631e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
    // 0x1631e8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1631E8u;
    SET_GPR_U32(ctx, 31, 0x1631F0u);
    ctx->pc = 0x1631ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1631E8u;
    // 0x1631ec: 0xae020270  sw          $v0, 0x270($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1631E8u, 0x1631F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1631F0u;
label_1631f0:
    // 0x1631f0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1631f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1631f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1631f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1631f8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1631F8u;
    {
        const bool branch_taken_0x1631f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1631FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631F8u;
        // 0x1631fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631f8) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x163200u;
    // 0x163200: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x163200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163204: 0xc04110c  jal         func_104430
    ctx->pc = 0x163204u;
    SET_GPR_U32(ctx, 31, 0x16320Cu);
    ctx->pc = 0x163208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163204u;
    // 0x163208: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x163204u, 0x16320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16320Cu;
label_16320c:
    // 0x16320c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16320cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163210: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x163210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x163214: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x163214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163218: 0xc04110c  jal         func_104430
    ctx->pc = 0x163218u;
    SET_GPR_U32(ctx, 31, 0x163220u);
    ctx->pc = 0x16321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163218u;
    // 0x16321c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x163218u, 0x163220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163220u;
label_163220:
    // 0x163220: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x163220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163224: 0xae4201f4  sw          $v0, 0x1F4($s2)
    ctx->pc = 0x163224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 2));
    // 0x163228: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x163228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16322c: 0xc04110c  jal         func_104430
    ctx->pc = 0x16322Cu;
    SET_GPR_U32(ctx, 31, 0x163234u);
    ctx->pc = 0x163230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16322Cu;
    // 0x163230: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16322Cu, 0x163234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163234u;
label_163234:
    // 0x163234: 0x26450204  addiu       $a1, $s2, 0x204
    ctx->pc = 0x163234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 516));
    // 0x163238: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x163238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16323c: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x16323cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x163240: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x163240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163244: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x163244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x163248: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x163248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x16324c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x16324cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x163250: 0xac8201f8  sw          $v0, 0x1F8($a0)
    ctx->pc = 0x163250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 504), GPR_U32(ctx, 2));
    // 0x163254: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x163254u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x163258: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x163258u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x16325c: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x16325cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x163260: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x163260u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x163264: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x163264u;
    {
        const bool branch_taken_0x163264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163264u;
        // 0x163268: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163264) {
            ctx->pc = 0x16352Cu;
            goto label_16352c;
        }
    }
    ctx->pc = 0x16326Cu;
    // 0x16326c: 0x0  nop
    ctx->pc = 0x16326cu;
    // NOP
label_163270:
    // 0x163270: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x163270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163274: 0xc04110c  jal         func_104430
    ctx->pc = 0x163274u;
    SET_GPR_U32(ctx, 31, 0x16327Cu);
    ctx->pc = 0x163278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163274u;
    // 0x163278: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x163274u, 0x16327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16327Cu;
label_16327c:
    // 0x16327c: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x16327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x163280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163284: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x163284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163288: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x163288u;
    {
        const bool branch_taken_0x163288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x163288) {
            ctx->pc = 0x16328Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163288u;
            // 0x16328c: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1632B4u;
            goto label_1632b4;
        }
    }
    ctx->pc = 0x163290u;
    // 0x163290: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x163290u;
    SET_GPR_U32(ctx, 31, 0x163298u);
    ctx->pc = 0x163294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163290u;
    // 0x163294: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x163290u, 0x163298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163298u;
label_163298:
    // 0x163298: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x163298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16329c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632a0: 0x24a56f20  addiu       $a1, $a1, 0x6F20
    ctx->pc = 0x1632a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28448));
    // 0x1632a4: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1632a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1632a8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1632A8u;
    SET_GPR_U32(ctx, 31, 0x1632B0u);
    ctx->pc = 0x1632ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632A8u;
    // 0x1632ac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1632A8u, 0x1632B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1632B0u;
label_1632b0:
    // 0x1632b0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1632b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1632b4:
    // 0x1632b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1632b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1632b8: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1632B8u;
    {
        const bool branch_taken_0x1632b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1632BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632B8u;
        // 0x1632bc: 0x26051a60  addiu       $a1, $s0, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632b8) {
            ctx->pc = 0x163340u;
            goto label_163340;
        }
    }
    ctx->pc = 0x1632C0u;
    // 0x1632c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1632c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632c4: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x1632C4u;
    SET_GPR_U32(ctx, 31, 0x1632CCu);
    ctx->pc = 0x1632C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632C4u;
    // 0x1632c8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x1632C4u, 0x1632CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1632CCu;
label_1632cc:
    // 0x1632cc: 0x8e020c0c  lw          $v0, 0xC0C($s0)
    ctx->pc = 0x1632ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3084)));
    // 0x1632d0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1632D0u;
    {
        const bool branch_taken_0x1632d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1632D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632D0u;
        // 0x1632d4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632d0) {
            ctx->pc = 0x1632E8u;
            goto label_1632e8;
        }
    }
    ctx->pc = 0x1632D8u;
    // 0x1632d8: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1632d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1632dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1632DCu;
    {
        const bool branch_taken_0x1632dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632DCu;
        // 0x1632e0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632dc) {
            ctx->pc = 0x1632ECu;
            goto label_1632ec;
        }
    }
    ctx->pc = 0x1632E4u;
    // 0x1632e4: 0x0  nop
    ctx->pc = 0x1632e4u;
    // NOP
label_1632e8:
    // 0x1632e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1632e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1632ec:
    // 0x1632ec: 0x8e040c10  lw          $a0, 0xC10($s0)
    ctx->pc = 0x1632ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3088)));
    // 0x1632f0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1632F0u;
    {
        const bool branch_taken_0x1632f0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1632F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632F0u;
        // 0x1632f4: 0xae420154  sw          $v0, 0x154($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632f0) {
            ctx->pc = 0x163308u;
            goto label_163308;
        }
    }
    ctx->pc = 0x1632F8u;
    // 0x1632f8: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1632fc: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x1632fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x163300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x163300u;
    {
        const bool branch_taken_0x163300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163300u;
        // 0x163304: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163300) {
            ctx->pc = 0x16330Cu;
            goto label_16330c;
        }
    }
    ctx->pc = 0x163308u;
label_163308:
    // 0x163308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16330c:
    // 0x16330c: 0x8e040c14  lw          $a0, 0xC14($s0)
    ctx->pc = 0x16330cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3092)));
    // 0x163310: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163310u;
    {
        const bool branch_taken_0x163310 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x163314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163310u;
        // 0x163314: 0xae420158  sw          $v0, 0x158($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163310) {
            ctx->pc = 0x163328u;
            goto label_163328;
        }
    }
    ctx->pc = 0x163318u;
    // 0x163318: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x163318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16331c: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x16331cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x163320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x163320u;
    {
        const bool branch_taken_0x163320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163320u;
        // 0x163324: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163320) {
            ctx->pc = 0x16332Cu;
            goto label_16332c;
        }
    }
    ctx->pc = 0x163328u;
label_163328:
    // 0x163328: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x163328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16332c:
    // 0x16332c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163330: 0xae43015c  sw          $v1, 0x15C($s2)
    ctx->pc = 0x163330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 3));
    // 0x163334: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x163334u;
    {
        const bool branch_taken_0x163334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163334u;
        // 0x163338: 0xae42016c  sw          $v0, 0x16C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163334) {
            ctx->pc = 0x1634A0u;
            goto label_1634a0;
        }
    }
    ctx->pc = 0x16333Cu;
    // 0x16333c: 0x0  nop
    ctx->pc = 0x16333cu;
    // NOP
label_163340:
    // 0x163340: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x163340u;
    SET_GPR_U32(ctx, 31, 0x163348u);
    ctx->pc = 0x163344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163340u;
    // 0x163344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163340u, 0x163348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163348u;
label_163348:
    // 0x163348: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163348u;
    {
        const bool branch_taken_0x163348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163348) {
            ctx->pc = 0x163358u;
            goto label_163358;
        }
    }
    ctx->pc = 0x163350u;
    // 0x163350: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x163350u;
    {
        const bool branch_taken_0x163350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163350u;
        // 0x163354: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163350) {
            ctx->pc = 0x163394u;
            goto label_163394;
        }
    }
    ctx->pc = 0x163358u;
label_163358:
    // 0x163358: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163358u;
    {
        const bool branch_taken_0x163358 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x163358) {
            ctx->pc = 0x16335Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163358u;
            // 0x16335c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163370u;
            goto label_163370;
        }
    }
    ctx->pc = 0x163360u;
    // 0x163360: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x163360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x163364: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x163364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x163368: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163368u;
    {
        const bool branch_taken_0x163368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163368u;
        // 0x16336c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163368) {
            ctx->pc = 0x163394u;
            goto label_163394;
        }
    }
    ctx->pc = 0x163370u;
label_163370:
    // 0x163370: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x163370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x163374: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x163374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x163378: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163378u;
    {
        const bool branch_taken_0x163378 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163378u;
        // 0x16337c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163378) {
            ctx->pc = 0x163390u;
            goto label_163390;
        }
    }
    ctx->pc = 0x163380u;
    // 0x163380: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x163380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x163384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163384u;
    {
        const bool branch_taken_0x163384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163384u;
        // 0x163388: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163384) {
            ctx->pc = 0x163394u;
            goto label_163394;
        }
    }
    ctx->pc = 0x16338Cu;
    // 0x16338c: 0x0  nop
    ctx->pc = 0x16338cu;
    // NOP
label_163390:
    // 0x163390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163394:
    // 0x163394: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x163394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
    // 0x163398: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x163398u;
    SET_GPR_U32(ctx, 31, 0x1633A0u);
    ctx->pc = 0x16339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163398u;
    // 0x16339c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163398u, 0x1633A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633A0u;
label_1633a0:
    // 0x1633a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1633A0u;
    {
        const bool branch_taken_0x1633a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1633a0) {
            ctx->pc = 0x1633B0u;
            goto label_1633b0;
        }
    }
    ctx->pc = 0x1633A8u;
    // 0x1633a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1633A8u;
    {
        const bool branch_taken_0x1633a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633A8u;
        // 0x1633ac: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633a8) {
            ctx->pc = 0x1633F0u;
            goto label_1633f0;
        }
    }
    ctx->pc = 0x1633B0u;
label_1633b0:
    // 0x1633b0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1633B0u;
    {
        const bool branch_taken_0x1633b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1633b0) {
            ctx->pc = 0x1633B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1633B0u;
            // 0x1633b4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1633C8u;
            goto label_1633c8;
        }
    }
    ctx->pc = 0x1633B8u;
    // 0x1633b8: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1633b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1633bc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1633bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1633c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1633C0u;
    {
        const bool branch_taken_0x1633c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633C0u;
        // 0x1633c4: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633c0) {
            ctx->pc = 0x1633F0u;
            goto label_1633f0;
        }
    }
    ctx->pc = 0x1633C8u;
label_1633c8:
    // 0x1633c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1633c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1633cc: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x1633ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x1633d0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1633D0u;
    {
        const bool branch_taken_0x1633d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1633D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633D0u;
        // 0x1633d4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633d0) {
            ctx->pc = 0x1633E8u;
            goto label_1633e8;
        }
    }
    ctx->pc = 0x1633D8u;
    // 0x1633d8: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1633d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1633dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1633DCu;
    {
        const bool branch_taken_0x1633dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633DCu;
        // 0x1633e0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633dc) {
            ctx->pc = 0x1633ECu;
            goto label_1633ec;
        }
    }
    ctx->pc = 0x1633E4u;
    // 0x1633e4: 0x0  nop
    ctx->pc = 0x1633e4u;
    // NOP
label_1633e8:
    // 0x1633e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1633e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1633ec:
    // 0x1633ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1633ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1633f0:
    // 0x1633f0: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x1633f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1633f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1633f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1633f8: 0xae430158  sw          $v1, 0x158($s2)
    ctx->pc = 0x1633f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 3));
    // 0x1633fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1633fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163400: 0x50640028  beql        $v1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x163400u;
    {
        const bool branch_taken_0x163400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x163400) {
            ctx->pc = 0x163404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163400u;
            // 0x163404: 0x8e440154  lw          $a0, 0x154($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1634A4u;
            goto label_1634a4;
        }
    }
    ctx->pc = 0x163408u;
    // 0x163408: 0x2653016c  addiu       $s3, $s2, 0x16C
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 364));
    // 0x16340c: 0x2656000c  addiu       $s6, $s2, 0xC
    ctx->pc = 0x16340cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x163410: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x163410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163414: 0x26150004  addiu       $s5, $s0, 0x4
    ctx->pc = 0x163414u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x163418: 0x3c1e8000  lui         $fp, 0x8000
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32768 << 16));
    // 0x16341c: 0x0  nop
    ctx->pc = 0x16341cu;
    // NOP
label_163420:
    // 0x163420: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x163420u;
    SET_GPR_U32(ctx, 31, 0x163428u);
    ctx->pc = 0x163424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163420u;
    // 0x163424: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163420u, 0x163428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163428u;
label_163428:
    // 0x163428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16342c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x16342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x163430: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x163430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163438: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x163438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x16343c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x16343cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x163440: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163440u;
    {
        const bool branch_taken_0x163440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x163444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163440u;
        // 0x163444: 0x2c32821  addu        $a1, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163440) {
            ctx->pc = 0x163450u;
            goto label_163450;
        }
    }
    ctx->pc = 0x163448u;
    // 0x163448: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x163448u;
    {
        const bool branch_taken_0x163448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163448u;
        // 0x16344c: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163448) {
            ctx->pc = 0x16348Cu;
            goto label_16348c;
        }
    }
    ctx->pc = 0x163450u;
label_163450:
    // 0x163450: 0x4830005  bgezl       $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163450u;
    {
        const bool branch_taken_0x163450 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x163450) {
            ctx->pc = 0x163454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163450u;
            // 0x163454: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163468u;
            goto label_163468;
        }
    }
    ctx->pc = 0x163458u;
    // 0x163458: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x163458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16345c: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x16345cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x163460: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163460u;
    {
        const bool branch_taken_0x163460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163460u;
        // 0x163464: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163460) {
            ctx->pc = 0x16348Cu;
            goto label_16348c;
        }
    }
    ctx->pc = 0x163468u;
label_163468:
    // 0x163468: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x163468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16346c: 0x8c430c00  lw          $v1, 0xC00($v0)
    ctx->pc = 0x16346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3072)));
    // 0x163470: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x163470u;
    {
        const bool branch_taken_0x163470 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x163474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163470u;
        // 0x163474: 0x32180  sll         $a0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163470) {
            ctx->pc = 0x163488u;
            goto label_163488;
        }
    }
    ctx->pc = 0x163478u;
    // 0x163478: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x163478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16347c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16347Cu;
    {
        const bool branch_taken_0x16347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16347Cu;
        // 0x163480: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16347c) {
            ctx->pc = 0x16348Cu;
            goto label_16348c;
        }
    }
    ctx->pc = 0x163484u;
    // 0x163484: 0x0  nop
    ctx->pc = 0x163484u;
    // NOP
label_163488:
    // 0x163488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16348c:
    // 0x16348c: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x16348cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x163490: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x163490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x163494: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x163494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163498: 0x145effe1  bne         $v0, $fp, . + 4 + (-0x1F << 2)
    ctx->pc = 0x163498u;
    {
        const bool branch_taken_0x163498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x163498) {
            ctx->pc = 0x163420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163420;
        }
    }
    ctx->pc = 0x1634A0u;
label_1634a0:
    // 0x1634a0: 0x8e440154  lw          $a0, 0x154($s2)
    ctx->pc = 0x1634a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1634a4:
    // 0x1634a4: 0x264601f0  addiu       $a2, $s2, 0x1F0
    ctx->pc = 0x1634a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x1634a8: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x1634a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x1634ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1634acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1634b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1634b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1634b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1634b8: 0x8e44016c  lw          $a0, 0x16C($s2)
    ctx->pc = 0x1634b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x1634bc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1634bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1634c0: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1634C0u;
    {
        const bool branch_taken_0x1634c0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1634C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634C0u;
        // 0x1634c4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634c0) {
            ctx->pc = 0x163528u;
            goto label_163528;
        }
    }
    ctx->pc = 0x1634C8u;
    // 0x1634c8: 0x26490204  addiu       $t1, $s2, 0x204
    ctx->pc = 0x1634c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 516));
    // 0x1634cc: 0x264b01f8  addiu       $t3, $s2, 0x1F8
    ctx->pc = 0x1634ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x1634d0: 0x26460210  addiu       $a2, $s2, 0x210
    ctx->pc = 0x1634d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    // 0x1634d4: 0x26480220  addiu       $t0, $s2, 0x220
    ctx->pc = 0x1634d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x1634d8: 0x2647015c  addiu       $a3, $s2, 0x15C
    ctx->pc = 0x1634d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 348));
    // 0x1634dc: 0x0  nop
    ctx->pc = 0x1634dcu;
    // NOP
label_1634e0:
    // 0x1634e0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1634e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1634e4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1634e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1634e8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1634e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1634ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1634ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1634f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1634f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1634f4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1634f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1634f8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1634f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x1634fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1634fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x163500: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x163500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x163504: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x163504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163508: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x163508u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x16350c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x16350cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x163510: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x163510u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x163514: 0x8e43016c  lw          $v1, 0x16C($s2)
    ctx->pc = 0x163514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x163518: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x163518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x16351c: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x16351cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163520: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x163520u;
    {
        const bool branch_taken_0x163520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163520u;
        // 0x163524: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163520) {
            ctx->pc = 0x1634E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1634e0;
        }
    }
    ctx->pc = 0x163528u;
label_163528:
    // 0x163528: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x163528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16352c:
    // 0x16352c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163530: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x163530u;
    SET_GPR_U32(ctx, 31, 0x163538u);
    ctx->pc = 0x163534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163530u;
    // 0x163534: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x163530u, 0x163538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163538u;
label_163538:
    // 0x163538: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x163538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16353c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16353cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163540: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x163540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163544: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x163544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x163548: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x163548u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16354c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16354cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x163550: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x163550u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163554: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x163554u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x163558: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x163558u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16355c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x16355cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163560: 0x3e00008  jr          $ra
    ctx->pc = 0x163560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163560u;
        // 0x163564: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163568u;
}
