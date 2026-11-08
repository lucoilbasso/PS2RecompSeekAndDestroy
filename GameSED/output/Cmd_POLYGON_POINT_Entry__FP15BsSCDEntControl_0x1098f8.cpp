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

// Function: Cmd_POLYGON_POINT_Entry__FP15BsSCDEntControl
// Address: 0x1098f8 - 0x1099d0
void Cmd_POLYGON_POINT_Entry__FP15BsSCDEntControl_0x1098f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_POLYGON_POINT_Entry__FP15BsSCDEntControl_0x1098f8");
#endif

    switch (ctx->pc) {
        case 0x10992cu: goto label_10992c;
        case 0x109948u: goto label_109948;
        case 0x109968u: goto label_109968;
        case 0x109970u: goto label_109970;
        case 0x109984u: goto label_109984;
        case 0x1099a4u: goto label_1099a4;
        default: break;
    }

    ctx->pc = 0x1098f8u;

    // 0x1098f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1098f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1098fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1098fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109900: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x109900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x109904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109908: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x109908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10990c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10990cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109910: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109918: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x109918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10991c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10991cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x109920: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x109920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x109924: 0xc04110c  jal         func_104430
    ctx->pc = 0x109924u;
    SET_GPR_U32(ctx, 31, 0x10992Cu);
    ctx->pc = 0x109928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109924u;
    // 0x109928: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109924u, 0x10992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10992Cu;
label_10992c:
    // 0x10992c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109930: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109934: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x109934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109938: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109938u;
    {
        const bool branch_taken_0x109938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109938) {
            ctx->pc = 0x10994Cu;
            goto label_10994c;
        }
    }
    ctx->pc = 0x109940u;
    // 0x109940: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109940u;
    SET_GPR_U32(ctx, 31, 0x109948u);
    ctx->pc = 0x109944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109940u;
    // 0x109944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109940u, 0x109948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109948u;
label_109948:
    // 0x109948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10994c:
    // 0x10994c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x109950: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x109950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x109954: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x109954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109958: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10995c: 0x50820016  beql        $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10995Cu;
    {
        const bool branch_taken_0x10995c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10995c) {
            ctx->pc = 0x109960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10995Cu;
            // 0x109960: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1099B8u;
            goto label_1099b8;
        }
    }
    ctx->pc = 0x109964u;
    // 0x109964: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x109964u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
label_109968:
    // 0x109968: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109968u;
    SET_GPR_U32(ctx, 31, 0x109970u);
    ctx->pc = 0x10996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109968u;
    // 0x10996c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109968u, 0x109970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109970u;
label_109970:
    // 0x109970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109978: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x109978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10997c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10997Cu;
    SET_GPR_U32(ctx, 31, 0x109984u);
    ctx->pc = 0x109980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10997Cu;
    // 0x109980: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10997Cu, 0x109984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109984u;
label_109984:
    // 0x109984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x109988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10998c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10998cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109990: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109994: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x109994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x109998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10999c: 0xc0640ca  jal         func_190328
    ctx->pc = 0x10999Cu;
    SET_GPR_U32(ctx, 31, 0x1099A4u);
    ctx->pc = 0x1099A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10999Cu;
    // 0x1099a0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x10999Cu, 0x1099A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099A4u;
label_1099a4:
    // 0x1099a4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1099a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1099a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1099a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1099ac: 0x1473ffee  bne         $v1, $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1099ACu;
    {
        const bool branch_taken_0x1099ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1099ac) {
            ctx->pc = 0x109968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109968;
        }
    }
    ctx->pc = 0x1099B4u;
    // 0x1099b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1099b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1099b8:
    // 0x1099b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1099b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1099bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1099bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1099c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1099c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1099c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1099c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1099c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1099C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1099CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099C8u;
        // 0x1099cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1099C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1099D0u;
}
