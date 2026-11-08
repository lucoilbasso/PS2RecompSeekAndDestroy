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

// Function: entry_00104bd8
// Address: 0x104bd8 - 0x104be4
void entry_00104bd8_0x104bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104bd8_0x104bd8");
#endif

    ctx->pc = 0x104bd8u;

    // 0x104bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x104bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104bdc: 0xc060e56  jal         func_183958
    ctx->pc = 0x104BDCu;
    SET_GPR_U32(ctx, 31, 0x104BE4u);
    ctx->pc = 0x104BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BDCu;
    // 0x104be0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x104BDCu, 0x104BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BE4u;
}
