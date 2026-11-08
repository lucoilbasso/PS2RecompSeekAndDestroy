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

// Function: entry_0019cb8c
// Address: 0x19cb8c - 0x19cba4
void entry_0019cb8c_0x19cb8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb8c_0x19cb8c");
#endif

    switch (ctx->pc) {
        case 0x19cb98u: goto label_19cb98;
        default: break;
    }

    ctx->pc = 0x19cb8cu;

    // 0x19cb8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19cb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19cb90: 0xc0672f2  jal         func_19CBC8
    ctx->pc = 0x19CB90u;
    SET_GPR_U32(ctx, 31, 0x19CB98u);
    ctx->pc = 0x19CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB90u;
    // 0x19cb94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CBC8u, 0x19CB90u, 0x19CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB98u;
label_19cb98:
    // 0x19cb98: 0x92040018  lbu         $a0, 0x18($s0)
    ctx->pc = 0x19cb98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19cb9c: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x19cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19cba0: 0x92030017  lbu         $v1, 0x17($s0)
    ctx->pc = 0x19cba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    ctx->pc = 0x19cba4u;
}
