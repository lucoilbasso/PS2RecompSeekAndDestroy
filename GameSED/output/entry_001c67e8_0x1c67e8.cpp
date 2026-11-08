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

// Function: entry_001c67e8
// Address: 0x1c67e8 - 0x1c6810
void entry_001c67e8_0x1c67e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c67e8_0x1c67e8");
#endif

    switch (ctx->pc) {
        case 0x1c6804u: goto label_1c6804;
        default: break;
    }

    ctx->pc = 0x1c67e8u;

    // 0x1c67e8: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c67e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c67ec: 0xdc25b9f0  ld          $a1, -0x4610($at)
    ctx->pc = 0x1c67ecu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25B9F0u));
    // 0x1c67f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c67f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67f4: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c67f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c67f8: 0xdc30b9f8  ld          $s0, -0x4608($at)
    ctx->pc = 0x1c67f8u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x25B9F8u));
    // 0x1c67fc: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C67FCu;
    SET_GPR_U32(ctx, 31, 0x1C6804u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C67FCu, 0x1C6804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6804u;
label_1c6804:
    // 0x1c6804: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c680c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c680cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c6810u;
}
