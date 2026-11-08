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

// Function: BezierPointScalerGet__17BBrzierScalerWork
// Address: 0x1aa250 - 0x1aa2d4
void BezierPointScalerGet__17BBrzierScalerWork_0x1aa250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BezierPointScalerGet__17BBrzierScalerWork_0x1aa250");
#endif

    ctx->pc = 0x1aa250u;

    // 0x1aa250: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1aa250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1aa254: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1aa254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1aa258: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1aa258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aa25c: 0xe444000c  swc1        $f4, 0xC($v0)
    ctx->pc = 0x1aa25cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1aa260: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x1aa260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1aa264: 0x46043141  sub.s       $f5, $f6, $f4
    ctx->pc = 0x1aa264u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x1aa268: 0xe4460018  swc1        $f6, 0x18($v0)
    ctx->pc = 0x1aa268u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1aa26c: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x1aa26cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1aa270: 0x46000004  c1          0x4
    ctx->pc = 0x1aa270u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1aa274: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x1aa274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1aa278: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1aa278u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1aa27c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1aa27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aa280: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x1aa280u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x1aa284: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x1aa284u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1aa288: 0x46010044  c1          0x10044
    ctx->pc = 0x1aa288u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1aa28c: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x1aa28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1aa290: 0x0  nop
    ctx->pc = 0x1aa290u;
    // NOP
    // 0x1aa294: 0x0  nop
    ctx->pc = 0x1aa294u;
    // NOP
    // 0x1aa298: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1aa298u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1aa29c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1aa29cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1aa2a0: 0xe4440010  swc1        $f4, 0x10($v0)
    ctx->pc = 0x1aa2a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1aa2a4: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x1aa2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aa2a8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1aa2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa2ac: 0x46020941  sub.s       $f5, $f1, $f2
    ctx->pc = 0x1aa2acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1aa2b0: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x1aa2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1aa2b4: 0x46000004  c1          0x4
    ctx->pc = 0x1aa2b4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1aa2b8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1aa2b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1aa2bc: 0x0  nop
    ctx->pc = 0x1aa2bcu;
    // NOP
    // 0x1aa2c0: 0x0  nop
    ctx->pc = 0x1aa2c0u;
    // NOP
    // 0x1aa2c4: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x1aa2c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x1aa2c8: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x1aa2c8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x1aa2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2CCu;
        // 0x1aa2d0: 0xe4460014  swc1        $f6, 0x14($v0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA2D4u;
}
