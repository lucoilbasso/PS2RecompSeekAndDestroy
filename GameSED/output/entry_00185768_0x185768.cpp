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

// Function: entry_00185768
// Address: 0x185768 - 0x185780
void entry_00185768_0x185768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185768_0x185768");
#endif

    ctx->pc = 0x185768u;

    // 0x185768: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x185768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18576c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x185770: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185770u;
    {
        const bool branch_taken_0x185770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x185774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185770u;
        // 0x185774: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185770) {
            ctx->pc = 0x185780u;
            return;
        }
    }
    ctx->pc = 0x185778u;
    // 0x185778: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x185778u;
    {
        const bool branch_taken_0x185778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185778u;
        // 0x18577c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185778) {
            ctx->pc = 0x185824u;
            return;
        }
    }
    ctx->pc = 0x185780u;
}
