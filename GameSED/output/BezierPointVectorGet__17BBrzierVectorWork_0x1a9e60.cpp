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

// Function: BezierPointVectorGet__17BBrzierVectorWork
// Address: 0x1a9e60 - 0x1aa024
void BezierPointVectorGet__17BBrzierVectorWork_0x1a9e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BezierPointVectorGet__17BBrzierVectorWork_0x1a9e60");
#endif

    ctx->pc = 0x1a9e60u;

    // 0x1a9e60: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a9e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e64: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1a9e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1a9e68: 0xc44b0010  lwc1        $f11, 0x10($v0)
    ctx->pc = 0x1a9e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1a9e6c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1a9e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9e70: 0xe48b000c  swc1        $f11, 0xC($a0)
    ctx->pc = 0x1a9e70u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1a9e74: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x1a9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9e78: 0xe48c001c  swc1        $f12, 0x1C($a0)
    ctx->pc = 0x1a9e78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1a9e7c: 0xc44a0018  lwc1        $f10, 0x18($v0)
    ctx->pc = 0x1a9e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1a9e80: 0xe48a002c  swc1        $f10, 0x2C($a0)
    ctx->pc = 0x1a9e80u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1a9e84: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1a9e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9e88: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1a9e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1a9e8c: 0x460b0141  sub.s       $f5, $f0, $f11
    ctx->pc = 0x1a9e8cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x1a9e90: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1a9e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9e94: 0x460c0a01  sub.s       $f8, $f1, $f12
    ctx->pc = 0x1a9e94u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x1a9e98: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x1a9e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1a9e9c: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x1a9e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1a9ea0: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1a9ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9ea4: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x1a9ea4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x1a9ea8: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x1a9ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x1a9eac: 0x460a0981  sub.s       $f6, $f1, $f10
    ctx->pc = 0x1a9eacu;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x1a9eb0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9eb4: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x1a9eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1a9eb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9ebc: 0x46000004  c1          0x4
    ctx->pc = 0x1a9ebcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a9ec0: 0x46001a42  mul.s       $f9, $f3, $f0
    ctx->pc = 0x1a9ec0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1a9ec4: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x1a9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9ec8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1a9ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9ecc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a9eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9ed0: 0xc4440020  lwc1        $f4, 0x20($v0)
    ctx->pc = 0x1a9ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a9ed4: 0x46001a01  sub.s       $f8, $f3, $f0
    ctx->pc = 0x1a9ed4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1a9ed8: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x1a9ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9edc: 0x46012141  sub.s       $f5, $f4, $f1
    ctx->pc = 0x1a9edcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1a9ee0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a9ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9ee4: 0x46011181  sub.s       $f6, $f2, $f1
    ctx->pc = 0x1a9ee4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1a9ee8: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x1a9ee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x1a9eec: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x1a9eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1a9ef0: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x1a9ef0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1a9ef4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9ef8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9efc: 0x460001c4  c1          0x1C4
    ctx->pc = 0x1a9efcu;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a9f00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a9f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9f04: 0x46013832  c.eq.s      $f7, $f1
    ctx->pc = 0x1a9f04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9f08: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9F08u;
    {
        const bool branch_taken_0x1a9f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9f08) {
            ctx->pc = 0x1A9F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9F08u;
            // 0x1a9f0c: 0x46054802  mul.s       $f0, $f9, $f5 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9F20u;
            goto label_1a9f20;
        }
    }
    ctx->pc = 0x1A9F10u;
    // 0x1a9f10: 0xe48b0010  swc1        $f11, 0x10($a0)
    ctx->pc = 0x1a9f10u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1a9f14: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x1a9f14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1a9f18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A9F18u;
    {
        const bool branch_taken_0x1a9f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F18u;
        // 0x1a9f1c: 0xe48a0030  swc1        $f10, 0x30($a0) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f18) {
            ctx->pc = 0x1A9F64u;
            goto label_1a9f64;
        }
    }
    ctx->pc = 0x1A9F20u;
