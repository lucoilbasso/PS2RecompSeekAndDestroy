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

// Function: entry_00197c08
// Address: 0x197c08 - 0x197c34
void entry_00197c08_0x197c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197c08_0x197c08");
#endif

    switch (ctx->pc) {
        case 0x197c20u: goto label_197c20;
        default: break;
    }

    ctx->pc = 0x197c08u;

label_197c08:
    // 0x197c08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x197c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x197c0c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x197c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x197c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x197c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197c18: 0xc05f874  jal         func_17E1D0
    ctx->pc = 0x197C18u;
    SET_GPR_U32(ctx, 31, 0x197C20u);
    ctx->pc = 0x197C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C18u;
    // 0x197c1c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1D0u, 0x197C18u, 0x197C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C20u;
label_197c20:
    // 0x197c20: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x197c20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c24: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x197c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x197c28: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x197c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x197c2c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x197C2Cu;
    {
        const bool branch_taken_0x197c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197c2c) {
            ctx->pc = 0x197C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197C2Cu;
            // 0x197c30: 0x8e23003c  lw          $v1, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197c08;
        }
    }
    ctx->pc = 0x197C34u;
}
