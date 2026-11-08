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

// Function: entry_00141e98
// Address: 0x141e98 - 0x141ea8
void entry_00141e98_0x141e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e98_0x141e98");
#endif

    switch (ctx->pc) {
        case 0x141ea4u: goto label_141ea4;
        default: break;
    }

    ctx->pc = 0x141e98u;

    // 0x141e98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x141e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e9c: 0xc05060a  jal         func_141828
    ctx->pc = 0x141E9Cu;
    SET_GPR_U32(ctx, 31, 0x141EA4u);
    ctx->pc = 0x141EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E9Cu;
    // 0x141ea0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141828u, 0x141E9Cu, 0x141EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EA4u;
label_141ea4:
    // 0x141ea4: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x141ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    ctx->pc = 0x141ea8u;
}
