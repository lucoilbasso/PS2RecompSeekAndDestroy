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

// Function: entry_0012432c
// Address: 0x12432c - 0x124334
void entry_0012432c_0x12432c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012432c_0x12432c");
#endif

    ctx->pc = 0x12432cu;

    // 0x12432c: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12432Cu;
    {
        const bool branch_taken_0x12432c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12432c) {
            ctx->pc = 0x124330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12432Cu;
            // 0x124330: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124334u;
            return;
        }
    }
    ctx->pc = 0x124334u;
}
