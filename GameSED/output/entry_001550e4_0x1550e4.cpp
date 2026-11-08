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

// Function: entry_001550e4
// Address: 0x1550e4 - 0x155100
void entry_001550e4_0x1550e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001550e4_0x1550e4");
#endif

    ctx->pc = 0x1550e4u;

    // 0x1550e4: 0x1080008d  beqz        $a0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1550E4u;
    {
        const bool branch_taken_0x1550e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550E4u;
        // 0x1550e8: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550e4) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x1550ECu;
    // 0x1550ec: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1550ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1550f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1550f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1550f4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1550F4u;
    {
        const bool branch_taken_0x1550f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550F4u;
        // 0x1550f8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550f4) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x1550FCu;
    // 0x1550fc: 0x0  nop
    ctx->pc = 0x1550fcu;
    // NOP
    ctx->pc = 0x155100u;
}
