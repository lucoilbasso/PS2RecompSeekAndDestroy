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

// Function: entry_0018e784
// Address: 0x18e784 - 0x18e7a0
void entry_0018e784_0x18e784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e784_0x18e784");
#endif

    ctx->pc = 0x18e784u;

    // 0x18e784: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E784u;
    {
        const bool branch_taken_0x18e784 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E784u;
        // 0x18e788: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e784) {
            ctx->pc = 0x18E7A0u;
            return;
        }
    }
    ctx->pc = 0x18E78Cu;
    // 0x18e78c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x18e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18e790: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e794: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18E794u;
    {
        const bool branch_taken_0x18e794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E794u;
        // 0x18e798: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e794) {
            ctx->pc = 0x18E7DCu;
            return;
        }
    }
    ctx->pc = 0x18E79Cu;
    // 0x18e79c: 0x0  nop
    ctx->pc = 0x18e79cu;
    // NOP
    ctx->pc = 0x18e7a0u;
}
