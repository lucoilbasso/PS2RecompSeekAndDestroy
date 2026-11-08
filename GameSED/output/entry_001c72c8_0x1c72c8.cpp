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

// Function: entry_001c72c8
// Address: 0x1c72c8 - 0x1c72e4
void entry_001c72c8_0x1c72c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c72c8_0x1c72c8");
#endif

    switch (ctx->pc) {
        case 0x1c72dcu: goto label_1c72dc;
        default: break;
    }

    ctx->pc = 0x1c72c8u;

    // 0x1c72c8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1c72c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1c72cc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c72ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c72d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c72d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72d4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C72D4u;
    SET_GPR_U32(ctx, 31, 0x1C72DCu);
    ctx->pc = 0x1C72D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72D4u;
    // 0x1c72d8: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C72D4u, 0x1C72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72DCu;
label_1c72dc:
    // 0x1c72dc: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1c72dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c72e0: 0x2f00b  movn        $fp, $zero, $v0
    ctx->pc = 0x1c72e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
    ctx->pc = 0x1c72e4u;
}
