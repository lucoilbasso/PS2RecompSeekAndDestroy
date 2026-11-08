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

// Function: entry_001529a4
// Address: 0x1529a4 - 0x1529b0
void entry_001529a4_0x1529a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001529a4_0x1529a4");
#endif

    ctx->pc = 0x1529a4u;

    // 0x1529a4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1529a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1529A8u;
    {
        const bool branch_taken_0x1529a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1529ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529A8u;
        // 0x1529ac: 0x8e770004  lw          $s7, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529a8) {
            ctx->pc = 0x152A5Cu;
            return;
        }
    }
    ctx->pc = 0x1529B0u;
}
