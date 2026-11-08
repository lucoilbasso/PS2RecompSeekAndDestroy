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

// Function: entry_0010f4ac
// Address: 0x10f4ac - 0x10f4b8
void entry_0010f4ac_0x10f4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f4ac_0x10f4ac");
#endif

    ctx->pc = 0x10f4acu;

    // 0x10f4ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f4b0: 0x1453ffeb  bne         $v0, $s3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x10F4B0u;
    {
        const bool branch_taken_0x10f4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x10F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4B0u;
        // 0x10f4b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4b0) {
            ctx->pc = 0x10F460u;
            return;
        }
    }
    ctx->pc = 0x10F4B8u;
}
