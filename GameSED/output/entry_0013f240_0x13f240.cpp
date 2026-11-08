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

// Function: entry_0013f240
// Address: 0x13f240 - 0x13f258
void entry_0013f240_0x13f240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f240_0x13f240");
#endif

    ctx->pc = 0x13f240u;

    // 0x13f240: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x13f240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f244: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x13F244u;
    {
        const bool branch_taken_0x13f244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f244) {
            ctx->pc = 0x13F258u;
            return;
        }
    }
    ctx->pc = 0x13F24Cu;
    // 0x13f24c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13F24Cu;
    {
        const bool branch_taken_0x13f24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F24Cu;
        // 0x13f250: 0xe4550210  swc1        $f21, 0x210($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f24c) {
            ctx->pc = 0x13F264u;
            return;
        }
    }
    ctx->pc = 0x13F254u;
    // 0x13f254: 0x0  nop
    ctx->pc = 0x13f254u;
    // NOP
    ctx->pc = 0x13f258u;
}
