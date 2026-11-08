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

// Function: entry_001452a8
// Address: 0x1452a8 - 0x1452c8
void entry_001452a8_0x1452a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001452a8_0x1452a8");
#endif

    switch (ctx->pc) {
        case 0x1452c4u: goto label_1452c4;
        default: break;
    }

    ctx->pc = 0x1452a8u;

    // 0x1452a8: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1452A8u;
    {
        const bool branch_taken_0x1452a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1452ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452A8u;
        // 0x1452ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452a8) {
            ctx->pc = 0x1452C8u;
            return;
        }
    }
    ctx->pc = 0x1452B0u;
    // 0x1452b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1452b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1452b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1452b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452b8: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x1452b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x1452bc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1452BCu;
    SET_GPR_U32(ctx, 31, 0x1452C4u);
    ctx->pc = 0x1452C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452BCu;
    // 0x1452c0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1452BCu, 0x1452C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452C4u;
label_1452c4:
    // 0x1452c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1452c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1452c8u;
}
