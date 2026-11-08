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

// Function: entry_001d14dc
// Address: 0x1d14dc - 0x1d14e8
void entry_001d14dc_0x1d14dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d14dc_0x1d14dc");
#endif

    ctx->pc = 0x1d14dcu;

    // 0x1d14dc: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x1d14dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d14e0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D14E0u;
    {
        const bool branch_taken_0x1d14e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14E0u;
        // 0x1d14e4: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14e0) {
            ctx->pc = 0x1D1460u;
            return;
        }
    }
    ctx->pc = 0x1D14E8u;
}
