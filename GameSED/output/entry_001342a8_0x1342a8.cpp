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

// Function: entry_001342a8
// Address: 0x1342a8 - 0x1342b8
void entry_001342a8_0x1342a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001342a8_0x1342a8");
#endif

    switch (ctx->pc) {
        case 0x1342b0u: goto label_1342b0;
        default: break;
    }

    ctx->pc = 0x1342a8u;

    // 0x1342a8: 0xc04e47e  jal         func_1391F8
    ctx->pc = 0x1342A8u;
    SET_GPR_U32(ctx, 31, 0x1342B0u);
    ctx->pc = 0x1342ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342A8u;
    // 0x1342ac: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1391F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1391F8u, 0x1342A8u, 0x1342B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342B0u;
label_1342b0:
    // 0x1342b0: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x1342B0u;
    {
        const bool branch_taken_0x1342b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342B0u;
        // 0x1342b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342b0) {
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x1342B8u;
}
