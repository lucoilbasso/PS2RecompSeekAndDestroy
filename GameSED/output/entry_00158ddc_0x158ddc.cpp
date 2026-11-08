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

// Function: entry_00158ddc
// Address: 0x158ddc - 0x158df4
void entry_00158ddc_0x158ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158ddc_0x158ddc");
#endif

    ctx->pc = 0x158ddcu;

    // 0x158ddc: 0xc5040404  lwc1        $f4, 0x404($t0)
    ctx->pc = 0x158ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x158de0: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x158de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158de4: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x158de4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x158de8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158dec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158DECu;
    {
        const bool branch_taken_0x158dec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158dec) {
            ctx->pc = 0x158DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158DECu;
            // 0x158df0: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158DF4u;
            return;
        }
    }
    ctx->pc = 0x158DF4u;
}
