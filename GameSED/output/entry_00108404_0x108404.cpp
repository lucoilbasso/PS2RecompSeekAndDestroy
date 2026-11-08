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

// Function: entry_00108404
// Address: 0x108404 - 0x108410
void entry_00108404_0x108404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108404_0x108404");
#endif

    ctx->pc = 0x108404u;

    // 0x108404: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x108404u;
    {
        const bool branch_taken_0x108404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108404u;
        // 0x108408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108404) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x10840Cu;
    // 0x10840c: 0x24620006  addiu       $v0, $v1, 0x6
    ctx->pc = 0x10840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    ctx->pc = 0x108410u;
}
