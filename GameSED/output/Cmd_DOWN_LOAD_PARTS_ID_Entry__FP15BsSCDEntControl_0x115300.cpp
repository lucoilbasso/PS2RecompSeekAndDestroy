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

// Function: Cmd_DOWN_LOAD_PARTS_ID_Entry__FP15BsSCDEntControl
// Address: 0x115300 - 0x115504
void Cmd_DOWN_LOAD_PARTS_ID_Entry__FP15BsSCDEntControl_0x115300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DOWN_LOAD_PARTS_ID_Entry__FP15BsSCDEntControl_0x115300");
#endif

    switch (ctx->pc) {
        case 0x115348u: goto label_115348;
        case 0x115364u: goto label_115364;
        case 0x115380u: goto label_115380;
        case 0x11538cu: goto label_11538c;
        case 0x1153c0u: goto label_1153c0;
        case 0x1153e8u: goto label_1153e8;
        case 0x115498u: goto label_115498;
        case 0x1154c8u: goto label_1154c8;
        default: break;
    }

    ctx->pc = 0x115300u;

    // 0x115300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x115300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x115304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11530c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115310: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x115310u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x115314: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x115314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x115318: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x115318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11531c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x115320: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x115320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115324: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x115324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x115328: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x115328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11532c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x115330: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x115330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x115334: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x115334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115338: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x115338u;
    {
        const bool branch_taken_0x115338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x11533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115338u;
        // 0x11533c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115338) {
            ctx->pc = 0x11534Cu;
            goto label_11534c;
        }
    }
    ctx->pc = 0x115340u;
    // 0x115340: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x115340u;
    SET_GPR_U32(ctx, 31, 0x115348u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x115340u, 0x115348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115348u;
label_115348:
    // 0x115348: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x115348u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_11534c:
    // 0x11534c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x11534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x115350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x115350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115354: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x115354u;
    {
        const bool branch_taken_0x115354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x115354) {
            ctx->pc = 0x115384u;
            goto label_115384;
        }
    }
    ctx->pc = 0x11535Cu;
    // 0x11535c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11535Cu;
    SET_GPR_U32(ctx, 31, 0x115364u);
    ctx->pc = 0x115360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11535Cu;
    // 0x115360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11535Cu, 0x115364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115364u;
label_115364:
    // 0x115364: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x115364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115368: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x115368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11536c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115370: 0x10710004  beq         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x115370u;
    {
        const bool branch_taken_0x115370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x115370) {
            ctx->pc = 0x115384u;
            goto label_115384;
        }
    }
    ctx->pc = 0x115378u;
    // 0x115378: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115378u;
    SET_GPR_U32(ctx, 31, 0x115380u);
    ctx->pc = 0x11537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115378u;
    // 0x11537c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115378u, 0x115380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115380u;
label_115380:
    // 0x115380: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115384:
    // 0x115384: 0xc041794  jal         func_105E50
    ctx->pc = 0x115384u;
    SET_GPR_U32(ctx, 31, 0x11538Cu);
    ctx->pc = 0x115388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115384u;
    // 0x115388: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x115384u, 0x11538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11538Cu;
label_11538c:
    // 0x11538c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11538Cu;
    {
        const bool branch_taken_0x11538c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x115390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11538Cu;
        // 0x115390: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11538c) {
            ctx->pc = 0x1153A0u;
            goto label_1153a0;
        }
    }
    ctx->pc = 0x115394u;
    // 0x115394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115398u;
    {
        const bool branch_taken_0x115398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115398u;
        // 0x11539c: 0x2414000c  addiu       $s4, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115398) {
            ctx->pc = 0x1153A8u;
            goto label_1153a8;
        }
    }
    ctx->pc = 0x1153A0u;
label_1153a0:
    // 0x1153a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1153a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153a4: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x1153a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1153a8:
    // 0x1153a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1153a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153ac: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1153acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1153b0: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x1153b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1153b4: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1153B4u;
    {
        const bool branch_taken_0x1153b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B4u;
        // 0x1153b8: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153b4) {
            ctx->pc = 0x1154D8u;
            goto label_1154d8;
        }
    }
    ctx->pc = 0x1153BCu;
    // 0x1153bc: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x1153bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
label_1153c0:
    // 0x1153c0: 0x3250ffff  andi        $s0, $s2, 0xFFFF
    ctx->pc = 0x1153c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1153c4: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x1153c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1153c8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x1153c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1153cc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1153ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1153d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1153d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1153d4: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x1153d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
    // 0x1153d8: 0x2631d190  addiu       $s1, $s1, -0x2E70
    ctx->pc = 0x1153d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955408));
    // 0x1153dc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1153dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1153e0: 0xc045360  jal         func_114D80
    ctx->pc = 0x1153E0u;
    SET_GPR_U32(ctx, 31, 0x1153E8u);
    ctx->pc = 0x1153E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153E0u;
    // 0x1153e4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1153E0u, 0x1153E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1153E8u;
