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

// Function: entry_00124300
// Address: 0x124300 - 0x124308
void entry_00124300_0x124300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124300_0x124300");
#endif

    ctx->pc = 0x124300u;

    // 0x124300: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x124300u;
    {
        const bool branch_taken_0x124300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124300u;
        // 0x124304: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124300) {
            ctx->pc = 0x12432Cu;
            return;
        }
    }
    ctx->pc = 0x124308u;
}
