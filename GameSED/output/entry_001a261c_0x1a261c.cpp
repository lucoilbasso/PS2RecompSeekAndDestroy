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

// Function: entry_001a261c
// Address: 0x1a261c - 0x1a2634
void entry_001a261c_0x1a261c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a261c_0x1a261c");
#endif

    ctx->pc = 0x1a261cu;

    // 0x1a261c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2624: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a2624u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2628: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2628u;
    {
        const bool branch_taken_0x1a2628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2628u;
        // 0x1a262c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2628) {
            ctx->pc = 0x1A2634u;
            return;
        }
    }
    ctx->pc = 0x1A2630u;
    // 0x1a2630: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a2630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a2634u;
}
