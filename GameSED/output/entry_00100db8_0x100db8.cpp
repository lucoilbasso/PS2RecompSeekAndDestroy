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

// Function: entry_00100db8
// Address: 0x100db8 - 0x100ddc
void entry_00100db8_0x100db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100db8_0x100db8");
#endif

    switch (ctx->pc) {
        case 0x100dc0u: goto label_100dc0;
        default: break;
    }

    ctx->pc = 0x100db8u;

    // 0x100db8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x100DB8u;
    SET_GPR_U32(ctx, 31, 0x100DC0u);
    ctx->pc = 0x100DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100DB8u;
    // 0x100dbc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x100DB8u, 0x100DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DC0u;
label_100dc0:
    // 0x100dc0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100DC0u;
    {
        const bool branch_taken_0x100dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DC0u;
        // 0x100dc4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100dc0) {
            ctx->pc = 0x100DDCu;
            return;
        }
    }
    ctx->pc = 0x100DC8u;
    // 0x100dc8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x100dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100dd0: 0x24a51980  addiu       $a1, $a1, 0x1980
    ctx->pc = 0x100dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6528));
    // 0x100dd4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x100DD4u;
    SET_GPR_U32(ctx, 31, 0x100DDCu);
    ctx->pc = 0x100DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100DD4u;
    // 0x100dd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x100DD4u, 0x100DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DDCu;
}
