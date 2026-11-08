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

// Function: entry_0017c350
// Address: 0x17c350 - 0x17c364
void entry_0017c350_0x17c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c350_0x17c350");
#endif

    ctx->pc = 0x17c350u;

    // 0x17c350: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17c350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17c354: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x17c354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c358: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17C358u;
    {
        const bool branch_taken_0x17c358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C358u;
        // 0x17c35c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c358) {
            ctx->pc = 0x17C330u;
            return;
        }
    }
    ctx->pc = 0x17C360u;
    // 0x17c360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17c364u;
}
