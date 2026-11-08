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

// Function: entry_0013b37c
// Address: 0x13b37c - 0x13b384
void entry_0013b37c_0x13b37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b37c_0x13b37c");
#endif

    ctx->pc = 0x13b37cu;

    // 0x13b37c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13B37Cu;
    {
        const bool branch_taken_0x13b37c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b37c) {
            ctx->pc = 0x13B380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B37Cu;
            // 0x13b380: 0xae0001f8  sw          $zero, 0x1F8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B384u;
            return;
        }
    }
    ctx->pc = 0x13B384u;
}
