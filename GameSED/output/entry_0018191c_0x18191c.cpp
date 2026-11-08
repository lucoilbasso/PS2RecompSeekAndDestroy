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

// Function: entry_0018191c
// Address: 0x18191c - 0x181928
void entry_0018191c_0x18191c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018191c_0x18191c");
#endif

    switch (ctx->pc) {
        case 0x181924u: goto label_181924;
        default: break;
    }

    ctx->pc = 0x18191cu;

    // 0x18191c: 0xc060550  jal         func_181540
    ctx->pc = 0x18191Cu;
    SET_GPR_U32(ctx, 31, 0x181924u);
    ctx->pc = 0x181920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18191Cu;
    // 0x181920: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181540u, 0x18191Cu, 0x181924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181924u;
label_181924:
    // 0x181924: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x181924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181928u;
}
