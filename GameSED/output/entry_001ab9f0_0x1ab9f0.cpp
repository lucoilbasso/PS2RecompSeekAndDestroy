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

// Function: entry_001ab9f0
// Address: 0x1ab9f0 - 0x1aba0c
void entry_001ab9f0_0x1ab9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab9f0_0x1ab9f0");
#endif

    ctx->pc = 0x1ab9f0u;

label_1ab9f0:
    // 0x1ab9f0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1ab9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ab9f4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1AB9F4u;
    {
        const bool branch_taken_0x1ab9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9F4u;
        // 0x1ab9f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9f4) {
            ctx->pc = 0x1AB8F8u;
            return;
        }
    }
    ctx->pc = 0x1AB9FCu;
    // 0x1ab9fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ab9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aba00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1aba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1aba04: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ABA04u;
    {
        const bool branch_taken_0x1aba04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA04u;
        // 0x1aba08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba04) {
            ctx->pc = 0x1AB9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab9f0;
        }
    }
    ctx->pc = 0x1ABA0Cu;
}
