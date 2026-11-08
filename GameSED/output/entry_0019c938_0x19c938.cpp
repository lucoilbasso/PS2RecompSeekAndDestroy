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

// Function: entry_0019c938
// Address: 0x19c938 - 0x19c958
void entry_0019c938_0x19c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c938_0x19c938");
#endif

    ctx->pc = 0x19c938u;

    // 0x19c938: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19C938u;
    {
        const bool branch_taken_0x19c938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c938) {
            ctx->pc = 0x19C974u;
            return;
        }
    }
    ctx->pc = 0x19C940u;
    // 0x19c940: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19c940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c944: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c948: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19C948u;
    {
        const bool branch_taken_0x19c948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C948u;
        // 0x19c94c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c948) {
            ctx->pc = 0x19C974u;
            return;
        }
    }
    ctx->pc = 0x19C950u;
    // 0x19c950: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x19c950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c954: 0x0  nop
    ctx->pc = 0x19c954u;
    // NOP
    ctx->pc = 0x19c958u;
}
