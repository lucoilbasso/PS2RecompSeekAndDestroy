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

// Function: entry_00101ee0
// Address: 0x101ee0 - 0x101f08
void entry_00101ee0_0x101ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101ee0_0x101ee0");
#endif

    ctx->pc = 0x101ee0u;

label_101ee0:
    // 0x101ee0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x101ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x101ee4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x101ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x101ee8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x101ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101eec: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x101eecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x101ef0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101ef4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101EF4u;
    {
        const bool branch_taken_0x101ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EF4u;
        // 0x101ef8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ef4) {
            ctx->pc = 0x101EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101ee0;
        }
    }
    ctx->pc = 0x101EFCu;
    // 0x101efc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x101EFCu;
    {
        const bool branch_taken_0x101efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EFCu;
        // 0x101f00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101efc) {
            ctx->pc = 0x101F8Cu;
            return;
        }
    }
    ctx->pc = 0x101F04u;
    // 0x101f04: 0x0  nop
    ctx->pc = 0x101f04u;
    // NOP
    ctx->pc = 0x101f08u;
}
