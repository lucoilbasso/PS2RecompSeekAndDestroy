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

// Function: entry_001a2c1c
// Address: 0x1a2c1c - 0x1a2c34
void entry_001a2c1c_0x1a2c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2c1c_0x1a2c1c");
#endif

    ctx->pc = 0x1a2c1cu;

    // 0x1a2c1c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1a2c1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2c20: 0x0  nop
    ctx->pc = 0x1a2c20u;
    // NOP
    // 0x1a2c24: 0x0  nop
    ctx->pc = 0x1a2c24u;
    // NOP
    // 0x1a2c28: 0x0  nop
    ctx->pc = 0x1a2c28u;
    // NOP
    // 0x1a2c2c: 0x4503fffa  bc1tl       . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A2C2Cu;
    {
        const bool branch_taken_0x1a2c2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2c2c) {
            ctx->pc = 0x1A2C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2C2Cu;
            // 0x1a2c30: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C18u;
            return;
        }
    }
    ctx->pc = 0x1A2C34u;
}
