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

// Function: entry_001a2494
// Address: 0x1a2494 - 0x1a24a8
void entry_001a2494_0x1a2494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2494_0x1a2494");
#endif

    ctx->pc = 0x1a2494u;

    // 0x1a2494: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a2494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2498: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1a2498u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a249c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A249Cu;
    {
        const bool branch_taken_0x1a249c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A249Cu;
        // 0x1a24a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a249c) {
            ctx->pc = 0x1A24A8u;
            return;
        }
    }
    ctx->pc = 0x1A24A4u;
    // 0x1a24a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a24a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a24a8u;
}
