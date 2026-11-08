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

// Function: entry_001b9498
// Address: 0x1b9498 - 0x1b94b0
void entry_001b9498_0x1b9498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9498_0x1b9498");
#endif

    ctx->pc = 0x1b9498u;

    // 0x1b9498: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9498u;
    {
        const bool branch_taken_0x1b9498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9498u;
        // 0x1b949c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9498) {
            ctx->pc = 0x1B94E0u;
            return;
        }
    }
    ctx->pc = 0x1B94A0u;
    // 0x1b94a0: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B94A0u;
    {
        const bool branch_taken_0x1b94a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94A0u;
        // 0x1b94a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94a0) {
            ctx->pc = 0x1B94F4u;
            return;
        }
    }
    ctx->pc = 0x1B94A8u;
    // 0x1b94a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B94A8u;
    {
        const bool branch_taken_0x1b94a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94A8u;
        // 0x1b94ac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94a8) {
            ctx->pc = 0x1B9530u;
            return;
        }
    }
    ctx->pc = 0x1B94B0u;
}
