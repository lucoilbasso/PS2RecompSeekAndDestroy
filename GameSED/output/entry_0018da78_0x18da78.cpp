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

// Function: entry_0018da78
// Address: 0x18da78 - 0x18da88
void entry_0018da78_0x18da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da78_0x18da78");
#endif

    ctx->pc = 0x18da78u;

    // 0x18da78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18da78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18da7c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x18DA7Cu;
    {
        const bool branch_taken_0x18da7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA7Cu;
        // 0x18da80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da7c) {
            ctx->pc = 0x18DBD8u;
            return;
        }
    }
    ctx->pc = 0x18DA84u;
    // 0x18da84: 0x0  nop
    ctx->pc = 0x18da84u;
    // NOP
    ctx->pc = 0x18da88u;
}
