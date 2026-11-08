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

// Function: entry_001aa334
// Address: 0x1aa334 - 0x1aa344
void entry_001aa334_0x1aa334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa334_0x1aa334");
#endif

    ctx->pc = 0x1aa334u;

    // 0x1aa334: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1AA334u;
    {
        const bool branch_taken_0x1aa334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA334u;
        // 0x1aa338: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa334) {
            ctx->pc = 0x1AA3F0u;
            return;
        }
    }
    ctx->pc = 0x1AA33Cu;
    // 0x1aa33c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1AA33Cu;
    {
        const bool branch_taken_0x1aa33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA33Cu;
        // 0x1aa340: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa33c) {
            ctx->pc = 0x1AA454u;
            return;
        }
    }
    ctx->pc = 0x1AA344u;
}
