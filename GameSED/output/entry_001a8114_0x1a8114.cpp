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

// Function: entry_001a8114
// Address: 0x1a8114 - 0x1a8124
void entry_001a8114_0x1a8114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8114_0x1a8114");
#endif

    ctx->pc = 0x1a8114u;

    // 0x1a8114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8118: 0x5474ffe5  bnel        $v1, $s4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1A8118u;
    {
        const bool branch_taken_0x1a8118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x1a8118) {
            ctx->pc = 0x1A811Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8118u;
            // 0x1a811c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A80B0u;
            return;
        }
    }
    ctx->pc = 0x1A8120u;
    // 0x1a8120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a8124u;
}
