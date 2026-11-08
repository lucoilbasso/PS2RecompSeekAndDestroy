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

// Function: caseD_6
// Address: 0x1cb7f8 - 0x1cb818
void caseD_6_0x1cb7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1cb7f8");
#endif

    switch (ctx->pc) {
        case 0x1cb804u: goto label_1cb804;
        default: break;
    }

    ctx->pc = 0x1cb7f8u;

    // 0x1cb7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7fc: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB7FCu;
    SET_GPR_U32(ctx, 31, 0x1CB804u);
    ctx->pc = 0x1CB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7FCu;
    // 0x1cb800: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB7FCu, 0x1CB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB804u;
label_1cb804:
    // 0x1cb804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb808: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cb808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb80c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cb810: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1CB810u;
    {
        const bool branch_taken_0x1cb810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB810u;
        // 0x1cb814: 0xa04003fc  sb          $zero, 0x3FC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb810) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB818u;
}
