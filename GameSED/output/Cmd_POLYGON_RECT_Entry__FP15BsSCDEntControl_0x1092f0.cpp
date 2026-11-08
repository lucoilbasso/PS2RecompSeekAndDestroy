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

// Function: Cmd_POLYGON_RECT_Entry__FP15BsSCDEntControl
// Address: 0x1092f0 - 0x109430
void Cmd_POLYGON_RECT_Entry__FP15BsSCDEntControl_0x1092f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_POLYGON_RECT_Entry__FP15BsSCDEntControl_0x1092f0");
#endif

    switch (ctx->pc) {
        case 0x10932cu: goto label_10932c;
        case 0x10934cu: goto label_10934c;
        case 0x10935cu: goto label_10935c;
        case 0x109388u: goto label_109388;
        case 0x1093a0u: goto label_1093a0;
        case 0x1093c0u: goto label_1093c0;
        case 0x1093ccu: goto label_1093cc;
        case 0x1093e0u: goto label_1093e0;
        case 0x109400u: goto label_109400;
        default: break;
    }

    ctx->pc = 0x1092f0u;

    // 0x1092f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1092f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1092f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1092f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1092f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1092f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092fc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1092fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x109300: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x109300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x109304: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109308: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x109308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10930c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x10930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x109310: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x109310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x109314: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x109314u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x109318: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x109318u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x10931c: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x10931cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x109320: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x109320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x109324: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109324u;
    SET_GPR_U32(ctx, 31, 0x10932Cu);
    ctx->pc = 0x109328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109324u;
    // 0x109328: 0x8c550044  lw          $s5, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109324u, 0x10932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10932Cu;
label_10932c:
    // 0x10932c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10932cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109330: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x109330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x109334: 0x8c43d630  lw          $v1, -0x29D0($v0)
    ctx->pc = 0x109334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D630u));
    // 0x109338: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x109338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x10933c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10933cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x109340: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x109340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x109344: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109344u;
    SET_GPR_U32(ctx, 31, 0x10934Cu);
    ctx->pc = 0x109348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109344u;
    // 0x109348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109344u, 0x10934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10934Cu;
label_10934c:
    // 0x10934c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x10934cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x109350: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x109350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x109354: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109354u;
    SET_GPR_U32(ctx, 31, 0x10935Cu);
    ctx->pc = 0x109358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109354u;
    // 0x109358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109354u, 0x10935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10935Cu;
label_10935c:
    // 0x10935c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x10935cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x109360: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x109360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x109364: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x109364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x109368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10936c: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x10936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x109370: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x109370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x109374: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x109374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109378: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x109378u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x10937c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x10937cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x109380: 0xc06406e  jal         func_1901B8
    ctx->pc = 0x109380u;
    SET_GPR_U32(ctx, 31, 0x109388u);
    ctx->pc = 0x109384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109380u;
    // 0x109384: 0x4616a502  mul.s       $f20, $f20, $f22 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901B8u, 0x109380u, 0x109388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109388u;
label_109388:
    // 0x109388: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10938c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10938cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109394: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x109394u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x109398: 0xc063d1e  jal         func_18F478
    ctx->pc = 0x109398u;
    SET_GPR_U32(ctx, 31, 0x1093A0u);
    ctx->pc = 0x10939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109398u;
    // 0x10939c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F478u, 0x109398u, 0x1093A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093A0u;
label_1093a0:
    // 0x1093a0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1093a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1093a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1093a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1093a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1093a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1093ac: 0x10440011  beq         $v0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1093ACu;
    {
        const bool branch_taken_0x1093ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1093B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093ACu;
        // 0x1093b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093ac) {
            ctx->pc = 0x1093F4u;
            goto label_1093f4;
        }
    }
    ctx->pc = 0x1093B4u;
    // 0x1093b4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1093b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1093b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1093b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093bc: 0x0  nop
    ctx->pc = 0x1093bcu;
    // NOP
label_1093c0:
    // 0x1093c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1093c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093c4: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x1093C4u;
    SET_GPR_U32(ctx, 31, 0x1093CCu);
    ctx->pc = 0x1093C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093C4u;
    // 0x1093c8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x1093C4u, 0x1093CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093CCu;
label_1093cc:
    // 0x1093cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1093ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1093d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1093d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1093d8: 0xc0640d6  jal         func_190358
    ctx->pc = 0x1093D8u;
    SET_GPR_U32(ctx, 31, 0x1093E0u);
    ctx->pc = 0x1093DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093D8u;
    // 0x1093dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x1093D8u, 0x1093E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093E0u;
label_1093e0:
    // 0x1093e0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1093e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1093e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1093e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1093e8: 0x1473fff5  bne         $v1, $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x1093E8u;
    {
        const bool branch_taken_0x1093e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1093ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093E8u;
        // 0x1093ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093e8) {
            ctx->pc = 0x1093C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1093c0;
        }
    }
    ctx->pc = 0x1093F0u;
    // 0x1093f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1093f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1093f4:
    // 0x1093f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1093f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093f8: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x1093F8u;
    SET_GPR_U32(ctx, 31, 0x109400u);
    ctx->pc = 0x1093FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093F8u;
    // 0x1093fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x1093F8u, 0x109400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109400u;
label_109400:
    // 0x109400: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x109400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109404: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x109404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109408: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10940c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10940cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x109410: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x109410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109414: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x109414u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x109418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x109418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10941c: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x10941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x109420: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x109420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x109424: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x109424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x109428: 0x3e00008  jr          $ra
    ctx->pc = 0x109428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109428u;
        // 0x10942c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109430u;
}
