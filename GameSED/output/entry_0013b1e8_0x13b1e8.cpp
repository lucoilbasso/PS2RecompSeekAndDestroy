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

// Function: entry_0013b1e8
// Address: 0x13b1e8 - 0x13b200
void entry_0013b1e8_0x13b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b1e8_0x13b1e8");
#endif

    ctx->pc = 0x13b1e8u;

    // 0x13b1e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13b1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b1ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B1ECu;
    {
        const bool branch_taken_0x13b1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1ECu;
        // 0x13b1f0: 0x21140  sll         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1ec) {
            ctx->pc = 0x13B200u;
            return;
        }
    }
    ctx->pc = 0x13B1F4u;
    // 0x13b1f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x13b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x13b1f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13B1F8u;
    {
        const bool branch_taken_0x13b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B1F8u;
        // 0x13b1fc: 0x24423fe0  addiu       $v0, $v0, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1f8) {
            ctx->pc = 0x13B204u;
            return;
        }
    }
    ctx->pc = 0x13B200u;
}
