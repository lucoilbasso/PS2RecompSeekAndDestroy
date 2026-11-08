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

// Function: entry_0017cdc8
// Address: 0x17cdc8 - 0x17cde8
void entry_0017cdc8_0x17cdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cdc8_0x17cdc8");
#endif

    switch (ctx->pc) {
        case 0x17cdd0u: goto label_17cdd0;
        default: break;
    }

    ctx->pc = 0x17cdc8u;

    // 0x17cdc8: 0xc0680a8  jal         func_1A02A0
    ctx->pc = 0x17CDC8u;
    SET_GPR_U32(ctx, 31, 0x17CDD0u);
    ctx->pc = 0x1A02A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02A0u, 0x17CDC8u, 0x17CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDD0u;
label_17cdd0:
    // 0x17cdd0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x17CDD0u;
    {
        const bool branch_taken_0x17cdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cdd0) {
            ctx->pc = 0x17CDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CDD0u;
            // 0x17cdd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            return;
        }
    }
    ctx->pc = 0x17CDD8u;
    // 0x17cdd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cddc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDDCu;
    {
        const bool branch_taken_0x17cddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDDCu;
        // 0x17cde0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cddc) {
            ctx->pc = 0x17CDE8u;
            return;
        }
    }
    ctx->pc = 0x17CDE4u;
    // 0x17cde4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17cde8u;
}
