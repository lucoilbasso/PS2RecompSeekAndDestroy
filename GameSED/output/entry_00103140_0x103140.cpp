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

// Function: entry_00103140
// Address: 0x103140 - 0x10314c
void entry_00103140_0x103140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103140_0x103140");
#endif

    ctx->pc = 0x103140u;

    // 0x103140: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x103140u;
    {
        const bool branch_taken_0x103140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103140u;
        // 0x103144: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103140) {
            ctx->pc = 0x103248u;
            return;
        }
    }
    ctx->pc = 0x103148u;
    // 0x103148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10314cu;
}
