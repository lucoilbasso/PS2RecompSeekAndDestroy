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

// Function: entry_0011eac8
// Address: 0x11eac8 - 0x11eadc
void entry_0011eac8_0x11eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eac8_0x11eac8");
#endif

    ctx->pc = 0x11eac8u;

    // 0x11eac8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x11eac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x11eacc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11eaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ead0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11ead0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ead4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11EAD4u;
    {
        const bool branch_taken_0x11ead4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ead4) {
            ctx->pc = 0x11EAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EAD4u;
            // 0x11ead8: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EADCu;
            return;
        }
    }
    ctx->pc = 0x11EADCu;
}
