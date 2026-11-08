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

// Function: entry_00100b78
// Address: 0x100b78 - 0x100ba0
void entry_00100b78_0x100b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b78_0x100b78");
#endif

    ctx->pc = 0x100b78u;

label_100b78:
    // 0x100b78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x100b7c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x100b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x100b80: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x100b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x100b84: 0x0  nop
    ctx->pc = 0x100b84u;
    // NOP
    // 0x100b88: 0x0  nop
    ctx->pc = 0x100b88u;
    // NOP
    // 0x100b8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x100B8Cu;
    {
        const bool branch_taken_0x100b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B8Cu;
        // 0x100b90: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b8c) {
            ctx->pc = 0x100B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100b78;
        }
    }
    ctx->pc = 0x100B94u;
    // 0x100b94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x100B94u;
    {
        const bool branch_taken_0x100b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B94u;
        // 0x100b98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b94) {
            ctx->pc = 0x100BF8u;
            return;
        }
    }
    ctx->pc = 0x100B9Cu;
    // 0x100b9c: 0x0  nop
    ctx->pc = 0x100b9cu;
    // NOP
    ctx->pc = 0x100ba0u;
}
