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

// Function: entry_00179310
// Address: 0x179310 - 0x179324
void entry_00179310_0x179310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179310_0x179310");
#endif

    ctx->pc = 0x179310u;

    // 0x179310: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x179310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x179314: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x179314u;
    {
        const bool branch_taken_0x179314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x179314) {
            ctx->pc = 0x179318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179314u;
            // 0x179318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179324u;
            return;
        }
    }
    ctx->pc = 0x17931Cu;
    // 0x17931c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17931Cu;
    {
        const bool branch_taken_0x17931c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17931Cu;
        // 0x179320: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17931c) {
            ctx->pc = 0x179330u;
            return;
        }
    }
    ctx->pc = 0x179324u;
}
