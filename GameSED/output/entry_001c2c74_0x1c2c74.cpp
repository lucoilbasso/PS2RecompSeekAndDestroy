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

// Function: entry_001c2c74
// Address: 0x1c2c74 - 0x1c2c90
void entry_001c2c74_0x1c2c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2c74_0x1c2c74");
#endif

    ctx->pc = 0x1c2c74u;

    // 0x1c2c74: 0x8ce200e8  lw          $v0, 0xE8($a3)
    ctx->pc = 0x1c2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
    // 0x1c2c78: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2C78u;
    {
        const bool branch_taken_0x1c2c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c78) {
            ctx->pc = 0x1C2C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2C78u;
            // 0x1c2c7c: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2C90u;
            return;
        }
    }
    ctx->pc = 0x1C2C80u;
    // 0x1c2c80: 0x8ce201a8  lw          $v0, 0x1A8($a3)
    ctx->pc = 0x1c2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x1c2c84: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2C84u;
    {
        const bool branch_taken_0x1c2c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c84) {
            ctx->pc = 0x1C2C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2C84u;
            // 0x1c2c88: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2CB8u;
            return;
        }
    }
    ctx->pc = 0x1C2C8Cu;
    // 0x1c2c8c: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1c2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    ctx->pc = 0x1c2c90u;
}
