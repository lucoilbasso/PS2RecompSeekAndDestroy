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

// Function: entry_001628dc
// Address: 0x1628dc - 0x1628f8
void entry_001628dc_0x1628dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001628dc_0x1628dc");
#endif

    ctx->pc = 0x1628dcu;

    // 0x1628dc: 0x8e220c1c  lw          $v0, 0xC1C($s1)
    ctx->pc = 0x1628dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3100)));
    // 0x1628e0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1628E0u;
    {
        const bool branch_taken_0x1628e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1628E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628E0u;
        // 0x1628e4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628e0) {
            ctx->pc = 0x1628F8u;
            return;
        }
    }
    ctx->pc = 0x1628E8u;
    // 0x1628e8: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x1628e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1628ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1628ECu;
    {
        const bool branch_taken_0x1628ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628ECu;
        // 0x1628f0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628ec) {
            ctx->pc = 0x1628FCu;
            return;
        }
    }
    ctx->pc = 0x1628F4u;
    // 0x1628f4: 0x0  nop
    ctx->pc = 0x1628f4u;
    // NOP
    ctx->pc = 0x1628f8u;
}
