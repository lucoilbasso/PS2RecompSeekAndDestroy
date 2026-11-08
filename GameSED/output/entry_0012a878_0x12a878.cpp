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

// Function: entry_0012a878
// Address: 0x12a878 - 0x12a88c
void entry_0012a878_0x12a878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a878_0x12a878");
#endif

    ctx->pc = 0x12a878u;

    // 0x12a878: 0x24630490  addiu       $v1, $v1, 0x490
    ctx->pc = 0x12a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x12a87c: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x12a87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x12a880: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x12A880u;
    {
        const bool branch_taken_0x12a880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A880u;
        // 0x12a884: 0x24840490  addiu       $a0, $a0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a880) {
            ctx->pc = 0x12A858u;
            return;
        }
    }
    ctx->pc = 0x12A888u;
    // 0x12a888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12a888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12a88cu;
}
