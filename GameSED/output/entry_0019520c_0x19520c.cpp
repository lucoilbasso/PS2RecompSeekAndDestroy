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

// Function: entry_0019520c
// Address: 0x19520c - 0x195218
void entry_0019520c_0x19520c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019520c_0x19520c");
#endif

    ctx->pc = 0x19520cu;

    // 0x19520c: 0xc4ac0190  lwc1        $f12, 0x190($a1)
    ctx->pc = 0x19520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x195210: 0xc06546c  jal         func_1951B0
    ctx->pc = 0x195210u;
    SET_GPR_U32(ctx, 31, 0x195218u);
    ctx->pc = 0x195214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195210u;
    // 0x195214: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1951B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1951B0u, 0x195210u, 0x195218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195218u;
}
