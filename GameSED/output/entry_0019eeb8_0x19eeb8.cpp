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

// Function: entry_0019eeb8
// Address: 0x19eeb8 - 0x19eec8
void entry_0019eeb8_0x19eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eeb8_0x19eeb8");
#endif

    ctx->pc = 0x19eeb8u;

    // 0x19eeb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19eeb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eebc: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x19eebcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eec0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19EEC0u;
    {
        const bool branch_taken_0x19eec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19eec0) {
            ctx->pc = 0x19EEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EEC0u;
            // 0x19eec4: 0x46006086  mov.s       $f2, $f12 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EEC8u;
            return;
        }
    }
    ctx->pc = 0x19EEC8u;
}
