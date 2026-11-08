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

// Function: entry_0017ba60
// Address: 0x17ba60 - 0x17ba74
void entry_0017ba60_0x17ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba60_0x17ba60");
#endif

    ctx->pc = 0x17ba60u;

    // 0x17ba60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17ba64: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x17ba64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17ba68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17BA68u;
    {
        const bool branch_taken_0x17ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA68u;
        // 0x17ba6c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba68) {
            ctx->pc = 0x17BA40u;
            return;
        }
    }
    ctx->pc = 0x17BA70u;
    // 0x17ba70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ba70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ba74u;
}
