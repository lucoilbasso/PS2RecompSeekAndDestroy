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

// Function: entry_001a28d0
// Address: 0x1a28d0 - 0x1a28dc
void entry_001a28d0_0x1a28d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a28d0_0x1a28d0");
#endif

    switch (ctx->pc) {
        case 0x1a28d8u: goto label_1a28d8;
        default: break;
    }

    ctx->pc = 0x1a28d0u;

    // 0x1a28d0: 0xc067b78  jal         func_19EDE0
    ctx->pc = 0x1A28D0u;
    SET_GPR_U32(ctx, 31, 0x1A28D8u);
    ctx->pc = 0x1A28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28D0u;
    // 0x1a28d4: 0xc60d0008  lwc1        $f13, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDE0u, 0x1A28D0u, 0x1A28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28D8u;
label_1a28d8:
    // 0x1a28d8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a28d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x1a28dcu;
}
