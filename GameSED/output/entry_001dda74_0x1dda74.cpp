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

// Function: entry_001dda74
// Address: 0x1dda74 - 0x1dda98
void entry_001dda74_0x1dda74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dda74_0x1dda74");
#endif

    switch (ctx->pc) {
        case 0x1dda7cu: goto label_1dda7c;
        default: break;
    }

    ctx->pc = 0x1dda74u;

    // 0x1dda74: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DDA74u;
    SET_GPR_U32(ctx, 31, 0x1DDA7Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DDA74u, 0x1DDA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA7Cu;
label_1dda7c:
    // 0x1dda7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDA7Cu;
    {
        const bool branch_taken_0x1dda7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA7Cu;
        // 0x1dda80: 0xae4201bc  sw          $v0, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda7c) {
            ctx->pc = 0x1DDA98u;
            return;
        }
    }
    ctx->pc = 0x1DDA84u;
    // 0x1dda84: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dda84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dda88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dda88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda8c: 0x24a57f30  addiu       $a1, $a1, 0x7F30
    ctx->pc = 0x1dda8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32560));
    // 0x1dda90: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DDA90u;
    SET_GPR_U32(ctx, 31, 0x1DDA98u);
    ctx->pc = 0x1DDA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA90u;
    // 0x1dda94: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DDA90u, 0x1DDA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA98u;
}
