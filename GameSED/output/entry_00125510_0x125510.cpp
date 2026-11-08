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

// Function: entry_00125510
// Address: 0x125510 - 0x125520
void entry_00125510_0x125510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125510_0x125510");
#endif

    ctx->pc = 0x125510u;

    // 0x125510: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x125510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x125514: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x125514u;
    {
        const bool branch_taken_0x125514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125514u;
        // 0x125518: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125514) {
            ctx->pc = 0x125534u;
            return;
        }
    }
    ctx->pc = 0x12551Cu;
    // 0x12551c: 0x0  nop
    ctx->pc = 0x12551cu;
    // NOP
    ctx->pc = 0x125520u;
}
