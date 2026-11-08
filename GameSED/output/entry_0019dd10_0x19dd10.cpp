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

// Function: entry_0019dd10
// Address: 0x19dd10 - 0x19dd38
void entry_0019dd10_0x19dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dd10_0x19dd10");
#endif

    ctx->pc = 0x19dd10u;

    // 0x19dd10: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x19dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dd14: 0xc7808604  lwc1        $f0, -0x79FC($gp)
    ctx->pc = 0x19dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dd18: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x19dd18u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x19dd1c: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x19dd1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DD20u;
    {
        const bool branch_taken_0x19dd20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD20u;
        // 0x19dd24: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd20) {
            ctx->pc = 0x19DD38u;
            return;
        }
    }
    ctx->pc = 0x19DD28u;
    // 0x19dd28: 0xc7808608  lwc1        $f0, -0x79F8($gp)
    ctx->pc = 0x19dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dd2c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x19dd2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DD30u;
    {
        const bool branch_taken_0x19dd30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dd30) {
            ctx->pc = 0x19DD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DD30u;
            // 0x19dd34: 0x46002346  mov.s       $f13, $f4 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DD38u;
            return;
        }
    }
    ctx->pc = 0x19DD38u;
}
