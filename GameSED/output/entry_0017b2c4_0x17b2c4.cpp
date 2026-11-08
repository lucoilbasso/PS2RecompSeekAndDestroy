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

// Function: entry_0017b2c4
// Address: 0x17b2c4 - 0x17b2d0
void entry_0017b2c4_0x17b2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b2c4_0x17b2c4");
#endif

    switch (ctx->pc) {
        case 0x17b2ccu: goto label_17b2cc;
        default: break;
    }

    ctx->pc = 0x17b2c4u;

    // 0x17b2c4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17B2C4u;
    SET_GPR_U32(ctx, 31, 0x17B2CCu);
    ctx->pc = 0x17B2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2C4u;
    // 0x17b2c8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17B2C4u, 0x17B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2CCu;
label_17b2cc:
    // 0x17b2cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17b2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x17b2d0u;
}
