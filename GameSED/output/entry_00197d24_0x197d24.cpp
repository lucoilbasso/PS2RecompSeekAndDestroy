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

// Function: entry_00197d24
// Address: 0x197d24 - 0x197d40
void entry_00197d24_0x197d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197d24_0x197d24");
#endif

    switch (ctx->pc) {
        case 0x197d2cu: goto label_197d2c;
        default: break;
    }

    ctx->pc = 0x197d24u;

    // 0x197d24: 0xc061422  jal         func_185088
    ctx->pc = 0x197D24u;
    SET_GPR_U32(ctx, 31, 0x197D2Cu);
    ctx->pc = 0x197D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D24u;
    // 0x197d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x197D24u, 0x197D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D2Cu;
label_197d2c:
    // 0x197d2c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x197d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x197d30: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x197D30u;
    {
        const bool branch_taken_0x197d30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x197d30) {
            ctx->pc = 0x197D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197D30u;
            // 0x197d34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197D08u;
            return;
        }
    }
    ctx->pc = 0x197D38u;
    // 0x197d38: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x197D38u;
    {
        const bool branch_taken_0x197d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D38u;
        // 0x197d3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d38) {
            ctx->pc = 0x197DD4u;
            return;
        }
    }
    ctx->pc = 0x197D40u;
}
