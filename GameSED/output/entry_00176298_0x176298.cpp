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

// Function: entry_00176298
// Address: 0x176298 - 0x1762c8
void entry_00176298_0x176298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176298_0x176298");
#endif

    switch (ctx->pc) {
        case 0x1762a4u: goto label_1762a4;
        case 0x1762c4u: goto label_1762c4;
        default: break;
    }

    ctx->pc = 0x176298u;

    // 0x176298: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17629c: 0xc06bd38  jal         func_1AF4E0
    ctx->pc = 0x17629Cu;
    SET_GPR_U32(ctx, 31, 0x1762A4u);
    ctx->pc = 0x1762A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17629Cu;
    // 0x1762a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4E0u, 0x17629Cu, 0x1762A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762A4u;
label_1762a4:
    // 0x1762a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1762a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1762a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1762A8u;
    {
        const bool branch_taken_0x1762a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1762ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762A8u;
        // 0x1762ac: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762a8) {
            ctx->pc = 0x1762C8u;
            return;
        }
    }
    ctx->pc = 0x1762B0u;
    // 0x1762b0: 0x8f828c74  lw          $v0, -0x738C($gp)
    ctx->pc = 0x1762b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937716)));
    // 0x1762b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1762B4u;
    {
        const bool branch_taken_0x1762b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1762b4) {
            ctx->pc = 0x1762C8u;
            return;
        }
    }
    ctx->pc = 0x1762BCu;
    // 0x1762bc: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1762BCu;
    SET_GPR_U32(ctx, 31, 0x1762C4u);
    ctx->pc = 0x1762C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762BCu;
    // 0x1762c0: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1762BCu, 0x1762C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762C4u;
label_1762c4:
    // 0x1762c4: 0x8f848c68  lw          $a0, -0x7398($gp)
    ctx->pc = 0x1762c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->pc = 0x1762c8u;
}
