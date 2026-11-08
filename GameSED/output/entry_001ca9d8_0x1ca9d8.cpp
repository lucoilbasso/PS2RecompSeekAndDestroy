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

// Function: entry_001ca9d8
// Address: 0x1ca9d8 - 0x1caa00
void entry_001ca9d8_0x1ca9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca9d8_0x1ca9d8");
#endif

    switch (ctx->pc) {
        case 0x1ca9fcu: goto label_1ca9fc;
        default: break;
    }

    ctx->pc = 0x1ca9d8u;

    // 0x1ca9d8: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x1ca9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x1ca9dc: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x1ca9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x1ca9e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ca9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ca9e4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ca9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca9e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca9ec: 0x10540004  beq         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA9ECu;
    {
        const bool branch_taken_0x1ca9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1CA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9ECu;
        // 0x1ca9f0: 0xe0682d  daddu       $t5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9ec) {
            ctx->pc = 0x1CAA00u;
            return;
        }
    }
    ctx->pc = 0x1CA9F4u;
    // 0x1ca9f4: 0xc073d1a  jal         func_1CF468
    ctx->pc = 0x1CA9F4u;
    SET_GPR_U32(ctx, 31, 0x1CA9FCu);
    ctx->pc = 0x1CF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF468u, 0x1CA9F4u, 0x1CA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9FCu;
label_1ca9fc:
    // 0x1ca9fc: 0x0  nop
    ctx->pc = 0x1ca9fcu;
    // NOP
    ctx->pc = 0x1caa00u;
}
