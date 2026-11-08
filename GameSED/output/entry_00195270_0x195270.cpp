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

// Function: entry_00195270
// Address: 0x195270 - 0x195280
void entry_00195270_0x195270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195270_0x195270");
#endif

    ctx->pc = 0x195270u;

    // 0x195270: 0xc48c0190  lwc1        $f12, 0x190($a0)
    ctx->pc = 0x195270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x195274: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x195274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195278: 0xc06546c  jal         func_1951B0
    ctx->pc = 0x195278u;
    SET_GPR_U32(ctx, 31, 0x195280u);
    ctx->pc = 0x19527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195278u;
    // 0x19527c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1951B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1951B0u, 0x195278u, 0x195280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195280u;
}
