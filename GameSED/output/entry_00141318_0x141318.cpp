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

// Function: entry_00141318
// Address: 0x141318 - 0x141334
void entry_00141318_0x141318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141318_0x141318");
#endif

    switch (ctx->pc) {
        case 0x141320u: goto label_141320;
        default: break;
    }

    ctx->pc = 0x141318u;

    // 0x141318: 0xc061422  jal         func_185088
    ctx->pc = 0x141318u;
    SET_GPR_U32(ctx, 31, 0x141320u);
    ctx->pc = 0x14131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141318u;
    // 0x14131c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x141318u, 0x141320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141320u;
label_141320:
    // 0x141320: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x141320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x141324: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x141324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141328: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x141328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14132c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14132cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x141330: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x141330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x141334u;
}
