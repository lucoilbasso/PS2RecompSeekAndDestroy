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

// Function: entry_001287d0
// Address: 0x1287d0 - 0x1287e8
void entry_001287d0_0x1287d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001287d0_0x1287d0");
#endif

    ctx->pc = 0x1287d0u;

    // 0x1287d0: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x1287d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x1287d4: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x1287d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x1287d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1287D8u;
    {
        const bool branch_taken_0x1287d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1287DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287D8u;
        // 0x1287dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287d8) {
            ctx->pc = 0x1287ECu;
            return;
        }
    }
    ctx->pc = 0x1287E0u;
    // 0x1287e0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1287e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1287e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1287e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1287e8u;
}
