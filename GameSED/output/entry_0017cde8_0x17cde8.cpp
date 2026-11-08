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

// Function: entry_0017cde8
// Address: 0x17cde8 - 0x17ce08
void entry_0017cde8_0x17cde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cde8_0x17cde8");
#endif

    switch (ctx->pc) {
        case 0x17cdf0u: goto label_17cdf0;
        default: break;
    }

    ctx->pc = 0x17cde8u;

    // 0x17cde8: 0xc0680b6  jal         func_1A02D8
    ctx->pc = 0x17CDE8u;
    SET_GPR_U32(ctx, 31, 0x17CDF0u);
    ctx->pc = 0x17CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDE8u;
    // 0x17cdec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02D8u, 0x17CDE8u, 0x17CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDF0u;
label_17cdf0:
    // 0x17cdf0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x17CDF0u;
    {
        const bool branch_taken_0x17cdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cdf0) {
            ctx->pc = 0x17CDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CDF0u;
            // 0x17cdf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            return;
        }
    }
    ctx->pc = 0x17CDF8u;
    // 0x17cdf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdfc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDFCu;
    {
        const bool branch_taken_0x17cdfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDFCu;
        // 0x17ce00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdfc) {
            ctx->pc = 0x17CE08u;
            return;
        }
    }
    ctx->pc = 0x17CE04u;
    // 0x17ce04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17ce08u;
}