label_1a9f20:
    // 0x1a9f20: 0x46084882  mul.s       $f2, $f9, $f8
    ctx->pc = 0x1a9f20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x1a9f24: 0x46064842  mul.s       $f1, $f9, $f6
    ctx->pc = 0x1a9f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x1a9f28: 0x0  nop
    ctx->pc = 0x1a9f28u;
    // NOP
    // 0x1a9f2c: 0x0  nop
    ctx->pc = 0x1a9f2cu;
    // NOP
    // 0x1a9f30: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x1a9f30u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[7]); }
    // 0x1a9f34: 0x0  nop
    ctx->pc = 0x1a9f34u;
    // NOP
    // 0x1a9f38: 0x0  nop
    ctx->pc = 0x1a9f38u;
    // NOP
    // 0x1a9f3c: 0x46070843  div.s       $f1, $f1, $f7
    ctx->pc = 0x1a9f3cu;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[7]); }
    // 0x1a9f40: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x1a9f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x1a9f44: 0x0  nop
    ctx->pc = 0x1a9f44u;
    // NOP
    // 0x1a9f48: 0x0  nop
    ctx->pc = 0x1a9f48u;
    // NOP
    // 0x1a9f4c: 0x46071083  div.s       $f2, $f2, $f7
    ctx->pc = 0x1a9f4cu;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[7]); }
    // 0x1a9f50: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1a9f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1a9f54: 0x46015040  add.s       $f1, $f10, $f1
    ctx->pc = 0x1a9f54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x1a9f58: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x1a9f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1a9f5c: 0x46026080  add.s       $f2, $f12, $f2
    ctx->pc = 0x1a9f5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x1a9f60: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x1a9f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_1a9f64:
    // 0x1a9f64: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1a9f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9f68: 0xc4450010  lwc1        $f5, 0x10($v0)
    ctx->pc = 0x1a9f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a9f6c: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x1a9f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9f70: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x1a9f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a9f74: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x1a9f74u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x1a9f78: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1a9f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9f7c: 0x46002201  sub.s       $f8, $f4, $f0
    ctx->pc = 0x1a9f7cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1a9f80: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1a9f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9f84: 0x46020981  sub.s       $f6, $f1, $f2
    ctx->pc = 0x1a9f84u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1a9f88: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x1a9f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1a9f8c: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x1a9f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x1a9f90: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x1a9f90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1a9f94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9f98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9f98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9f9c: 0x460001c4  c1          0x1C4
    ctx->pc = 0x1a9f9cu;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a9fa0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a9fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9fa4: 0x46013832  c.eq.s      $f7, $f1
    ctx->pc = 0x1a9fa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9fa8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9FA8u;
    {
        const bool branch_taken_0x1a9fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9fa8) {
            ctx->pc = 0x1A9FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9FA8u;
            // 0x1a9fac: 0x46054882  mul.s       $f2, $f9, $f5 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9FD0u;
            goto label_1a9fd0;
        }
    }
    ctx->pc = 0x1A9FB0u;
    // 0x1a9fb0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x1a9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9fb4: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x1a9fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9fb8: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x1a9fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9fbc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1a9fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1a9fc0: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x1a9fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1a9fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FC4u;
        // 0x1a9fc8: 0xe4820024  swc1        $f2, 0x24($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9FCCu;
    // 0x1a9fcc: 0x0  nop
    ctx->pc = 0x1a9fccu;
    // NOP
label_1a9fd0:
    // 0x1a9fd0: 0xc4850028  lwc1        $f5, 0x28($a0)
    ctx->pc = 0x1a9fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a9fd4: 0x46064842  mul.s       $f1, $f9, $f6
    ctx->pc = 0x1a9fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x1a9fd8: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x1a9fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a9fdc: 0x460848c2  mul.s       $f3, $f9, $f8
    ctx->pc = 0x1a9fdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x1a9fe0: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x1a9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9fe4: 0x0  nop
    ctx->pc = 0x1a9fe4u;
    // NOP
    // 0x1a9fe8: 0x0  nop
    ctx->pc = 0x1a9fe8u;
    // NOP
    // 0x1a9fec: 0x46071083  div.s       $f2, $f2, $f7
    ctx->pc = 0x1a9fecu;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[7]); }
    // 0x1a9ff0: 0x0  nop
    ctx->pc = 0x1a9ff0u;
    // NOP
    // 0x1a9ff4: 0x0  nop
    ctx->pc = 0x1a9ff4u;
    // NOP
    // 0x1a9ff8: 0x46070843  div.s       $f1, $f1, $f7
    ctx->pc = 0x1a9ff8u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[7]); }
    // 0x1a9ffc: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x1a9ffcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1aa000: 0x0  nop
    ctx->pc = 0x1aa000u;
    // NOP
    // 0x1aa004: 0x0  nop
    ctx->pc = 0x1aa004u;
    // NOP
    // 0x1aa008: 0x460718c3  div.s       $f3, $f3, $f7
    ctx->pc = 0x1aa008u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[7]); }
    // 0x1aa00c: 0xe4840014  swc1        $f4, 0x14($a0)
    ctx->pc = 0x1aa00cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1aa010: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aa014: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1aa014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1aa018: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x1aa018u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1aa01c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA01Cu;
        // 0x1aa020: 0xe4850024  swc1        $f5, 0x24($a0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA024u;
}
