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

// Function: BUtilitySmoothF__FPfff
// Address: 0x19ee88 - 0x19eedc
void BUtilitySmoothF__FPfff_0x19ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilitySmoothF__FPfff_0x19ee88");
#endif

    ctx->pc = 0x19ee88u;

    // 0x19ee88: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x19ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ee8c: 0xc7818634  lwc1        $f1, -0x79CC($gp)
    ctx->pc = 0x19ee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ee90: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x19ee90u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x19ee94: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x19ee94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x19ee98: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x19ee98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ee9c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19EE9Cu;
    {
        const bool branch_taken_0x19ee9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ee9c) {
            ctx->pc = 0x19EEB8u;
            goto label_19eeb8;
        }
    }
    ctx->pc = 0x19EEA4u;
    // 0x19eea4: 0xc7808638  lwc1        $f0, -0x79C8($gp)
    ctx->pc = 0x19eea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19eea8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19eea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eeac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19EEACu;
    {
        const bool branch_taken_0x19eeac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19eeac) {
            ctx->pc = 0x19EEB8u;
            goto label_19eeb8;
        }
    }
    ctx->pc = 0x19EEB4u;
    // 0x19eeb4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19eeb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19eeb8:
    // 0x19eeb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19eeb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eebc: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x19eebcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eec0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19EEC0u;
    {
        const bool branch_taken_0x19eec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19eec0) {
            ctx->pc = 0x19EEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EEC0u;
            // 0x19eec4: 0x46006086  mov.s       $f2, $f12 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EEC8u;
            goto label_19eec8;
        }
    }
    ctx->pc = 0x19EEC8u;
label_19eec8:
    // 0x19eec8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x19eec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19eecc: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x19eeccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x19eed0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19eed0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x19eed4: 0x3e00008  jr          $ra
    ctx->pc = 0x19EED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EED4u;
        // 0x19eed8: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EEDCu;
}
