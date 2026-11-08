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

// Function: entry_001978d0
// Address: 0x1978d0 - 0x1978fc
void entry_001978d0_0x1978d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001978d0_0x1978d0");
#endif

    ctx->pc = 0x1978d0u;

label_1978d0:
    // 0x1978d0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1978d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1978d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1978d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1978d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1978d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1978dc: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1978dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1978e0: 0x0  nop
    ctx->pc = 0x1978e0u;
    // NOP
    // 0x1978e4: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1978E4u;
    {
        const bool branch_taken_0x1978e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1978E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978E4u;
        // 0x1978e8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978e4) {
            ctx->pc = 0x1978D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1978d0;
        }
    }
    ctx->pc = 0x1978ECu;
    // 0x1978ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1978ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1978f0: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x1978f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1978f4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1978F4u;
    {
        const bool branch_taken_0x1978f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1978F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978F4u;
        // 0x1978f8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978f4) {
            ctx->pc = 0x1977C8u;
            return;
        }
    }
    ctx->pc = 0x1978FCu;
}
