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

// Function: entry_0019dba0
// Address: 0x19dba0 - 0x19dbb0
void entry_0019dba0_0x19dba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dba0_0x19dba0");
#endif

    ctx->pc = 0x19dba0u;

    // 0x19dba0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x19dba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19dba4: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x19dba4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dba8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DBA8u;
    {
        const bool branch_taken_0x19dba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dba8) {
            ctx->pc = 0x19DBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DBA8u;
            // 0x19dbac: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DBB0u;
            return;
        }
    }
    ctx->pc = 0x19DBB0u;
}
