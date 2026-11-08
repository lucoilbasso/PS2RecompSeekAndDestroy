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

// Function: entry_0018d9c0
// Address: 0x18d9c0 - 0x18d9e0
void entry_0018d9c0_0x18d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d9c0_0x18d9c0");
#endif

    ctx->pc = 0x18d9c0u;

    // 0x18d9c0: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x18d9c4: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x18d9c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18d9c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D9C8u;
    {
        const bool branch_taken_0x18d9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9C8u;
        // 0x18d9cc: 0x2462ffbf  addiu       $v0, $v1, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9c8) {
            ctx->pc = 0x18D9E0u;
            return;
        }
    }
    ctx->pc = 0x18D9D0u;
    // 0x18d9d0: 0x41503  sra         $v0, $a0, 20
    ctx->pc = 0x18d9d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 20));
    // 0x18d9d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d9d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18d9d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18D9D8u;
    {
        const bool branch_taken_0x18d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9D8u;
        // 0x18d9dc: 0x2446fa90  addiu       $a2, $v0, -0x570 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9d8) {
            ctx->pc = 0x18D9F8u;
            return;
        }
    }
    ctx->pc = 0x18D9E0u;
}
