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

// Function: entry_0019efec
// Address: 0x19efec - 0x19effc
void entry_0019efec_0x19efec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019efec_0x19efec");
#endif

    ctx->pc = 0x19efecu;

    // 0x19efec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19efecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eff0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19eff0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eff4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x19EFF4u;
    {
        const bool branch_taken_0x19eff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19eff4) {
            ctx->pc = 0x19EFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EFF4u;
            // 0x19eff8: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F000u;
            return;
        }
    }
    ctx->pc = 0x19EFFCu;
}
