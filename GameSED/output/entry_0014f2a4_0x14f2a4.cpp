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

// Function: entry_0014f2a4
// Address: 0x14f2a4 - 0x14f2b4
void entry_0014f2a4_0x14f2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f2a4_0x14f2a4");
#endif

    ctx->pc = 0x14f2a4u;

    // 0x14f2a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2a8: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f2ac: 0xc0585d0  jal         func_161740
    ctx->pc = 0x14F2ACu;
    SET_GPR_U32(ctx, 31, 0x14F2B4u);
    ctx->pc = 0x14F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2ACu;
    // 0x14f2b0: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161740u, 0x14F2ACu, 0x14F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2B4u;
}
