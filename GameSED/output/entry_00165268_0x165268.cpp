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

// Function: entry_00165268
// Address: 0x165268 - 0x165278
void entry_00165268_0x165268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165268_0x165268");
#endif

    ctx->pc = 0x165268u;

    // 0x165268: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x165268u;
    {
        const bool branch_taken_0x165268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165268u;
        // 0x16526c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165268) {
            ctx->pc = 0x165308u;
            return;
        }
    }
    ctx->pc = 0x165270u;
    // 0x165270: 0x26311258  addiu       $s1, $s1, 0x1258
    ctx->pc = 0x165270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4696));
    // 0x165274: 0x0  nop
    ctx->pc = 0x165274u;
    // NOP
    ctx->pc = 0x165278u;
}
