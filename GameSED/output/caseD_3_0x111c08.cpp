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

// Function: caseD_3
// Address: 0x111c08 - 0x111c20
void caseD_3_0x111c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x111c08");
#endif

    switch (ctx->pc) {
        case 0x111c14u: goto label_111c14;
        default: break;
    }

    ctx->pc = 0x111c08u;

    // 0x111c08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x111c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c0c: 0xc052810  jal         func_14A040
    ctx->pc = 0x111C0Cu;
    SET_GPR_U32(ctx, 31, 0x111C14u);
    ctx->pc = 0x111C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C0Cu;
    // 0x111c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A040u, 0x111C0Cu, 0x111C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C14u;
label_111c14:
    // 0x111c14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x111C14u;
    {
        const bool branch_taken_0x111c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C14u;
        // 0x111c18: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c14) {
            ctx->pc = 0x111C30u;
            return;
        }
    }
    ctx->pc = 0x111C1Cu;
    // 0x111c1c: 0x0  nop
    ctx->pc = 0x111c1cu;
    // NOP
    ctx->pc = 0x111c20u;
}
