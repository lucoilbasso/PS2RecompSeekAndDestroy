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

// Function: entry_0019abb0
// Address: 0x19abb0 - 0x19abcc
void entry_0019abb0_0x19abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019abb0_0x19abb0");
#endif

    ctx->pc = 0x19abb0u;

label_19abb0:
    // 0x19abb0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19abb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19abb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19abb8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19abbc: 0x0  nop
    ctx->pc = 0x19abbcu;
    // NOP
    // 0x19abc0: 0x0  nop
    ctx->pc = 0x19abc0u;
    // NOP
    // 0x19abc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19ABC4u;
    {
        const bool branch_taken_0x19abc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABC4u;
        // 0x19abc8: 0xa0460000  sb          $a2, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abc4) {
            ctx->pc = 0x19ABB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19abb0;
        }
    }
    ctx->pc = 0x19ABCCu;
}
