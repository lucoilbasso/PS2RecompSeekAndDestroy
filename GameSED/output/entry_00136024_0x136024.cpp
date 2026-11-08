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

// Function: entry_00136024
// Address: 0x136024 - 0x136048
void entry_00136024_0x136024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136024_0x136024");
#endif

    ctx->pc = 0x136024u;

label_136024:
    // 0x136024: 0x2c620018  sltiu       $v0, $v1, 0x18
    ctx->pc = 0x136024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
label_136028:
    // 0x136028: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_13602c:
    if (ctx->pc == 0x13602Cu) {
        ctx->pc = 0x13602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136028u;
        // 0x13602c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136030u;
        goto label_136030;
    }
    ctx->pc = 0x136028u;
    {
        const bool branch_taken_0x136028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136028u;
        // 0x13602c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136028) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136030u;
label_136030:
    // 0x136030: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x136030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_136034:
    // 0x136034: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x136034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_136038:
    // 0x136038: 0x8c6366b0  lw          $v1, 0x66B0($v1)
    ctx->pc = 0x136038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26288)));
label_13603c:
    // 0x13603c: 0x600008  jr          $v1
label_136040:
    if (ctx->pc == 0x136040u) {
        ctx->pc = 0x136044u;
        goto label_136044;
    }
    ctx->pc = 0x13603Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13603Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x136044u;
label_136044:
    // 0x136044: 0x0  nop
    ctx->pc = 0x136044u;
    // NOP
    ctx->pc = 0x136048u;
}
