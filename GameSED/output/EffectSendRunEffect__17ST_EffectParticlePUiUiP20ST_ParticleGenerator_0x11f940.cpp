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

// Function: EffectSendRunEffect__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x11f940 - 0x11fc34
void EffectSendRunEffect__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendRunEffect__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x11f940");
#endif

    switch (ctx->pc) {
        case 0x11f9a8u: goto label_11f9a8;
        case 0x11faa8u: goto label_11faa8;
        case 0x11fac8u: goto label_11fac8;
        case 0x11faecu: goto label_11faec;
        case 0x11fb70u: goto label_11fb70;
        case 0x11fbb4u: goto label_11fbb4;
        default: break;
    }

    ctx->pc = 0x11f940u;

    // 0x11f940: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11f944: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f948: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f94c: 0x8c500790  lw          $s0, 0x790($v0)
    ctx->pc = 0x11f94cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x410790u));
    // 0x11f950: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11f950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x11f954: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f958: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x11f958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x11f95c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x11f95cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f960: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11f960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f964: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11f964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x11f968: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x11f968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x11f96c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x11f96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x11f970: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x11f970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x11f974: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11f974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11f978: 0xe7b70070  swc1        $f23, 0x70($sp)
    ctx->pc = 0x11f978u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x11f97c: 0xe7b60068  swc1        $f22, 0x68($sp)
    ctx->pc = 0x11f97cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x11f980: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x11f980u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11f984: 0x1200009c  beqz        $s0, . + 4 + (0x9C << 2)
    ctx->pc = 0x11F984u;
    {
        const bool branch_taken_0x11f984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F984u;
        // 0x11f988: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f984) {
            ctx->pc = 0x11FBF8u;
            goto label_11fbf8;
        }
    }
    ctx->pc = 0x11F98Cu;
    // 0x11f98c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x11f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11f990: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x11F990u;
    {
        const bool branch_taken_0x11f990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F990u;
        // 0x11f994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f990) {
            ctx->pc = 0x11FBF8u;
            goto label_11fbf8;
        }
    }
    ctx->pc = 0x11F998u;
    // 0x11f998: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f99c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x11f99cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x11f9a0: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x11F9A0u;
    SET_GPR_U32(ctx, 31, 0x11F9A8u);
    ctx->pc = 0x11F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F9A0u;
    // 0x11f9a4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x11F9A0u, 0x11F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F9A8u;
label_11f9a8:
    // 0x11f9a8: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x11f9a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11f9ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f9b0: 0x52820092  beql        $s4, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x11F9B0u;
    {
        const bool branch_taken_0x11f9b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f9b0) {
            ctx->pc = 0x11F9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F9B0u;
            // 0x11f9b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FBFCu;
            goto label_11fbfc;
        }
    }
    ctx->pc = 0x11F9B8u;
    // 0x11f9b8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x11f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11f9bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11f9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11f9c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f9c4: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x11f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x11f9c8: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x11f9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f9cc: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x11f9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f9d0: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x11f9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f9d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11F9D4u;
    {
        const bool branch_taken_0x11f9d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9D4u;
        // 0x11f9d8: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9d4) {
            ctx->pc = 0x11F9E0u;
            goto label_11f9e0;
        }
    }
    ctx->pc = 0x11F9DCu;
    // 0x11f9dc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11f9dcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_11f9e0:
    // 0x11f9e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f9e8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11f9e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f9ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11F9ECu;
    {
        const bool branch_taken_0x11f9ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11f9ec) {
            ctx->pc = 0x11F9F8u;
            goto label_11f9f8;
        }
    }
    ctx->pc = 0x11F9F4u;
    // 0x11f9f4: 0xc7828080  lwc1        $f2, -0x7F80($gp)
    ctx->pc = 0x11f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11f9f8:
    // 0x11f9f8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x11f9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x11f9fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fa00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fa04: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11fa04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11fa08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11fa08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11fa0c: 0xe44100e0  swc1        $f1, 0xE0($v0)
    ctx->pc = 0x11fa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x11fa10: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x11fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11fa14: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11FA14u;
    {
        const bool branch_taken_0x11fa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11fa14) {
            ctx->pc = 0x11FA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FA14u;
            // 0x11fa18: 0x2e840003  sltiu       $a0, $s4, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FA6Cu;
            goto label_11fa6c;
        }
    }
    ctx->pc = 0x11FA1Cu;
    // 0x11fa1c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x11fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa20: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x11fa20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11fa24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11FA24u;
    {
        const bool branch_taken_0x11fa24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11fa24) {
            ctx->pc = 0x11FA38u;
            goto label_11fa38;
        }
    }
    ctx->pc = 0x11FA2Cu;
    // 0x11fa2c: 0xc7808084  lwc1        $f0, -0x7F7C($gp)
    ctx->pc = 0x11fa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11FA30u;
    {
        const bool branch_taken_0x11fa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA30u;
        // 0x11fa34: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa30) {
            ctx->pc = 0x11FA40u;
            goto label_11fa40;
        }
    }
    ctx->pc = 0x11FA38u;
