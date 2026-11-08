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

// Function: Cmd_DPRINTANG_Entry__FP15BsSCDEntControl
// Address: 0x1a8280 - 0x1a8400
void Cmd_DPRINTANG_Entry__FP15BsSCDEntControl_0x1a8280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DPRINTANG_Entry__FP15BsSCDEntControl_0x1a8280");
#endif

    switch (ctx->pc) {
        case 0x1a82d8u: goto label_1a82d8;
        case 0x1a82fcu: goto label_1a82fc;
        case 0x1a8350u: goto label_1a8350;
        case 0x1a8360u: goto label_1a8360;
        case 0x1a8388u: goto label_1a8388;
        case 0x1a8394u: goto label_1a8394;
        case 0x1a83b0u: goto label_1a83b0;
        case 0x1a83c0u: goto label_1a83c0;
        default: break;
    }

    ctx->pc = 0x1a8280u;

    // 0x1a8280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a8284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a828c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8294: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8298: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a829c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a82a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a82a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a82a4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1a82a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1a82a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a82a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a82ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a82acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a82b0: 0x18400048  blez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A82B0u;
    {
        const bool branch_taken_0x1a82b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82B0u;
        // 0x1a82b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82b0) {
            ctx->pc = 0x1A83D4u;
            goto label_1a83d4;
        }
    }
    ctx->pc = 0x1A82B8u;
    // 0x1a82b8: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x1a82b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a82bc: 0x3c170026  lui         $s7, 0x26
    ctx->pc = 0x1a82bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)38 << 16));
    // 0x1a82c0: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x1a82c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x1a82c4: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a82c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a82c8: 0x3c140026  lui         $s4, 0x26
    ctx->pc = 0x1a82c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
    // 0x1a82cc: 0x3c130026  lui         $s3, 0x26
    ctx->pc = 0x1a82ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
    // 0x1a82d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a82d4: 0x0  nop
    ctx->pc = 0x1a82d4u;
    // NOP
label_1a82d8:
    // 0x1a82d8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a82dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a82dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a82e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a82e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a82e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a82e8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a82e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a82ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A82ECu;
    {
        const bool branch_taken_0x1a82ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82ECu;
        // 0x1a82f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82ec) {
            ctx->pc = 0x1A8300u;
            goto label_1a8300;
        }
    }
    ctx->pc = 0x1A82F4u;
    // 0x1a82f4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A82F4u;
    SET_GPR_U32(ctx, 31, 0x1A82FCu);
    ctx->pc = 0x1A82F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A82F4u;
    // 0x1a82f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A82F4u, 0x1A82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A82FCu;
label_1a82fc:
    // 0x1a82fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a82fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8300:
    // 0x1a8300: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1a8300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1a8304: 0x8f869080  lw          $a2, -0x6F80($gp)
    ctx->pc = 0x1a8304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1a8308: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a8308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a830c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a830cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8310: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a8310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a8314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8318: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a831c: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x1a831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x1a8320: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a8320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8324: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1a8324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a8328: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1a8328u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1a832c: 0x32bc3  sra         $a1, $v1, 15
    ctx->pc = 0x1a832cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 15));
    // 0x1a8330: 0x28a40708  slti        $a0, $a1, 0x708
    ctx->pc = 0x1a8330u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1800) ? 1 : 0);
    // 0x1a8334: 0x24a2f1f0  addiu       $v0, $a1, -0xE10
    ctx->pc = 0x1a8334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963696));
    // 0x1a8338: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1A8338u;
    {
        const bool branch_taken_0x1a8338 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8338u;
        // 0x1a833c: 0x44280a  movz        $a1, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8338) {
            ctx->pc = 0x1A8368u;
            goto label_1a8368;
        }
    }
    ctx->pc = 0x1A8340u;
    // 0x1a8340: 0x4a20005  bltzl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8340u;
    {
        const bool branch_taken_0x1a8340 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1a8340) {
            ctx->pc = 0x1A8344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8340u;
            // 0x1a8344: 0x52823  negu        $a1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8358u;
            goto label_1a8358;
        }
    }
    ctx->pc = 0x1A8348u;
    // 0x1a8348: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A8348u;
    SET_GPR_U32(ctx, 31, 0x1A8350u);
    ctx->pc = 0x1A834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8348u;
    // 0x1a834c: 0x26e4d920  addiu       $a0, $s7, -0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A8348u, 0x1A8350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8350u;
