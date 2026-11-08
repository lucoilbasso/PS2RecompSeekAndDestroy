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

// Function: entry_00179828
// Address: 0x179828 - 0x179830
void entry_00179828_0x179828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179828_0x179828");
#endif

    ctx->pc = 0x179828u;

    // 0x179828: 0x5460ffe3  bnel        $v1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x179828u;
    {
        const bool branch_taken_0x179828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179828) {
            ctx->pc = 0x17982Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179828u;
            // 0x17982c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1797B8u;
            return;
        }
    }
    ctx->pc = 0x179830u;
}
