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

// Function: entry_001a81a8
// Address: 0x1a81a8 - 0x1a81cc
void entry_001a81a8_0x1a81a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a81a8_0x1a81a8");
#endif

    switch (ctx->pc) {
        case 0x1a81c8u: goto label_1a81c8;
        default: break;
    }

    ctx->pc = 0x1a81a8u;

    // 0x1a81a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a81ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a81acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a81b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a81b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a81b4: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1a81b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a81b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A81B8u;
    {
        const bool branch_taken_0x1a81b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81B8u;
        // 0x1a81bc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81b8) {
            ctx->pc = 0x1A81CCu;
            return;
        }
    }
    ctx->pc = 0x1A81C0u;
    // 0x1a81c0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A81C0u;
    SET_GPR_U32(ctx, 31, 0x1A81C8u);
    ctx->pc = 0x1A81C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A81C0u;
    // 0x1a81c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A81C0u, 0x1A81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81C8u;
label_1a81c8:
    // 0x1a81c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a81c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a81ccu;
}
