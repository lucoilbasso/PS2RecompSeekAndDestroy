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

// Function: EffectSendTornadePut__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x121540 - 0x1215e8
void EffectSendTornadePut__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x121540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendTornadePut__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x121540");
#endif

    switch (ctx->pc) {
        case 0x121570u: goto label_121570;
        default: break;
    }

    ctx->pc = 0x121540u;

    // 0x121540: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x121540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x121544: 0x24430790  addiu       $v1, $v0, 0x790
    ctx->pc = 0x121544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x121548: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x121548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x410790u));
    // 0x12154c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12154Cu;
    {
        const bool branch_taken_0x12154c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12154c) {
            ctx->pc = 0x1215E0u;
            goto label_1215e0;
        }
    }
    ctx->pc = 0x121554u;
    // 0x121554: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x121554u;
    {
        const bool branch_taken_0x121554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x121558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121554u;
        // 0x121558: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121554) {
            ctx->pc = 0x1215E0u;
            goto label_1215e0;
        }
    }
    ctx->pc = 0x12155Cu;
    // 0x12155c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12155cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121560: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121564: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x121564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121568: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x121568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12156c: 0x0  nop
    ctx->pc = 0x12156cu;
    // NOP
label_121570:
    // 0x121570: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x121570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x121574: 0xc4c000fc  lwc1        $f0, 0xFC($a2)
    ctx->pc = 0x121574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121578: 0x4e00005  bltz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x121578u;
    {
        const bool branch_taken_0x121578 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x12157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121578u;
        // 0x12157c: 0xe480004c  swc1        $f0, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121578) {
            ctx->pc = 0x121590u;
            goto label_121590;
        }
    }
    ctx->pc = 0x121580u;
    // 0x121580: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x121580u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121584: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x121584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x121588: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x121588u;
    {
        const bool branch_taken_0x121588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121588u;
        // 0x12158c: 0xc4c00104  lwc1        $f0, 0x104($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121588) {
            ctx->pc = 0x1215ACu;
            goto label_1215ac;
        }
    }
    ctx->pc = 0x121590u;
label_121590:
    // 0x121590: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x121590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x121594: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x121594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x121598: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12159c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12159cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1215a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1215a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1215a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1215a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1215a8: 0xc4c00104  lwc1        $f0, 0x104($a2)
    ctx->pc = 0x1215a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1215ac:
    // 0x1215ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1215acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1215b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1215b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1215b4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1215b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x1215b8: 0xc4c100fc  lwc1        $f1, 0xFC($a2)
    ctx->pc = 0x1215b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1215bc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1215bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1215c0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1215C0u;
    {
        const bool branch_taken_0x1215c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1215C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215C0u;
        // 0x1215c4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215c0) {
            ctx->pc = 0x1215D4u;
            goto label_1215d4;
        }
    }
    ctx->pc = 0x1215C8u;
    // 0x1215c8: 0xc4c00100  lwc1        $f0, 0x100($a2)
    ctx->pc = 0x1215c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1215cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1215ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1215d0: 0xe4c000fc  swc1        $f0, 0xFC($a2)
    ctx->pc = 0x1215d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 252), bits); }
label_1215d4:
    // 0x1215d4: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x1215d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1215d8: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1215D8u;
    {
        const bool branch_taken_0x1215d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1215d8) {
            ctx->pc = 0x1215DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1215D8u;
            // 0x1215dc: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121570;
        }
    }
    ctx->pc = 0x1215E0u;
label_1215e0:
    // 0x1215e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1215E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1215E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1215E8u;
}
