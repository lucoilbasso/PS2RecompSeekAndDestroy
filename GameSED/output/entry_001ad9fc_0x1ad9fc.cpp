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

// Function: entry_001ad9fc
// Address: 0x1ad9fc - 0x1ada1c
void entry_001ad9fc_0x1ad9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad9fc_0x1ad9fc");
#endif

    ctx->pc = 0x1ad9fcu;

    // 0x1ad9fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ad9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ada00: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADA00u;
    {
        const bool branch_taken_0x1ada00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ADA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA00u;
        // 0x1ada04: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada00) {
            ctx->pc = 0x1ADA1Cu;
            return;
        }
    }
    ctx->pc = 0x1ADA08u;
    // 0x1ada08: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1ada08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ada0c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ada0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ada10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ada10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ada14: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1ada14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1ada18: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ada18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x1ada1cu;
}
