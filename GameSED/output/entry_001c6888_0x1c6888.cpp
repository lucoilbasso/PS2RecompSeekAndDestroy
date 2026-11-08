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

// Function: entry_001c6888
// Address: 0x1c6888 - 0x1c68b0
void entry_001c6888_0x1c6888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6888_0x1c6888");
#endif

    switch (ctx->pc) {
        case 0x1c68a4u: goto label_1c68a4;
        default: break;
    }

    ctx->pc = 0x1c6888u;

    // 0x1c6888: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c688c: 0xdc25ba10  ld          $a1, -0x45F0($at)
    ctx->pc = 0x1c688cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA10u));
    // 0x1c6890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6894: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6898: 0xdc30ba18  ld          $s0, -0x45E8($at)
    ctx->pc = 0x1c6898u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x25BA18u));
    // 0x1c689c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C689Cu;
    SET_GPR_U32(ctx, 31, 0x1C68A4u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C689Cu, 0x1C68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68A4u;
label_1c68a4:
    // 0x1c68a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c68a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c68a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c68acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c68b0u;
}
