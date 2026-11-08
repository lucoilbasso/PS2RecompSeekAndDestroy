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

// Function: entry_0019dcd8
// Address: 0x19dcd8 - 0x19dd00
void entry_0019dcd8_0x19dcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dcd8_0x19dcd8");
#endif

    ctx->pc = 0x19dcd8u;

    // 0x19dcd8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x19dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19dcdc: 0xc78085fc  lwc1        $f0, -0x7A04($gp)
    ctx->pc = 0x19dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dce0: 0x460d1882  mul.s       $f2, $f3, $f13
    ctx->pc = 0x19dce0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x19dce4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x19dce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dce8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DCE8u;
    {
        const bool branch_taken_0x19dce8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCE8u;
        // 0x19dcec: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dce8) {
            ctx->pc = 0x19DD00u;
            return;
        }
    }
    ctx->pc = 0x19DCF0u;
    // 0x19dcf0: 0xc7808600  lwc1        $f0, -0x7A00($gp)
    ctx->pc = 0x19dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dcf4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19dcf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dcf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DCF8u;
    {
        const bool branch_taken_0x19dcf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dcf8) {
            ctx->pc = 0x19DCFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DCF8u;
            // 0x19dcfc: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DD00u;
            return;
        }
    }
    ctx->pc = 0x19DD00u;
}
