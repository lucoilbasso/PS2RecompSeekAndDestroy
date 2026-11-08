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

// Function: entry_001b37cc
// Address: 0x1b37cc - 0x1b37e0
void entry_001b37cc_0x1b37cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b37cc_0x1b37cc");
#endif

    ctx->pc = 0x1b37ccu;

    // 0x1b37cc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B37CCu;
    {
        const bool branch_taken_0x1b37cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b37cc) {
            ctx->pc = 0x1B37E0u;
            return;
        }
    }
    ctx->pc = 0x1B37D4u;
    // 0x1b37d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b37d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B37D8u;
    {
        const bool branch_taken_0x1b37d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37D8u;
        // 0x1b37dc: 0x2e620401  sltiu       $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37d8) {
            ctx->pc = 0x1B37F0u;
            return;
        }
    }
    ctx->pc = 0x1B37E0u;
}
