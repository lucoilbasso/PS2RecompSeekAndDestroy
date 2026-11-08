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

// Function: entry_0019dc5c
// Address: 0x19dc5c - 0x19dc6c
void entry_0019dc5c_0x19dc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc5c_0x19dc5c");
#endif

    ctx->pc = 0x19dc5cu;

    // 0x19dc5c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19dc5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19dc60: 0x46026032  c.eq.s      $f12, $f2
    ctx->pc = 0x19dc60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dc64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DC64u;
    {
        const bool branch_taken_0x19dc64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dc64) {
            ctx->pc = 0x19DC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DC64u;
            // 0x19dc68: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DC6Cu;
            return;
        }
    }
    ctx->pc = 0x19DC6Cu;
}
