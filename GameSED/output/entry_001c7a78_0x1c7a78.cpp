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

// Function: entry_001c7a78
// Address: 0x1c7a78 - 0x1c7ac8
void entry_001c7a78_0x1c7a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7a78_0x1c7a78");
#endif

    switch (ctx->pc) {
        case 0x1c7a8cu: goto label_1c7a8c;
        case 0x1c7aa4u: goto label_1c7aa4;
        case 0x1c7abcu: goto label_1c7abc;
        default: break;
    }

    ctx->pc = 0x1c7a78u;

    // 0x1c7a78: 0xdfa500f0  ld          $a1, 0xF0($sp)
    ctx->pc = 0x1c7a78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7a7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c7a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a84: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7A84u;
    SET_GPR_U32(ctx, 31, 0x1C7A8Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7A84u, 0x1C7A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A8Cu;
label_1c7a8c:
    // 0x1c7a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a90: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x1c7a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c7a94: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1c7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1c7a98: 0xdfa500f8  ld          $a1, 0xF8($sp)
    ctx->pc = 0x1c7a98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1c7a9c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C7AA4u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7A9Cu, 0x1C7AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AA4u;
label_1c7aa4:
    // 0x1c7aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7aa8: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x1c7aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c7aac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c7aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ab0: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x1c7ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x1c7ab4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7AB4u;
    SET_GPR_U32(ctx, 31, 0x1C7ABCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7AB4u, 0x1C7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7ABCu;
label_1c7abc:
    // 0x1c7abc: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x1c7abcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c7ac0: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x1c7ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x1c7ac4: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x1c7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    ctx->pc = 0x1c7ac8u;
}
