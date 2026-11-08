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

// Function: entry_001cd60c
// Address: 0x1cd60c - 0x1cd624
void entry_001cd60c_0x1cd60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd60c_0x1cd60c");
#endif

    switch (ctx->pc) {
        case 0x1cd614u: goto label_1cd614;
        default: break;
    }

    ctx->pc = 0x1cd60cu;

    // 0x1cd60c: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x1CD60Cu;
    SET_GPR_U32(ctx, 31, 0x1CD614u);
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x1CD60Cu, 0x1CD614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD614u;
label_1cd614:
    // 0x1cd614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd618: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cd618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cd61c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1cd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1cd620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cd620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd624u;
}
