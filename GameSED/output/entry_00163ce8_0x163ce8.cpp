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

// Function: entry_00163ce8
// Address: 0x163ce8 - 0x163d08
void entry_00163ce8_0x163ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163ce8_0x163ce8");
#endif

    switch (ctx->pc) {
        case 0x163d04u: goto label_163d04;
        default: break;
    }

    ctx->pc = 0x163ce8u;

    // 0x163ce8: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x163ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163cec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x163CECu;
    {
        const bool branch_taken_0x163cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163cec) {
            ctx->pc = 0x163CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163CECu;
            // 0x163cf0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163D08u;
            return;
        }
    }
    ctx->pc = 0x163CF4u;
    // 0x163cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cfc: 0xc0618da  jal         func_186368
    ctx->pc = 0x163CFCu;
    SET_GPR_U32(ctx, 31, 0x163D04u);
    ctx->pc = 0x163D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CFCu;
    // 0x163d00: 0xafa80034  sw          $t0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163CFCu, 0x163D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D04u;
label_163d04:
    // 0x163d04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x163d08u;
}
