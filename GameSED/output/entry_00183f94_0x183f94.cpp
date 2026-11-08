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

// Function: entry_00183f94
// Address: 0x183f94 - 0x183fa8
void entry_00183f94_0x183f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183f94_0x183f94");
#endif

    ctx->pc = 0x183f94u;

    // 0x183f94: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x183f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x183f98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x183f9c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x183f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183fa0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x183FA0u;
    {
        const bool branch_taken_0x183fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183fa0) {
            ctx->pc = 0x183FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183FA0u;
            // 0x183fa4: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183F70u;
            return;
        }
    }
    ctx->pc = 0x183FA8u;
}
