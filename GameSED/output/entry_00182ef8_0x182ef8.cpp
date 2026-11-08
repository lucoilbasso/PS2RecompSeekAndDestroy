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

// Function: entry_00182ef8
// Address: 0x182ef8 - 0x182f0c
void entry_00182ef8_0x182ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182ef8_0x182ef8");
#endif

    ctx->pc = 0x182ef8u;

    // 0x182ef8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x182ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182efc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x182efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x182f00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182f04: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x182F04u;
    {
        const bool branch_taken_0x182f04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F04u;
        // 0x182f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f04) {
            ctx->pc = 0x182EF0u;
            return;
        }
    }
    ctx->pc = 0x182F0Cu;
}
