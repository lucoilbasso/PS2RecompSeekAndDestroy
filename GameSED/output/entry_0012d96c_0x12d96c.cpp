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

// Function: entry_0012d96c
// Address: 0x12d96c - 0x12d98c
void entry_0012d96c_0x12d96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d96c_0x12d96c");
#endif

    ctx->pc = 0x12d96cu;

    // 0x12d96c: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12d970: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12d970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12d974: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D974u;
    {
        const bool branch_taken_0x12d974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D974u;
        // 0x12d978: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d974) {
            ctx->pc = 0x12D98Cu;
            return;
        }
    }
    ctx->pc = 0x12D97Cu;
    // 0x12d97c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12d97cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d980: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x12d980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x12d984: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x12d984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d988: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12d988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x12d98cu;
}
