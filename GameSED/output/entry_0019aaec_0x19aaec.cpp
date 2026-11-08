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

// Function: entry_0019aaec
// Address: 0x19aaec - 0x19aaf8
void entry_0019aaec_0x19aaec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aaec_0x19aaec");
#endif

    ctx->pc = 0x19aaecu;

    // 0x19aaec: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x19aaecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aaf0: 0x4501ffed  bc1t        . + 4 + (-0x13 << 2)
    ctx->pc = 0x19AAF0u;
    {
        const bool branch_taken_0x19aaf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAF0u;
        // 0x19aaf4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aaf0) {
            ctx->pc = 0x19AAA8u;
            return;
        }
    }
    ctx->pc = 0x19AAF8u;
}
