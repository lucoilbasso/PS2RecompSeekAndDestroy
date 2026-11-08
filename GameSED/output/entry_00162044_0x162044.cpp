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

// Function: entry_00162044
// Address: 0x162044 - 0x162060
void entry_00162044_0x162044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162044_0x162044");
#endif

    ctx->pc = 0x162044u;

    // 0x162044: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x162044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162048: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x162048u;
    {
        const bool branch_taken_0x162048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162048) {
            ctx->pc = 0x162060u;
            return;
        }
    }
    ctx->pc = 0x162050u;
    // 0x162050: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x162050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162054: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x162054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162058: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x162058u;
    {
        const bool branch_taken_0x162058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162058) {
            ctx->pc = 0x16205Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162058u;
            // 0x16205c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1620A8u;
            return;
        }
    }
    ctx->pc = 0x162060u;
}
