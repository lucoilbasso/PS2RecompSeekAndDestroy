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

// Function: entry_001827d4
// Address: 0x1827d4 - 0x1827e0
void entry_001827d4_0x1827d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001827d4_0x1827d4");
#endif

    switch (ctx->pc) {
        case 0x1827dcu: goto label_1827dc;
        default: break;
    }

    ctx->pc = 0x1827d4u;

    // 0x1827d4: 0xc06084e  jal         func_182138
    ctx->pc = 0x1827D4u;
    SET_GPR_U32(ctx, 31, 0x1827DCu);
    ctx->pc = 0x1827D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1827D4u;
    // 0x1827d8: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182138u, 0x1827D4u, 0x1827DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1827DCu;
label_1827dc:
    // 0x1827dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1827dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1827e0u;
}
