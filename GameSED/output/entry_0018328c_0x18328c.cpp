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

// Function: entry_0018328c
// Address: 0x18328c - 0x18329c
void entry_0018328c_0x18328c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018328c_0x18328c");
#endif

    ctx->pc = 0x18328cu;

    // 0x18328c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18328cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183290: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x183290u;
    {
        const bool branch_taken_0x183290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183290u;
        // 0x183294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183290) {
            ctx->pc = 0x18329Cu;
            return;
        }
    }
    ctx->pc = 0x183298u;
    // 0x183298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18329cu;
}
