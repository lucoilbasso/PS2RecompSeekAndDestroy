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

// Function: entry_0013bf80
// Address: 0x13bf80 - 0x13bf94
void entry_0013bf80_0x13bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bf80_0x13bf80");
#endif

    switch (ctx->pc) {
        case 0x13bf8cu: goto label_13bf8c;
        default: break;
    }

    ctx->pc = 0x13bf80u;

    // 0x13bf80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf84: 0xc04eff4  jal         func_13BFD0
    ctx->pc = 0x13BF84u;
    SET_GPR_U32(ctx, 31, 0x13BF8Cu);
    ctx->pc = 0x13BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF84u;
    // 0x13bf88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BFD0u, 0x13BF84u, 0x13BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF8Cu;
label_13bf8c:
    // 0x13bf8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BF8Cu;
    {
        const bool branch_taken_0x13bf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF8Cu;
        // 0x13bf90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf8c) {
            ctx->pc = 0x13BFA4u;
            return;
        }
    }
    ctx->pc = 0x13BF94u;
}
