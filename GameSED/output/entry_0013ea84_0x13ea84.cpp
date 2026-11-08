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

// Function: entry_0013ea84
// Address: 0x13ea84 - 0x13ea94
void entry_0013ea84_0x13ea84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ea84_0x13ea84");
#endif

    switch (ctx->pc) {
        case 0x13ea8cu: goto label_13ea8c;
        default: break;
    }

    ctx->pc = 0x13ea84u;

    // 0x13ea84: 0xc04eff4  jal         func_13BFD0
    ctx->pc = 0x13EA84u;
    SET_GPR_U32(ctx, 31, 0x13EA8Cu);
    ctx->pc = 0x13EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA84u;
    // 0x13ea88: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BFD0u, 0x13EA84u, 0x13EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA8Cu;
label_13ea8c:
    // 0x13ea8c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x13ea8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x13ea90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13ea90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13ea94u;
}
