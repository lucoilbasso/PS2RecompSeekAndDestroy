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

// Function: entry_0016c120
// Address: 0x16c120 - 0x16c148
void entry_0016c120_0x16c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c120_0x16c120");
#endif

    ctx->pc = 0x16c120u;

label_16c120:
    // 0x16c120: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x16c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_16c124:
    // 0x16c124: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16c128:
    // 0x16c128: 0x106000d7  beqz        $v1, . + 4 + (0xD7 << 2)
label_16c12c:
    if (ctx->pc == 0x16C12Cu) {
        ctx->pc = 0x16C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C128u;
        // 0x16c12c: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C130u;
        goto label_16c130;
    }
    ctx->pc = 0x16C128u;
    {
        const bool branch_taken_0x16c128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C128u;
        // 0x16c12c: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c128) {
            ctx->pc = 0x16C488u;
            return;
        }
    }
    ctx->pc = 0x16C130u;
label_16c130:
    // 0x16c130: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16c130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_16c134:
    // 0x16c134: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16c134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16c138:
    // 0x16c138: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16c13c:
    // 0x16c13c: 0x8c637410  lw          $v1, 0x7410($v1)
    ctx->pc = 0x16c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29712)));
label_16c140:
    // 0x16c140: 0x600008  jr          $v1
label_16c144:
    if (ctx->pc == 0x16C144u) {
        ctx->pc = 0x16C148u;
        goto label_fallthrough_0x16c140;
    }
    ctx->pc = 0x16C140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C140u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x16c140:
    ctx->pc = 0x16C148u;
}
