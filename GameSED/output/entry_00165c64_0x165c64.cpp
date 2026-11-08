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

// Function: entry_00165c64
// Address: 0x165c64 - 0x165c98
void entry_00165c64_0x165c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165c64_0x165c64");
#endif

    switch (ctx->pc) {
        case 0x165c74u: goto label_165c74;
        default: break;
    }

    ctx->pc = 0x165c64u;

    // 0x165c64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x165c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165c68: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x165c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c6c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x165C6Cu;
    SET_GPR_U32(ctx, 31, 0x165C74u);
    ctx->pc = 0x165C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C6Cu;
    // 0x165c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x165C6Cu, 0x165C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C74u;
label_165c74:
    // 0x165c74: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x165c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x165c78: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x165C78u;
    {
        const bool branch_taken_0x165c78 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x165c78) {
            ctx->pc = 0x165C98u;
            return;
        }
    }
    ctx->pc = 0x165C80u;
    // 0x165c80: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x165c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x165c84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165C84u;
    {
        const bool branch_taken_0x165c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C84u;
        // 0x165c88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c84) {
            ctx->pc = 0x165C98u;
            return;
        }
    }
    ctx->pc = 0x165C8Cu;
    // 0x165c8c: 0x8e0801b4  lw          $t0, 0x1B4($s0)
    ctx->pc = 0x165c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x165c90: 0xc041228  jal         func_1048A0
    ctx->pc = 0x165C90u;
    SET_GPR_U32(ctx, 31, 0x165C98u);
    ctx->pc = 0x165C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C90u;
    // 0x165c94: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x165C90u, 0x165C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C98u;
}
