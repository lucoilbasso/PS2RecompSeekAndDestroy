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

// Function: entry_001022f8
// Address: 0x1022f8 - 0x102314
void entry_001022f8_0x1022f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001022f8_0x1022f8");
#endif

    ctx->pc = 0x1022f8u;

    // 0x1022f8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1022F8u;
    {
        const bool branch_taken_0x1022f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022F8u;
        // 0x1022fc: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022f8) {
            ctx->pc = 0x102314u;
            return;
        }
    }
    ctx->pc = 0x102300u;
    // 0x102300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102304: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x102304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x102308: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x102308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10230c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10230Cu;
    SET_GPR_U32(ctx, 31, 0x102314u);
    ctx->pc = 0x102310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10230Cu;
    // 0x102310: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10230Cu, 0x102314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102314u;
}
