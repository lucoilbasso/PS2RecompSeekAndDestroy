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

// Function: entry_00113abc
// Address: 0x113abc - 0x113ae0
void entry_00113abc_0x113abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113abc_0x113abc");
#endif

    ctx->pc = 0x113abcu;

label_113abc:
    // 0x113abc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113ac0: 0x0  nop
    ctx->pc = 0x113ac0u;
    // NOP
    // 0x113ac4: 0x0  nop
    ctx->pc = 0x113ac4u;
    // NOP
    // 0x113ac8: 0x0  nop
    ctx->pc = 0x113ac8u;
    // NOP
    // 0x113acc: 0x0  nop
    ctx->pc = 0x113accu;
    // NOP
    // 0x113ad0: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113AD0u;
    {
        const bool branch_taken_0x113ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113ad0) {
            ctx->pc = 0x113AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113AD0u;
            // 0x113ad4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113abc;
        }
    }
    ctx->pc = 0x113AD8u;
    // 0x113ad8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x113ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x113adc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x113adcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x113ae0u;
}
