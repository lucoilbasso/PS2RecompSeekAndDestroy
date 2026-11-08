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

// Function: entry_00160b40
// Address: 0x160b40 - 0x160b58
void entry_00160b40_0x160b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b40_0x160b40");
#endif

    ctx->pc = 0x160b40u;

    // 0x160b40: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x160b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160b44: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x160b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x160b48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160B48u;
    {
        const bool branch_taken_0x160b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B48u;
        // 0x160b4c: 0xae050018  sw          $a1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b48) {
            ctx->pc = 0x160B58u;
            return;
        }
    }
    ctx->pc = 0x160B50u;
    // 0x160b50: 0xc057546  jal         func_15D518
    ctx->pc = 0x160B50u;
    SET_GPR_U32(ctx, 31, 0x160B58u);
    ctx->pc = 0x15D518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D518u, 0x160B50u, 0x160B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B58u;
}
