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

// Function: entry_00141088
// Address: 0x141088 - 0x1410a0
void entry_00141088_0x141088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141088_0x141088");
#endif

    ctx->pc = 0x141088u;

    // 0x141088: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141088u;
    {
        const bool branch_taken_0x141088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141088u;
        // 0x14108c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141088) {
            ctx->pc = 0x1410A0u;
            return;
        }
    }
    ctx->pc = 0x141090u;
    // 0x141090: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x141090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x141094: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x141094u;
    {
        const bool branch_taken_0x141094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141094u;
        // 0x141098: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141094) {
            ctx->pc = 0x14111Cu;
            return;
        }
    }
    ctx->pc = 0x14109Cu;
    // 0x14109c: 0x0  nop
    ctx->pc = 0x14109cu;
    // NOP
    ctx->pc = 0x1410a0u;
}
