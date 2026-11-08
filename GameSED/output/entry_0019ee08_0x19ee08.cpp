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

// Function: entry_0019ee08
// Address: 0x19ee08 - 0x19ee18
void entry_0019ee08_0x19ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ee08_0x19ee08");
#endif

    ctx->pc = 0x19ee08u;

    // 0x19ee08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ee08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ee0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19ee0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ee10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19EE10u;
    {
        const bool branch_taken_0x19ee10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ee10) {
            ctx->pc = 0x19EE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EE10u;
            // 0x19ee14: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE18u;
            return;
        }
    }
    ctx->pc = 0x19EE18u;
}
