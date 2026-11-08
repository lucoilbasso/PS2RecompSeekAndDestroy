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

// Function: entry_0015a088
// Address: 0x15a088 - 0x15a0a0
void entry_0015a088_0x15a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a088_0x15a088");
#endif

    ctx->pc = 0x15a088u;

    // 0x15a088: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15a088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a08c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x15a08cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15a090: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A090u;
    {
        const bool branch_taken_0x15a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x15A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A090u;
        // 0x15a094: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a090) {
            ctx->pc = 0x15A0ACu;
            return;
        }
    }
    ctx->pc = 0x15A098u;
    // 0x15a098: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x15A098u;
    SET_GPR_U32(ctx, 31, 0x15A0A0u);
    ctx->pc = 0x15A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A098u;
    // 0x15a09c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x15A098u, 0x15A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0A0u;
}
