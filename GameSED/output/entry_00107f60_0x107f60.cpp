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

// Function: entry_00107f60
// Address: 0x107f60 - 0x107f70
void entry_00107f60_0x107f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f60_0x107f60");
#endif

    switch (ctx->pc) {
        case 0x107f68u: goto label_107f68;
        default: break;
    }

    ctx->pc = 0x107f60u;

    // 0x107f60: 0xc04171a  jal         func_105C68
    ctx->pc = 0x107F60u;
    SET_GPR_U32(ctx, 31, 0x107F68u);
    ctx->pc = 0x107F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F60u;
    // 0x107f64: 0x10202b  sltu        $a0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x107F60u, 0x107F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F68u;
label_107f68:
    // 0x107f68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x107F68u;
    {
        const bool branch_taken_0x107f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F68u;
        // 0x107f6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f68) {
            ctx->pc = 0x107F88u;
            return;
        }
    }
    ctx->pc = 0x107F70u;
}
