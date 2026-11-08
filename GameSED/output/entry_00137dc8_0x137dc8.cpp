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

// Function: entry_00137dc8
// Address: 0x137dc8 - 0x137de0
void entry_00137dc8_0x137dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137dc8_0x137dc8");
#endif

    ctx->pc = 0x137dc8u;

    // 0x137dc8: 0xc46000ec  lwc1        $f0, 0xEC($v1)
    ctx->pc = 0x137dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137dcc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x137dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x137dd0: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x137dd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137dd4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x137DD4u;
    {
        const bool branch_taken_0x137dd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DD4u;
        // 0x137dd8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137dd4) {
            ctx->pc = 0x137DE0u;
            return;
        }
    }
    ctx->pc = 0x137DDCu;
    // 0x137ddc: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x137ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x137de0u;
}
