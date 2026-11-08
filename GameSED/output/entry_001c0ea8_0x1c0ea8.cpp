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

// Function: entry_001c0ea8
// Address: 0x1c0ea8 - 0x1c0ebc
void entry_001c0ea8_0x1c0ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0ea8_0x1c0ea8");
#endif

    ctx->pc = 0x1c0ea8u;

    // 0x1c0ea8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0EA8u;
    {
        const bool branch_taken_0x1c0ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EA8u;
        // 0x1c0eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ea8) {
            ctx->pc = 0x1C0EBCu;
            return;
        }
    }
    ctx->pc = 0x1C0EB0u;
    // 0x1c0eb0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c0eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c0eb4: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C0EB4u;
    SET_GPR_U32(ctx, 31, 0x1C0EBCu);
    ctx->pc = 0x1C0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EB4u;
    // 0x1c0eb8: 0x24a5b548  addiu       $a1, $a1, -0x4AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C0EB4u, 0x1C0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EBCu;
}
