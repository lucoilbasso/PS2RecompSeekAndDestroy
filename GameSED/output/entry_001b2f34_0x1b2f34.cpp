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

// Function: entry_001b2f34
// Address: 0x1b2f34 - 0x1b2f48
void entry_001b2f34_0x1b2f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2f34_0x1b2f34");
#endif

    ctx->pc = 0x1b2f34u;

    // 0x1b2f34: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2F34u;
    {
        const bool branch_taken_0x1b2f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f34) {
            ctx->pc = 0x1B2F48u;
            return;
        }
    }
    ctx->pc = 0x1B2F3Cu;
    // 0x1b2f3c: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1b2f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2f40: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2F40u;
    {
        const bool branch_taken_0x1b2f40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f40) {
            ctx->pc = 0x1B2F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2F40u;
            // 0x1b2f44: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2F58u;
            return;
        }
    }
    ctx->pc = 0x1B2F48u;
}
