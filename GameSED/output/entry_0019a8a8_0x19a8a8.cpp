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

// Function: entry_0019a8a8
// Address: 0x19a8a8 - 0x19a8c4
void entry_0019a8a8_0x19a8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a8a8_0x19a8a8");
#endif

    ctx->pc = 0x19a8a8u;

    // 0x19a8a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a8ac: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A8ACu;
    {
        const bool branch_taken_0x19a8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x19a8ac) {
            ctx->pc = 0x19A8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A8ACu;
            // 0x19a8b0: 0x24830018  addiu       $v1, $a0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A8D0u;
            return;
        }
    }
    ctx->pc = 0x19A8B4u;
    // 0x19a8b4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x19a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19a8b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x19a8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8bc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x19A8BCu;
    SET_GPR_U32(ctx, 31, 0x19A8C4u);
    ctx->pc = 0x19A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8BCu;
    // 0x19a8c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x19A8BCu, 0x19A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8C4u;
}
