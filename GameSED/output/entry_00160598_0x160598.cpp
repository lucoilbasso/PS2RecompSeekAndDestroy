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

// Function: entry_00160598
// Address: 0x160598 - 0x1605a8
void entry_00160598_0x160598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160598_0x160598");
#endif

    ctx->pc = 0x160598u;

    // 0x160598: 0x1082011b  beq         $a0, $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x160598u;
    {
        const bool branch_taken_0x160598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160598u;
        // 0x16059c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160598) {
            ctx->pc = 0x160A08u;
            return;
        }
    }
    ctx->pc = 0x1605A0u;
    // 0x1605a0: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x1605A0u;
    {
        const bool branch_taken_0x1605a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605A0u;
        // 0x1605a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605a0) {
            ctx->pc = 0x160A40u;
            return;
        }
    }
    ctx->pc = 0x1605A8u;
}
