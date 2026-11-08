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

// Function: entry_00113ce8
// Address: 0x113ce8 - 0x113d20
void entry_00113ce8_0x113ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113ce8_0x113ce8");
#endif

    switch (ctx->pc) {
        case 0x113cf8u: goto label_113cf8;
        default: break;
    }

    ctx->pc = 0x113ce8u;

label_113ce8:
    // 0x113ce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_113cec:
    // 0x113cec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x113cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_113cf0:
    // 0x113cf0: 0xc06a26e  jal         func_1A89B8
label_113cf4:
    if (ctx->pc == 0x113CF4u) {
        ctx->pc = 0x113CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CF0u;
        // 0x113cf4: 0x8c500020  lw          $s0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113CF8u;
        goto label_113cf8;
    }
    ctx->pc = 0x113CF0u;
    SET_GPR_U32(ctx, 31, 0x113CF8u);
    ctx->pc = 0x113CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113CF0u;
    // 0x113cf4: 0x8c500020  lw          $s0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113CF0u, 0x113CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CF8u;
label_113cf8:
    // 0x113cf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113cf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113cfc:
    // 0x113cfc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x113cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_113d00:
    // 0x113d00: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_113d04:
    if (ctx->pc == 0x113D04u) {
        ctx->pc = 0x113D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D00u;
        // 0x113d04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113D08u;
        goto label_113d08;
    }
    ctx->pc = 0x113D00u;
    {
        const bool branch_taken_0x113d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113d00) {
            ctx->pc = 0x113D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113D00u;
            // 0x113d04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113DBCu;
            return;
        }
    }
    ctx->pc = 0x113D08u;
label_113d08:
    // 0x113d08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x113d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_113d0c:
    // 0x113d0c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x113d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_113d10:
    // 0x113d10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_113d14:
    // 0x113d14: 0x8c634290  lw          $v1, 0x4290($v1)
    ctx->pc = 0x113d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17040)));
label_113d18:
    // 0x113d18: 0x600008  jr          $v1
label_113d1c:
    if (ctx->pc == 0x113D1Cu) {
        ctx->pc = 0x113D20u;
        goto label_fallthrough_0x113d18;
    }
    ctx->pc = 0x113D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113D18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x113d18:
    ctx->pc = 0x113D20u;
}
