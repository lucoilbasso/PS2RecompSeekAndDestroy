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

// Function: entry_001650b0
// Address: 0x1650b0 - 0x1650d0
void entry_001650b0_0x1650b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001650b0_0x1650b0");
#endif

    ctx->pc = 0x1650b0u;

    // 0x1650b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1650b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1650b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1650b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1650b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1650b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1650bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1650bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1650c0: 0xac5311c4  sw          $s3, 0x11C4($v0)
    ctx->pc = 0x1650c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4548), GPR_U32(ctx, 19));
    // 0x1650c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1650C4u;
    {
        const bool branch_taken_0x1650c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650C4u;
        // 0x1650c8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650c4) {
            ctx->pc = 0x165138u;
            return;
        }
    }
    ctx->pc = 0x1650CCu;
    // 0x1650cc: 0x0  nop
    ctx->pc = 0x1650ccu;
    // NOP
    ctx->pc = 0x1650d0u;
}
