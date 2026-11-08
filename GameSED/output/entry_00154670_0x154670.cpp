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

// Function: entry_00154670
// Address: 0x154670 - 0x154680
void entry_00154670_0x154670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154670_0x154670");
#endif

    ctx->pc = 0x154670u;

    // 0x154670: 0x111827  nor         $v1, $zero, $s1
    ctx->pc = 0x154670u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x154674: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x154678: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x154678u;
    {
        const bool branch_taken_0x154678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154678u;
        // 0x15467c: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154678) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154680u;
}
