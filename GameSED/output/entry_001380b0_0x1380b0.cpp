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

// Function: entry_001380b0
// Address: 0x1380b0 - 0x1380c8
void entry_001380b0_0x1380b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380b0_0x1380b0");
#endif

    ctx->pc = 0x1380b0u;

    // 0x1380b0: 0xc4a000ec  lwc1        $f0, 0xEC($a1)
    ctx->pc = 0x1380b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1380b4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1380b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1380b8: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1380b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1380bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1380BCu;
    {
        const bool branch_taken_0x1380bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1380C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380BCu;
        // 0x1380c0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380bc) {
            ctx->pc = 0x1380C8u;
            return;
        }
    }
    ctx->pc = 0x1380C4u;
    // 0x1380c4: 0xc4a000e0  lwc1        $f0, 0xE0($a1)
    ctx->pc = 0x1380c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1380c8u;
}
