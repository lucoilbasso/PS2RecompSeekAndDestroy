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

// Function: entry_00156ddc
// Address: 0x156ddc - 0x156de8
void entry_00156ddc_0x156ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ddc_0x156ddc");
#endif

    ctx->pc = 0x156ddcu;

    // 0x156ddc: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x156DDCu;
    {
        const bool branch_taken_0x156ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DDCu;
        // 0x156de0: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ddc) {
            ctx->pc = 0x156D48u;
            return;
        }
    }
    ctx->pc = 0x156DE4u;
    // 0x156de4: 0x0  nop
    ctx->pc = 0x156de4u;
    // NOP
    ctx->pc = 0x156de8u;
}
