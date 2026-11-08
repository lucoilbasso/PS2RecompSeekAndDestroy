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

// Function: entry_001737b0
// Address: 0x1737b0 - 0x1737d0
void entry_001737b0_0x1737b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001737b0_0x1737b0");
#endif

    ctx->pc = 0x1737b0u;

    // 0x1737b0: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x1737b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1737b4: 0x26a5ffff  addiu       $a1, $s5, -0x1
    ctx->pc = 0x1737b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1737b8: 0x24820150  addiu       $v0, $a0, 0x150
    ctx->pc = 0x1737b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1737bc: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x1737bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1737c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1737C0u;
    {
        const bool branch_taken_0x1737c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1737C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737C0u;
        // 0x1737c4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737c0) {
            ctx->pc = 0x1737D0u;
            return;
        }
    }
    ctx->pc = 0x1737C8u;
    // 0x1737c8: 0x248202c0  addiu       $v0, $a0, 0x2C0
    ctx->pc = 0x1737c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
    // 0x1737cc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1737ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x1737d0u;
}
