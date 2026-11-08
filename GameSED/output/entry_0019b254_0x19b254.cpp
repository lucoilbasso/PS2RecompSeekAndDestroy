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

// Function: entry_0019b254
// Address: 0x19b254 - 0x19b268
void entry_0019b254_0x19b254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b254_0x19b254");
#endif

    switch (ctx->pc) {
        case 0x19b25cu: goto label_19b25c;
        default: break;
    }

    ctx->pc = 0x19b254u;

    // 0x19b254: 0xc066a7c  jal         func_19A9F0
    ctx->pc = 0x19B254u;
    SET_GPR_U32(ctx, 31, 0x19B25Cu);
    ctx->pc = 0x19B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B254u;
    // 0x19b258: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9F0u, 0x19B254u, 0x19B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B25Cu;
label_19b25c:
    // 0x19b25c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x19B25Cu;
    {
        const bool branch_taken_0x19b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B25Cu;
        // 0x19b260: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b25c) {
            ctx->pc = 0x19B448u;
            return;
        }
    }
    ctx->pc = 0x19B264u;
    // 0x19b264: 0x0  nop
    ctx->pc = 0x19b264u;
    // NOP
    ctx->pc = 0x19b268u;
}
