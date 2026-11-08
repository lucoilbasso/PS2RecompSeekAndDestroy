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

// Function: entry_001a37a8
// Address: 0x1a37a8 - 0x1a37bc
void entry_001a37a8_0x1a37a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a37a8_0x1a37a8");
#endif

    switch (ctx->pc) {
        case 0x1a37b8u: goto label_1a37b8;
        default: break;
    }

    ctx->pc = 0x1a37a8u;

    // 0x1a37a8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a37a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a37ac: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a37acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a37b0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A37B0u;
    SET_GPR_U32(ctx, 31, 0x1A37B8u);
    ctx->pc = 0x1A37B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A37B0u;
    // 0x1a37b4: 0x24a59220  addiu       $a1, $a1, -0x6DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A37B0u, 0x1A37B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A37B8u;
label_1a37b8:
    // 0x1a37b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a37b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x1a37bcu;
}
