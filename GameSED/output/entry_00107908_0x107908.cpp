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

// Function: entry_00107908
// Address: 0x107908 - 0x107930
void entry_00107908_0x107908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107908_0x107908");
#endif

    ctx->pc = 0x107908u;

label_107908:
    // 0x107908: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x107908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_10790c:
    // 0x10790c: 0x5040008a  beql        $v0, $zero, . + 4 + (0x8A << 2)
label_107910:
    if (ctx->pc == 0x107910u) {
        ctx->pc = 0x107910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10790Cu;
        // 0x107910: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107914u;
        goto label_107914;
    }
    ctx->pc = 0x10790Cu;
    {
        const bool branch_taken_0x10790c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10790c) {
            ctx->pc = 0x107910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10790Cu;
            // 0x107910: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            return;
        }
    }
    ctx->pc = 0x107914u;
label_107914:
    // 0x107914: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x107914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_107918:
    // 0x107918: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x107918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_10791c:
    // 0x10791c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_107920:
    // 0x107920: 0x8c633b00  lw          $v1, 0x3B00($v1)
    ctx->pc = 0x107920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15104)));
label_107924:
    // 0x107924: 0x600008  jr          $v1
label_107928:
    if (ctx->pc == 0x107928u) {
        ctx->pc = 0x10792Cu;
        goto label_10792c;
    }
    ctx->pc = 0x107924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107924u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10792Cu;
label_10792c:
    // 0x10792c: 0x0  nop
    ctx->pc = 0x10792cu;
    // NOP
    ctx->pc = 0x107930u;
}
