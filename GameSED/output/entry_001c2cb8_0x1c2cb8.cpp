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

// Function: entry_001c2cb8
// Address: 0x1c2cb8 - 0x1c2cec
void entry_001c2cb8_0x1c2cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2cb8_0x1c2cb8");
#endif

    ctx->pc = 0x1c2cb8u;

    // 0x1c2cb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2cbc: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2CBCu;
    {
        const bool branch_taken_0x1c2cbc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CBCu;
        // 0x1c2cc0: 0xace001a8  sw          $zero, 0x1A8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cbc) {
            ctx->pc = 0x1C2CECu;
            return;
        }
    }
    ctx->pc = 0x1C2CC4u;
    // 0x1c2cc4: 0x8ce301b8  lw          $v1, 0x1B8($a3)
    ctx->pc = 0x1c2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1c2cc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2ccc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1c2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1c2cd0: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C2CD0u;
    {
        const bool branch_taken_0x1c2cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c2cd0) {
            ctx->pc = 0x1C2CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2CD0u;
            // 0x1c2cd4: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D34u;
            return;
        }
    }
    ctx->pc = 0x1C2CD8u;
    // 0x1c2cd8: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1c2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x1c2cdc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C2CDCu;
    {
        const bool branch_taken_0x1c2cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CDCu;
        // 0x1c2ce0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cdc) {
            ctx->pc = 0x1C2E00u;
            return;
        }
    }
    ctx->pc = 0x1C2CE4u;
    // 0x1c2ce4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C2CE4u;
    {
        const bool branch_taken_0x1c2ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CE4u;
        // 0x1c2ce8: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ce4) {
            ctx->pc = 0x1C2D34u;
            return;
        }
    }
    ctx->pc = 0x1C2CECu;
}
