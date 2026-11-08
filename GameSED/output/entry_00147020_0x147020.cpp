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

// Function: entry_00147020
// Address: 0x147020 - 0x147030
void entry_00147020_0x147020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147020_0x147020");
#endif

    ctx->pc = 0x147020u;

    // 0x147020: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x147020u;
    {
        const bool branch_taken_0x147020 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x147020) {
            ctx->pc = 0x147024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147020u;
            // 0x147024: 0x8f848c54  lw          $a0, -0x73AC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147034u;
            return;
        }
    }
    ctx->pc = 0x147028u;
    // 0x147028: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x147028u;
    SET_GPR_U32(ctx, 31, 0x147030u);
    ctx->pc = 0x14702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147028u;
    // 0x14702c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x147028u, 0x147030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147030u;
}
