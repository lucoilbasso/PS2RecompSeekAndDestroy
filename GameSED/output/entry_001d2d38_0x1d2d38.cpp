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

// Function: entry_001d2d38
// Address: 0x1d2d38 - 0x1d2d4c
void entry_001d2d38_0x1d2d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2d38_0x1d2d38");
#endif

    switch (ctx->pc) {
        case 0x1d2d48u: goto label_1d2d48;
        default: break;
    }

    ctx->pc = 0x1d2d38u;

    // 0x1d2d38: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2D38u;
    {
        const bool branch_taken_0x1d2d38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2d38) {
            ctx->pc = 0x1D2D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2D38u;
            // 0x1d2d3c: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D4Cu;
            return;
        }
    }
    ctx->pc = 0x1D2D40u;
    // 0x1d2d40: 0xc0753ec  jal         func_1D4FB0
    ctx->pc = 0x1D2D40u;
    SET_GPR_U32(ctx, 31, 0x1D2D48u);
    ctx->pc = 0x1D2D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D40u;
    // 0x1d2d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4FB0u, 0x1D2D40u, 0x1D2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D48u;
label_1d2d48:
    // 0x1d2d48: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d2d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1d2d4cu;
}
