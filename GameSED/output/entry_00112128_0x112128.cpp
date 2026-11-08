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

// Function: entry_00112128
// Address: 0x112128 - 0x112148
void entry_00112128_0x112128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112128_0x112128");
#endif

    ctx->pc = 0x112128u;

label_112128:
    // 0x112128: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x112128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_11212c:
    // 0x11212c: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
label_112130:
    if (ctx->pc == 0x112130u) {
        ctx->pc = 0x112130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11212Cu;
        // 0x112130: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112134u;
        goto label_112134;
    }
    ctx->pc = 0x11212Cu;
    {
        const bool branch_taken_0x11212c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11212Cu;
        // 0x112130: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11212c) {
            ctx->pc = 0x1123F8u;
            return;
        }
    }
    ctx->pc = 0x112134u;
label_112134:
    // 0x112134: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x112134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_112138:
    // 0x112138: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x112138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11213c:
    // 0x11213c: 0x8c634100  lw          $v1, 0x4100($v1)
    ctx->pc = 0x11213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16640)));
label_112140:
    // 0x112140: 0x600008  jr          $v1
label_112144:
    if (ctx->pc == 0x112144u) {
        ctx->pc = 0x112148u;
        goto label_fallthrough_0x112140;
    }
    ctx->pc = 0x112140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112140u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x112140:
    ctx->pc = 0x112148u;
}
