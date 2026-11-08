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

// Function: entry_00136728
// Address: 0x136728 - 0x136734
void entry_00136728_0x136728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136728_0x136728");
#endif

    switch (ctx->pc) {
        case 0x136730u: goto label_136730;
        default: break;
    }

    ctx->pc = 0x136728u;

    // 0x136728: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x136728u;
    SET_GPR_U32(ctx, 31, 0x136730u);
    ctx->pc = 0x13672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136728u;
    // 0x13672c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x136728u, 0x136730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136730u;
label_136730:
    // 0x136730: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x136730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    ctx->pc = 0x136734u;
}
