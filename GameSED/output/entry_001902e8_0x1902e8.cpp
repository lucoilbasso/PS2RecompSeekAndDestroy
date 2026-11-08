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

// Function: entry_001902e8
// Address: 0x1902e8 - 0x1902fc
void entry_001902e8_0x1902e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001902e8_0x1902e8");
#endif

    switch (ctx->pc) {
        case 0x1902f8u: goto label_1902f8;
        default: break;
    }

    ctx->pc = 0x1902e8u;

    // 0x1902e8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1902E8u;
    {
        const bool branch_taken_0x1902e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902e8) {
            ctx->pc = 0x1902ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1902E8u;
            // 0x1902ec: 0x8e0401d8  lw          $a0, 0x1D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1902FCu;
            return;
        }
    }
    ctx->pc = 0x1902F0u;
    // 0x1902f0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1902F0u;
    SET_GPR_U32(ctx, 31, 0x1902F8u);
    ctx->pc = 0x1902F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902F0u;
    // 0x1902f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1902F0u, 0x1902F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902F8u;
label_1902f8:
    // 0x1902f8: 0x8e0401d8  lw          $a0, 0x1D8($s0)
    ctx->pc = 0x1902f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
    ctx->pc = 0x1902fcu;
}
