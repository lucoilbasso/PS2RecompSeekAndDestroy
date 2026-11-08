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

// Function: entry_001b20a8
// Address: 0x1b20a8 - 0x1b20c0
void entry_001b20a8_0x1b20a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b20a8_0x1b20a8");
#endif

    switch (ctx->pc) {
        case 0x1b20bcu: goto label_1b20bc;
        default: break;
    }

    ctx->pc = 0x1b20a8u;

    // 0x1b20a8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b20ac: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x1b20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x1b20b0: 0x8e24aa10  lw          $a0, -0x55F0($s1)
    ctx->pc = 0x1b20b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945296)));
    // 0x1b20b4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B20B4u;
    SET_GPR_U32(ctx, 31, 0x1B20BCu);
    ctx->pc = 0x1B20B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20B4u;
    // 0x1b20b8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B20B4u, 0x1B20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20BCu;
label_1b20bc:
    // 0x1b20bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b20bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b20c0u;
}
