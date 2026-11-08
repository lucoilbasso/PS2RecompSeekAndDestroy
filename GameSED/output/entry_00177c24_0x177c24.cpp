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

// Function: entry_00177c24
// Address: 0x177c24 - 0x177c3c
void entry_00177c24_0x177c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177c24_0x177c24");
#endif

    ctx->pc = 0x177c24u;

    // 0x177c24: 0x1611ffee  bne         $s0, $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x177C24u;
    {
        const bool branch_taken_0x177c24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x177C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C24u;
        // 0x177c28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c24) {
            ctx->pc = 0x177BE0u;
            return;
        }
    }
    ctx->pc = 0x177C2Cu;
    // 0x177c2c: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x177C2Cu;
    {
        const bool branch_taken_0x177c2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x177c2c) {
            ctx->pc = 0x177BE0u;
            return;
        }
    }
    ctx->pc = 0x177C34u;
    // 0x177c34: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x177c34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
    // 0x177c38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177c3cu;
}
