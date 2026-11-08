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

// Function: entry_00156fa0
// Address: 0x156fa0 - 0x156fc4
void entry_00156fa0_0x156fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156fa0_0x156fa0");
#endif

    switch (ctx->pc) {
        case 0x156fbcu: goto label_156fbc;
        default: break;
    }

    ctx->pc = 0x156fa0u;

    // 0x156fa0: 0x6600012  bltz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x156FA0u;
    {
        const bool branch_taken_0x156fa0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x156FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FA0u;
        // 0x156fa4: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fa0) {
            ctx->pc = 0x156FECu;
            return;
        }
    }
    ctx->pc = 0x156FA8u;
    // 0x156fa8: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x156FA8u;
    {
        const bool branch_taken_0x156fa8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x156fa8) {
            ctx->pc = 0x156FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156FA8u;
            // 0x156fac: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156FC4u;
            return;
        }
    }
    ctx->pc = 0x156FB0u;
    // 0x156fb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x156fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fb4: 0xc04e346  jal         func_138D18
    ctx->pc = 0x156FB4u;
    SET_GPR_U32(ctx, 31, 0x156FBCu);
    ctx->pc = 0x156FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FB4u;
    // 0x156fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D18u, 0x156FB4u, 0x156FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FBCu;
label_156fbc:
    // 0x156fbc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x156fbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fc0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x156fc4u;
}
