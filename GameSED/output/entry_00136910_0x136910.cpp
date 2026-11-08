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

// Function: entry_00136910
// Address: 0x136910 - 0x136928
void entry_00136910_0x136910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136910_0x136910");
#endif

    ctx->pc = 0x136910u;

    // 0x136910: 0xc68c00e0  lwc1        $f12, 0xE0($s4)
    ctx->pc = 0x136910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x136914: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x136914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136918: 0x268500a0  addiu       $a1, $s4, 0xA0
    ctx->pc = 0x136918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x13691c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13691cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136920: 0xc051588  jal         func_145620
    ctx->pc = 0x136920u;
    SET_GPR_U32(ctx, 31, 0x136928u);
    ctx->pc = 0x136924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136920u;
    // 0x136924: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x145620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145620u, 0x136920u, 0x136928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136928u;
}
