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

// Function: entry_0012d16c
// Address: 0x12d16c - 0x12d174
void entry_0012d16c_0x12d16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d16c_0x12d16c");
#endif

    ctx->pc = 0x12d16cu;

    // 0x12d16c: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D16Cu;
    {
        const bool branch_taken_0x12d16c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d16c) {
            ctx->pc = 0x12D170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D16Cu;
            // 0x12d170: 0xae0000c0  sw          $zero, 0xC0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D174u;
            return;
        }
    }
    ctx->pc = 0x12D174u;
}