label_11fa38:
    // 0x11fa38: 0xc7808088  lwc1        $f0, -0x7F78($gp)
    ctx->pc = 0x11fa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa3c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11fa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_11fa40:
    // 0x11fa40: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x11fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fa44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11fa44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fa48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11fa48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11fa4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11FA4Cu;
    {
        const bool branch_taken_0x11fa4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11fa4c) {
            ctx->pc = 0x11FA60u;
            goto label_11fa60;
        }
    }
    ctx->pc = 0x11FA54u;
    // 0x11fa54: 0xc780808c  lwc1        $f0, -0x7F74($gp)
    ctx->pc = 0x11fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11FA58u;
    {
        const bool branch_taken_0x11fa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA58u;
        // 0x11fa5c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa58) {
            ctx->pc = 0x11FA68u;
            goto label_11fa68;
        }
    }
    ctx->pc = 0x11FA60u;
label_11fa60:
    // 0x11fa60: 0xc7808090  lwc1        $f0, -0x7F70($gp)
    ctx->pc = 0x11fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa64: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x11fa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_11fa68:
    // 0x11fa68: 0x2e840003  sltiu       $a0, $s4, 0x3
    ctx->pc = 0x11fa68u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_11fa6c:
    // 0x11fa6c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x11fa6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11fa70: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FA70u;
    {
        const bool branch_taken_0x11fa70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA70u;
        // 0x11fa74: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa70) {
            ctx->pc = 0x11FA80u;
            goto label_11fa80;
        }
    }
    ctx->pc = 0x11FA78u;
    // 0x11fa78: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x11fa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x11fa7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11fa7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11fa80:
    // 0x11fa80: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x11FA80u;
    {
        const bool branch_taken_0x11fa80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA80u;
        // 0x11fa84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa80) {
            ctx->pc = 0x11FB30u;
            goto label_11fb30;
        }
    }
    ctx->pc = 0x11FA88u;
    // 0x11fa88: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11fa8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fa90: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x11fa90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x11fa94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11fa94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa98: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x11fa98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa9c: 0x24510790  addiu       $s1, $v0, 0x790
    ctx->pc = 0x11fa9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x11faa0: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x11faa0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    // 0x11faa4: 0x0  nop
    ctx->pc = 0x11faa4u;
    // NOP
label_11faa8:
    // 0x11faa8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x11faa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11faac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FAACu;
    {
        const bool branch_taken_0x11faac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11faac) {
            ctx->pc = 0x11FAC0u;
            goto label_11fac0;
        }
    }
    ctx->pc = 0x11FAB4u;
    // 0x11fab4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x11fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11fab8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FAB8u;
    {
        const bool branch_taken_0x11fab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fab8) {
            ctx->pc = 0x11FABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FAB8u;
            // 0x11fabc: 0xc6000070  lwc1        $f0, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FAD0u;
            goto label_11fad0;
        }
    }
    ctx->pc = 0x11FAC0u;
label_11fac0:
    // 0x11fac0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11FAC0u;
    SET_GPR_U32(ctx, 31, 0x11FAC8u);
    ctx->pc = 0x11FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FAC0u;
    // 0x11fac4: 0x26e44860  addiu       $a0, $s7, 0x4860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 18528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11FAC0u, 0x11FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAC8u;
label_11fac8:
    // 0x11fac8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x11FAC8u;
    {
        const bool branch_taken_0x11fac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAC8u;
        // 0x11facc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fac8) {
            ctx->pc = 0x11FBFCu;
            goto label_11fbfc;
        }
    }
    ctx->pc = 0x11FAD0u;
label_11fad0:
    // 0x11fad0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x11fad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x11fad4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x11fad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x11fad8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x11fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fadc: 0x16a0000f  bnez        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x11FADCu;
    {
        const bool branch_taken_0x11fadc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FADCu;
        // 0x11fae0: 0xe6010088  swc1        $f1, 0x88($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fadc) {
            ctx->pc = 0x11FB1Cu;
            goto label_11fb1c;
        }
    }
    ctx->pc = 0x11FAE4u;
    // 0x11fae4: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11FAE4u;
    SET_GPR_U32(ctx, 31, 0x11FAECu);
    ctx->pc = 0x11FAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FAE4u;
    // 0x11fae8: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11FAE4u, 0x11FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAECu;
