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

// Function: entry_0019dc00
// Address: 0x19dc00 - 0x19dc10
void entry_0019dc00_0x19dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc00_0x19dc00");
#endif

    ctx->pc = 0x19dc00u;

    // 0x19dc00: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x19dc00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19dc04: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x19dc04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DC08u;
    {
        const bool branch_taken_0x19dc08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dc08) {
            ctx->pc = 0x19DC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DC08u;
            // 0x19dc0c: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DC10u;
            return;
        }
    }
    ctx->pc = 0x19DC10u;
}
