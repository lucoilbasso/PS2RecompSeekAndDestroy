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

// Function: entry_0019dd38
// Address: 0x19dd38 - 0x19dd48
void entry_0019dd38_0x19dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dd38_0x19dd38");
#endif

    ctx->pc = 0x19dd38u;

    // 0x19dd38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19dd38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dd3c: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x19dd3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dd40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DD40u;
    {
        const bool branch_taken_0x19dd40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dd40) {
            ctx->pc = 0x19DD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DD40u;
            // 0x19dd44: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DD48u;
            return;
        }
    }
    ctx->pc = 0x19DD48u;
}
