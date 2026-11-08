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

// Function: BUtilityRatioFloat__Fff
// Address: 0x19ede0 - 0x19ee20
void BUtilityRatioFloat__Fff_0x19ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityRatioFloat__Fff_0x19ede0");
#endif

    ctx->pc = 0x19ede0u;

    // 0x19ede0: 0x460d6042  mul.s       $f1, $f12, $f13
    ctx->pc = 0x19ede0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x19ede4: 0xc780862c  lwc1        $f0, -0x79D4($gp)
    ctx->pc = 0x19ede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ede8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19ede8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19edec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19EDECu;
    {
        const bool branch_taken_0x19edec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19edec) {
            ctx->pc = 0x19EE08u;
            goto label_19ee08;
        }
    }
    ctx->pc = 0x19EDF4u;
    // 0x19edf4: 0xc7808630  lwc1        $f0, -0x79D0($gp)
    ctx->pc = 0x19edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19edf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19edf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19edfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19EDFCu;
    {
        const bool branch_taken_0x19edfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19edfc) {
            ctx->pc = 0x19EE08u;
            goto label_19ee08;
        }
    }
    ctx->pc = 0x19EE04u;
    // 0x19ee04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19ee04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ee08:
    // 0x19ee08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ee08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ee0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19ee0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ee10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19EE10u;
    {
        const bool branch_taken_0x19ee10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ee10) {
            ctx->pc = 0x19EE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EE10u;
            // 0x19ee14: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE18u;
            goto label_19ee18;
        }
    }
    ctx->pc = 0x19EE18u;
label_19ee18:
    // 0x19ee18: 0x3e00008  jr          $ra
    ctx->pc = 0x19EE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE18u;
        // 0x19ee1c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EE20u;
}
