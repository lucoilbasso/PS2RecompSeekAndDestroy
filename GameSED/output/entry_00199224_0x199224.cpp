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

// Function: entry_00199224
// Address: 0x199224 - 0x199244
void entry_00199224_0x199224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199224_0x199224");
#endif

    ctx->pc = 0x199224u;

    // 0x199224: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x199224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199228: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x199228u;
    {
        const bool branch_taken_0x199228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199228u;
        // 0x19922c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199228) {
            ctx->pc = 0x199254u;
            return;
        }
    }
    ctx->pc = 0x199230u;
    // 0x199230: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x199230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x199234: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x199234u;
    {
        const bool branch_taken_0x199234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199234) {
            ctx->pc = 0x199238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199234u;
            // 0x199238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199244u;
            return;
        }
    }
    ctx->pc = 0x19923Cu;
    // 0x19923c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x19923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x199240: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x199240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x199244u;
}
