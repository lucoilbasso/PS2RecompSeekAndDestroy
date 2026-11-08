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

// Function: caseD_e
// Address: 0x154ea0 - 0x154ec8
void caseD_e_0x154ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x154ea0");
#endif

    switch (ctx->pc) {
        case 0x154ea8u: goto label_154ea8;
        case 0x154eb4u: goto label_154eb4;
        default: break;
    }

    ctx->pc = 0x154ea0u;

    // 0x154ea0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154EA0u;
    SET_GPR_U32(ctx, 31, 0x154EA8u);
    ctx->pc = 0x154EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EA0u;
    // 0x154ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154EA0u, 0x154EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EA8u;
label_154ea8:
    // 0x154ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154eac: 0xc06a298  jal         func_1A8A60
    ctx->pc = 0x154EACu;
    SET_GPR_U32(ctx, 31, 0x154EB4u);
    ctx->pc = 0x154EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EACu;
    // 0x154eb0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x154EACu, 0x154EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EB4u;
label_154eb4:
    // 0x154eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154eb8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x154EB8u;
    {
        const bool branch_taken_0x154eb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x154EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EB8u;
        // 0x154ebc: 0x8e030690  lw          $v1, 0x690($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154eb8) {
            ctx->pc = 0x154EC8u;
            return;
        }
    }
    ctx->pc = 0x154EC0u;
    // 0x154ec0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x154EC0u;
    {
        const bool branch_taken_0x154ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EC0u;
        // 0x154ec4: 0x8c6401b4  lw          $a0, 0x1B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ec0) {
            ctx->pc = 0x154F08u;
            return;
        }
    }
    ctx->pc = 0x154EC8u;
}
