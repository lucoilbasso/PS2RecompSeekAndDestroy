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

// Function: entry_0018a4d0
// Address: 0x18a4d0 - 0x18a4ec
void entry_0018a4d0_0x18a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a4d0_0x18a4d0");
#endif

    ctx->pc = 0x18a4d0u;

    // 0x18a4d0: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x18a4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18a4d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A4D4u;
    {
        const bool branch_taken_0x18a4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4D4u;
        // 0x18a4d8: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4d4) {
            ctx->pc = 0x18A4ECu;
            return;
        }
    }
    ctx->pc = 0x18A4DCu;
    // 0x18a4dc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x18a4dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18a4e0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18a4e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18a4e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4e8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    ctx->pc = 0x18a4ecu;
}
