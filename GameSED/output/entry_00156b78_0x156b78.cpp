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

// Function: entry_00156b78
// Address: 0x156b78 - 0x156b84
void entry_00156b78_0x156b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b78_0x156b78");
#endif

    ctx->pc = 0x156b78u;

    // 0x156b78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x156b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x156b7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156B7Cu;
    {
        const bool branch_taken_0x156b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B7Cu;
        // 0x156b80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b7c) {
            ctx->pc = 0x156B8Cu;
            return;
        }
    }
    ctx->pc = 0x156B84u;
}
