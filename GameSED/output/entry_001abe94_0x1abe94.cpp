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

// Function: entry_001abe94
// Address: 0x1abe94 - 0x1abeb8
void entry_001abe94_0x1abe94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abe94_0x1abe94");
#endif

    switch (ctx->pc) {
        case 0x1abea4u: goto label_1abea4;
        default: break;
    }

    ctx->pc = 0x1abe94u;

    // 0x1abe94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1abe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1abe98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe9c: 0xc06af46  jal         func_1ABD18
    ctx->pc = 0x1ABE9Cu;
    SET_GPR_U32(ctx, 31, 0x1ABEA4u);
    ctx->pc = 0x1ABEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE9Cu;
    // 0x1abea0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD18u, 0x1ABE9Cu, 0x1ABEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABEA4u;
label_1abea4:
    // 0x1abea4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1abea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1abea8: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x1abea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x1abeac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1abeacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1abeb0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1abeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1abeb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1abeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x1abeb8u;
}
