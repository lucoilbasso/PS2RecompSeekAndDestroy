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

// Function: entry_001c9e3c
// Address: 0x1c9e3c - 0x1c9e48
void entry_001c9e3c_0x1c9e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9e3c_0x1c9e3c");
#endif

    ctx->pc = 0x1c9e3cu;

    // 0x1c9e3c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C9E3Cu;
    {
        const bool branch_taken_0x1c9e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e3c) {
            ctx->pc = 0x1C9E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9E3Cu;
            // 0x1c9e40: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E90u;
            return;
        }
    }
    ctx->pc = 0x1C9E44u;
    // 0x1c9e44: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1c9e44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1c9e48u;
}
