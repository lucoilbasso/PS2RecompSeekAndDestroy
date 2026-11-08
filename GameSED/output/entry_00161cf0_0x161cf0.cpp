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

// Function: entry_00161cf0
// Address: 0x161cf0 - 0x161d0c
void entry_00161cf0_0x161cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161cf0_0x161cf0");
#endif

    ctx->pc = 0x161cf0u;

    // 0x161cf0: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x161cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161cf4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161CF4u;
    {
        const bool branch_taken_0x161cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161cf4) {
            ctx->pc = 0x161D0Cu;
            return;
        }
    }
    ctx->pc = 0x161CFCu;
    // 0x161cfc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161d00: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x161d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161d04: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x161D04u;
    {
        const bool branch_taken_0x161d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161d04) {
            ctx->pc = 0x161D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161D04u;
            // 0x161d08: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161D6Cu;
            return;
        }
    }
    ctx->pc = 0x161D0Cu;
}