label_1153e8:
    // 0x1153e8: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x1153e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1153ec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1153ECu;
    {
        const bool branch_taken_0x1153ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153ECu;
        // 0x1153f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153ec) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x1153F4u;
    // 0x1153f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1153f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1153f8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1153f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1153fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1153fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115400: 0x8c634440  lw          $v1, 0x4440($v1)
    ctx->pc = 0x115400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17472)));
    // 0x115404: 0x600008  jr          $v1
    ctx->pc = 0x115404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115410u: goto label_115410;
            case 0x115418u: goto label_115418;
            case 0x115420u: goto label_115420;
            case 0x115428u: goto label_115428;
            case 0x115430u: goto label_115430;
            case 0x115438u: goto label_115438;
            case 0x115440u: goto label_115440;
            case 0x115448u: goto label_115448;
            case 0x115450u: goto label_115450;
            case 0x115458u: goto label_115458;
            case 0x115460u: goto label_115460;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115404u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11540Cu;
    // 0x11540c: 0x0  nop
    ctx->pc = 0x11540cu;
    // NOP
label_115410:
    // 0x115410: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115410u;
    {
        const bool branch_taken_0x115410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115410u;
        // 0x115414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115410) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115418u;
label_115418:
    // 0x115418: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x115418u;
    {
        const bool branch_taken_0x115418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115418u;
        // 0x11541c: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115418) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115420u;
label_115420:
    // 0x115420: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115420u;
    {
        const bool branch_taken_0x115420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115420u;
        // 0x115424: 0x2624007c  addiu       $a0, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115420) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115428u;
label_115428:
    // 0x115428: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x115428u;
    {
        const bool branch_taken_0x115428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115428u;
        // 0x11542c: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115428) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115430u;
label_115430:
    // 0x115430: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x115430u;
    {
        const bool branch_taken_0x115430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115430u;
        // 0x115434: 0x262400e8  addiu       $a0, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115430) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115438u;
label_115438:
    // 0x115438: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x115438u;
    {
        const bool branch_taken_0x115438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115438u;
        // 0x11543c: 0x2624011c  addiu       $a0, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115438) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115440u;
label_115440:
    // 0x115440: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115440u;
    {
        const bool branch_taken_0x115440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115440u;
        // 0x115444: 0x2624014c  addiu       $a0, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115440) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115448u;
label_115448:
    // 0x115448: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115448u;
    {
        const bool branch_taken_0x115448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115448u;
        // 0x11544c: 0x2624015c  addiu       $a0, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115448) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115450u;
label_115450:
    // 0x115450: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115450u;
    {
        const bool branch_taken_0x115450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115450u;
        // 0x115454: 0x26240180  addiu       $a0, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115450) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115458u;
label_115458:
    // 0x115458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115458u;
    {
        const bool branch_taken_0x115458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115458u;
        // 0x11545c: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115458) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115460u;
label_115460:
    // 0x115460: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x115460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_115464:
    // 0x115464: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x115464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x115468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11546c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11546cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x115470: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115474: 0x8463c0a8  lh          $v1, -0x3F58($v1)
    ctx->pc = 0x115474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294951080)));
    // 0x115478: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x115478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11547c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11547Cu;
    {
        const bool branch_taken_0x11547c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11547Cu;
        // 0x115480: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11547c) {
            ctx->pc = 0x1154C8u;
            goto label_1154c8;
        }
    }
    ctx->pc = 0x115484u;
    // 0x115484: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x115484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x115488: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x115488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11548c: 0x123200  sll         $a2, $s2, 8
    ctx->pc = 0x11548cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x115490: 0x2443fcb0  addiu       $v1, $v0, -0x350
    ctx->pc = 0x115490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x115494: 0x0  nop
    ctx->pc = 0x115494u;
    // NOP
label_115498:
    // 0x115498: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x115498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11549c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11549Cu;
    {
        const bool branch_taken_0x11549c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1154A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11549Cu;
        // 0x1154a0: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11549c) {
            ctx->pc = 0x1154B8u;
            goto label_1154b8;
        }
    }
    ctx->pc = 0x1154A4u;
    // 0x1154a4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1154a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1154a8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1154a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1154ac: 0x8c620400  lw          $v0, 0x400($v1)
    ctx->pc = 0x1154acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1024)));
    // 0x1154b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1154b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1154b4: 0xac620400  sw          $v0, 0x400($v1)
    ctx->pc = 0x1154b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1024), GPR_U32(ctx, 2));
label_1154b8:
    // 0x1154b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1154b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1154bc: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x1154bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1154c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1154C0u;
    {
        const bool branch_taken_0x1154c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1154C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154C0u;
        // 0x1154c4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154c0) {
            ctx->pc = 0x115498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115498;
        }
    }
    ctx->pc = 0x1154C8u;
label_1154c8:
    // 0x1154c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1154c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1154cc: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x1154ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1154d0: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1154D0u;
    {
        const bool branch_taken_0x1154d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1154D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154D0u;
        // 0x1154d4: 0x240224d0  addiu       $v0, $zero, 0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154d0) {
            ctx->pc = 0x1153C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1153c0;
        }
    }
    ctx->pc = 0x1154D8u;
label_1154d8:
    // 0x1154d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1154d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1154dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1154dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1154e0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1154e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1154e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1154e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1154e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1154e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1154ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1154ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1154f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1154f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1154f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1154f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1154f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1154f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1154fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1154FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154FCu;
        // 0x115500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1154FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115504u;
}