label_1a8350:
    // 0x1a8350: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A8350u;
    {
        const bool branch_taken_0x1a8350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8350u;
        // 0x1a8354: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8350) {
            ctx->pc = 0x1A83C4u;
            goto label_1a83c4;
        }
    }
    ctx->pc = 0x1A8358u;
label_1a8358:
    // 0x1a8358: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A8358u;
    SET_GPR_U32(ctx, 31, 0x1A8360u);
    ctx->pc = 0x1A835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8358u;
    // 0x1a835c: 0x26c4d928  addiu       $a0, $s6, -0x26D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A8358u, 0x1A8360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8360u;
label_1a8360:
    // 0x1a8360: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A8360u;
    {
        const bool branch_taken_0x1a8360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8360u;
        // 0x1a8364: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8360) {
            ctx->pc = 0x1A83C4u;
            goto label_1a83c4;
        }
    }
    ctx->pc = 0x1A8368u;
label_1a8368:
    // 0x1a8368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a836c: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A836Cu;
    {
        const bool branch_taken_0x1a836c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a836c) {
            ctx->pc = 0x1A83A0u;
            goto label_1a83a0;
        }
    }
    ctx->pc = 0x1A8374u;
    // 0x1a8374: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1a8374u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8378: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a837c: 0xc78c8654  lwc1        $f12, -0x79AC($gp)
    ctx->pc = 0x1a837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a8380: 0xc072738  jal         func_1C9CE0
    ctx->pc = 0x1A8380u;
    SET_GPR_U32(ctx, 31, 0x1A8388u);
    ctx->pc = 0x1A8384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8380u;
    // 0x1a8384: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9CE0u, 0x1A8380u, 0x1A8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8388u;
label_1a8388:
    // 0x1a8388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a8388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a838c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A838Cu;
    SET_GPR_U32(ctx, 31, 0x1A8394u);
    ctx->pc = 0x1A8390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A838Cu;
    // 0x1a8390: 0x26a4d918  addiu       $a0, $s5, -0x26E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A838Cu, 0x1A8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8394u;
label_1a8394:
    // 0x1a8394: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A8394u;
    {
        const bool branch_taken_0x1a8394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8394u;
        // 0x1a8398: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8394) {
            ctx->pc = 0x1A83C4u;
            goto label_1a83c4;
        }
    }
    ctx->pc = 0x1A839Cu;
    // 0x1a839c: 0x0  nop
    ctx->pc = 0x1a839cu;
    // NOP
label_1a83a0:
    // 0x1a83a0: 0x4a20005  bltzl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A83A0u;
    {
        const bool branch_taken_0x1a83a0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1a83a0) {
            ctx->pc = 0x1A83A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A83A0u;
            // 0x1a83a4: 0x52823  negu        $a1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A83B8u;
            goto label_1a83b8;
        }
    }
    ctx->pc = 0x1A83A8u;
    // 0x1a83a8: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A83A8u;
    SET_GPR_U32(ctx, 31, 0x1A83B0u);
    ctx->pc = 0x1A83ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83A8u;
    // 0x1a83ac: 0x2684d930  addiu       $a0, $s4, -0x26D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A83A8u, 0x1A83B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83B0u;
label_1a83b0:
    // 0x1a83b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A83B0u;
    {
        const bool branch_taken_0x1a83b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83B0u;
        // 0x1a83b4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83b0) {
            ctx->pc = 0x1A83C4u;
            goto label_1a83c4;
        }
    }
    ctx->pc = 0x1A83B8u;
label_1a83b8:
    // 0x1a83b8: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A83B8u;
    SET_GPR_U32(ctx, 31, 0x1A83C0u);
    ctx->pc = 0x1A83BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83B8u;
    // 0x1a83bc: 0x266494a8  addiu       $a0, $s3, -0x6B58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A83B8u, 0x1A83C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83C0u;
label_1a83c0:
    // 0x1a83c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a83c4:
    // 0x1a83c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a83c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a83c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a83c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a83cc: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1A83CCu;
    {
        const bool branch_taken_0x1a83cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a83cc) {
            ctx->pc = 0x1A83D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A83CCu;
            // 0x1a83d0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A82D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a82d8;
        }
    }
    ctx->pc = 0x1A83D4u;
label_1a83d4:
    // 0x1a83d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a83d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a83d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a83d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a83dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a83dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a83e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a83e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a83e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a83e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a83e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a83e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a83ec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a83ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a83f0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1a83f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a83f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a83f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a83f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A83F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83F8u;
        // 0x1a83fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A83F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8400u;
}
