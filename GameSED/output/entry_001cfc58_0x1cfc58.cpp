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

// Function: entry_001cfc58
// Address: 0x1cfc58 - 0x1cfc74
void entry_001cfc58_0x1cfc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfc58_0x1cfc58");
#endif

    ctx->pc = 0x1cfc58u;

label_1cfc58:
    // 0x1cfc58: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x1cfc58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x1cfc5c: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x1cfc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1cfc60: 0x0  nop
    ctx->pc = 0x1cfc60u;
    // NOP
    // 0x1cfc64: 0x0  nop
    ctx->pc = 0x1cfc64u;
    // NOP
    // 0x1cfc68: 0x0  nop
    ctx->pc = 0x1cfc68u;
    // NOP
    // 0x1cfc6c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CFC6Cu;
    {
        const bool branch_taken_0x1cfc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC6Cu;
        // 0x1cfc70: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc6c) {
            ctx->pc = 0x1CFC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfc58;
        }
    }
    ctx->pc = 0x1CFC74u;
}
