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

// Function: entry_00192938
// Address: 0x192938 - 0x19295c
void entry_00192938_0x192938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192938_0x192938");
#endif

    ctx->pc = 0x192938u;

label_192938:
    // 0x192938: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x192938u;
    {
        const bool branch_taken_0x192938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x19293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192938u;
        // 0x19293c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192938) {
            ctx->pc = 0x19295Cu;
            return;
        }
    }
    ctx->pc = 0x192940u;
    // 0x192940: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x192944: 0x0  nop
    ctx->pc = 0x192944u;
    // NOP
    // 0x192948: 0x0  nop
    ctx->pc = 0x192948u;
    // NOP
    // 0x19294c: 0x0  nop
    ctx->pc = 0x19294cu;
    // NOP
    // 0x192950: 0x0  nop
    ctx->pc = 0x192950u;
    // NOP
    // 0x192954: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x192954u;
    {
        const bool branch_taken_0x192954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192954u;
        // 0x192958: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192954) {
            ctx->pc = 0x192938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192938;
        }
    }
    ctx->pc = 0x19295Cu;
}
