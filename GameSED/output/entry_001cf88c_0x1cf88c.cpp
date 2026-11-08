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

// Function: entry_001cf88c
// Address: 0x1cf88c - 0x1cf8a0
void entry_001cf88c_0x1cf88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf88c_0x1cf88c");
#endif

    ctx->pc = 0x1cf88cu;

    // 0x1cf88c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF88Cu;
    {
        const bool branch_taken_0x1cf88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF88Cu;
        // 0x1cf890: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf88c) {
            ctx->pc = 0x1CF8A0u;
            return;
        }
    }
    ctx->pc = 0x1CF894u;
    // 0x1cf894: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1cf894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1cf898: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF898u;
    {
        const bool branch_taken_0x1cf898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF898u;
        // 0x1cf89c: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf898) {
            ctx->pc = 0x1CF8A4u;
            return;
        }
    }
    ctx->pc = 0x1CF8A0u;
}
