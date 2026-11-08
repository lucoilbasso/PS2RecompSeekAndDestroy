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

// Function: entry_00174ea8
// Address: 0x174ea8 - 0x174ed0
void entry_00174ea8_0x174ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174ea8_0x174ea8");
#endif

    switch (ctx->pc) {
        case 0x174eb8u: goto label_174eb8;
        default: break;
    }

    ctx->pc = 0x174ea8u;

    // 0x174ea8: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x174ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x174eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174eb0: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x174EB0u;
    SET_GPR_U32(ctx, 31, 0x174EB8u);
    ctx->pc = 0x174EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EB0u;
    // 0x174eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x174EB0u, 0x174EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EB8u;
label_174eb8:
    // 0x174eb8: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174EB8u;
    {
        const bool branch_taken_0x174eb8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x174eb8) {
            ctx->pc = 0x174EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174EB8u;
            // 0x174ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174EDCu;
            return;
        }
    }
    ctx->pc = 0x174EC0u;
    // 0x174ec0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x174ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x174ec4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x174ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ec8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x174EC8u;
    SET_GPR_U32(ctx, 31, 0x174ED0u);
    ctx->pc = 0x174ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EC8u;
    // 0x174ecc: 0x24847828  addiu       $a0, $a0, 0x7828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x174EC8u, 0x174ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174ED0u;
}
