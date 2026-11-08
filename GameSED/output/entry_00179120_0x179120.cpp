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

// Function: entry_00179120
// Address: 0x179120 - 0x179130
void entry_00179120_0x179120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179120_0x179120");
#endif

    ctx->pc = 0x179120u;

    // 0x179120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179124: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x179124u;
    {
        const bool branch_taken_0x179124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179124) {
            ctx->pc = 0x179128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179124u;
            // 0x179128: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1791B8u;
            return;
        }
    }
    ctx->pc = 0x17912Cu;
    // 0x17912c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x17912cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x179130u;
}
