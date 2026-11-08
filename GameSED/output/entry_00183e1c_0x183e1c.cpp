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

// Function: entry_00183e1c
// Address: 0x183e1c - 0x183e30
void entry_00183e1c_0x183e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183e1c_0x183e1c");
#endif

    ctx->pc = 0x183e1cu;

    // 0x183e1c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x183e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x183e20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x183e24: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x183e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183e28: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x183E28u;
    {
        const bool branch_taken_0x183e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183e28) {
            ctx->pc = 0x183E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183E28u;
            // 0x183e2c: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183DF8u;
            return;
        }
    }
    ctx->pc = 0x183E30u;
}
