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

// Function: entry_00127b68
// Address: 0x127b68 - 0x127b90
void entry_00127b68_0x127b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127b68_0x127b68");
#endif

    ctx->pc = 0x127b68u;

label_127b68:
    // 0x127b68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127b6c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x127B6Cu;
    {
        const bool branch_taken_0x127b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B6Cu;
        // 0x127b70: 0x24630490  addiu       $v1, $v1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b6c) {
            ctx->pc = 0x127B20u;
            return;
        }
    }
    ctx->pc = 0x127B74u;
    // 0x127b74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x127b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x127b78: 0x24c60490  addiu       $a2, $a2, 0x490
    ctx->pc = 0x127b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1168));
    // 0x127b7c: 0x28e20032  slti        $v0, $a3, 0x32
    ctx->pc = 0x127b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x127b80: 0x0  nop
    ctx->pc = 0x127b80u;
    // NOP
    // 0x127b84: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x127B84u;
    {
        const bool branch_taken_0x127b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B84u;
        // 0x127b88: 0x24840490  addiu       $a0, $a0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b84) {
            ctx->pc = 0x127B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127b68;
        }
    }
    ctx->pc = 0x127B8Cu;
    // 0x127b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127b90u;
}