label_11faec:
    // 0x11faec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11faecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11faf0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11faf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11faf4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11faf4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11faf8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11faf8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11fafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fb00: 0x4600a080  add.s       $f2, $f20, $f0
    ctx->pc = 0x11fb00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x11fb04: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x11fb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fb08: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x11fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fb0c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x11fb0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x11fb10: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11fb10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11fb14: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x11fb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x11fb18: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x11fb18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_11fb1c:
    // 0x11fb1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11fb1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11fb20: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x11fb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x11fb24: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x11fb24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x11fb28: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11FB28u;
    {
        const bool branch_taken_0x11fb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB28u;
        // 0x11fb2c: 0x4617a500  add.s       $f20, $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb28) {
            ctx->pc = 0x11FAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11faa8;
        }
    }
    ctx->pc = 0x11FB30u;
label_11fb30:
    // 0x11fb30: 0x2e840003  sltiu       $a0, $s4, 0x3
    ctx->pc = 0x11fb30u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11fb34: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x11fb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11fb38: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FB38u;
    {
        const bool branch_taken_0x11fb38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB38u;
        // 0x11fb3c: 0x256102b  sltu        $v0, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb38) {
            ctx->pc = 0x11FB48u;
            goto label_11fb48;
        }
    }
    ctx->pc = 0x11FB40u;
    // 0x11fb40: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x11fb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x11fb44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11fb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11fb48:
    // 0x11fb48: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11FB48u;
    {
        const bool branch_taken_0x11fb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB48u;
        // 0x11fb4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb48) {
            ctx->pc = 0x11FBFCu;
            goto label_11fbfc;
        }
    }
    ctx->pc = 0x11FB50u;
    // 0x11fb50: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x11fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11fb54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fb58: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x11fb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x11fb5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11fb5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb60: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x11fb60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x11fb64: 0x26310790  addiu       $s1, $s1, 0x790
    ctx->pc = 0x11fb64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1936));
    // 0x11fb68: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x11fb68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11fb6c: 0x0  nop
    ctx->pc = 0x11fb6cu;
    // NOP
label_11fb70:
    // 0x11fb70: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x11fb70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11fb74: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x11FB74u;
    {
        const bool branch_taken_0x11fb74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fb74) {
            ctx->pc = 0x11FB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB74u;
            // 0x11fb78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FBFCu;
            goto label_11fbfc;
        }
    }
    ctx->pc = 0x11FB7Cu;
    // 0x11fb7c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x11fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11fb80: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x11FB80u;
    {
        const bool branch_taken_0x11fb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fb80) {
            ctx->pc = 0x11FB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB80u;
            // 0x11fb84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FBFCu;
            goto label_11fbfc;
        }
    }
    ctx->pc = 0x11FB88u;
    // 0x11fb88: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x11fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fb8c: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x11fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fb90: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x11fb90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x11fb94: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11fb94u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11fb98: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x11fb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x11fb9c: 0xe6010080  swc1        $f1, 0x80($s0)
    ctx->pc = 0x11fb9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x11fba0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x11fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fba4: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x11FBA4u;
    {
        const bool branch_taken_0x11fba4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBA4u;
        // 0x11fba8: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fba4) {
            ctx->pc = 0x11FBE4u;
            goto label_11fbe4;
        }
    }
    ctx->pc = 0x11FBACu;
    // 0x11fbac: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11FBACu;
    SET_GPR_U32(ctx, 31, 0x11FBB4u);
    ctx->pc = 0x11FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FBACu;
    // 0x11fbb0: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11FBACu, 0x11FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBB4u;
label_11fbb4:
    // 0x11fbb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11fbb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbb8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11fbb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11fbbc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11fbbcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11fbc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11fbc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11fbc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fbc8: 0x4600a080  add.s       $f2, $f20, $f0
    ctx->pc = 0x11fbc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x11fbcc: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x11fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fbd0: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x11fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fbd4: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x11fbd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x11fbd8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11fbd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11fbdc: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x11fbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x11fbe0: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x11fbe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_11fbe4:
    // 0x11fbe4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11fbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11fbe8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x11fbe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x11fbec: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x11fbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x11fbf0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11FBF0u;
    {
        const bool branch_taken_0x11fbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBF0u;
        // 0x11fbf4: 0x4617a500  add.s       $f20, $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbf0) {
            ctx->pc = 0x11FB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fb70;
        }
    }
    ctx->pc = 0x11FBF8u;
label_11fbf8:
    // 0x11fbf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11fbf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11fbfc:
    // 0x11fbfc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11fbfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11fc00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11fc00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fc04: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11fc04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11fc08: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11fc08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fc0c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11fc0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11fc10: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x11fc10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fc14: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x11fc14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11fc18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11fc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fc1c: 0xc7b70070  lwc1        $f23, 0x70($sp)
    ctx->pc = 0x11fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x11fc20: 0xc7b60068  lwc1        $f22, 0x68($sp)
    ctx->pc = 0x11fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11fc24: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x11fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11fc28: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x11fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11fc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC2Cu;
        // 0x11fc30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC34u;
}
