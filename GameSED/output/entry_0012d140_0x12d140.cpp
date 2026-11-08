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

// Function: entry_0012d140
// Address: 0x12d140 - 0x12d148
void entry_0012d140_0x12d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d140_0x12d140");
#endif

    ctx->pc = 0x12d140u;

    // 0x12d140: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12D140u;
    {
        const bool branch_taken_0x12d140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D140u;
        // 0x12d144: 0xae4000c0  sw          $zero, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d140) {
            ctx->pc = 0x12D16Cu;
            return;
        }
    }
    ctx->pc = 0x12D148u;
}
