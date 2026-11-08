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

// Function: entry_0013ee00
// Address: 0x13ee00 - 0x13ee1c
void entry_0013ee00_0x13ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ee00_0x13ee00");
#endif

    ctx->pc = 0x13ee00u;

    // 0x13ee00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ee04: 0x246501e0  addiu       $a1, $v1, 0x1E0
    ctx->pc = 0x13ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x13ee08: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x13ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x13ee0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EE0Cu;
    {
        const bool branch_taken_0x13ee0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE0Cu;
        // 0x13ee10: 0x246400d0  addiu       $a0, $v1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee0c) {
            ctx->pc = 0x13EE1Cu;
            return;
        }
    }
    ctx->pc = 0x13EE14u;
    // 0x13ee14: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x13ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x13ee18: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x13ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->pc = 0x13ee1cu;
}
