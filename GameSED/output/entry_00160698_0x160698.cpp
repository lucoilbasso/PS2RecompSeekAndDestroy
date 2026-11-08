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

// Function: entry_00160698
// Address: 0x160698 - 0x1606b4
void entry_00160698_0x160698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160698_0x160698");
#endif

    switch (ctx->pc) {
        case 0x1606b0u: goto label_1606b0;
        default: break;
    }

    ctx->pc = 0x160698u;

    // 0x160698: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x160698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x16069c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x16069cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1606a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1606A0u;
    {
        const bool branch_taken_0x1606a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1606A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A0u;
        // 0x1606a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606a0) {
            ctx->pc = 0x1606B4u;
            return;
        }
    }
    ctx->pc = 0x1606A8u;
    // 0x1606a8: 0xc05767a  jal         func_15D9E8
    ctx->pc = 0x1606A8u;
    SET_GPR_U32(ctx, 31, 0x1606B0u);
    ctx->pc = 0x1606ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606A8u;
    // 0x1606ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D9E8u, 0x1606A8u, 0x1606B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606B0u;
label_1606b0:
    // 0x1606b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1606b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1606b4u;
}
