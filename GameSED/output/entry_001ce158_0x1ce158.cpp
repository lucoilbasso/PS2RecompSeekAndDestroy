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

// Function: entry_001ce158
// Address: 0x1ce158 - 0x1ce17c
void entry_001ce158_0x1ce158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce158_0x1ce158");
#endif

    switch (ctx->pc) {
        case 0x1ce178u: goto label_1ce178;
        default: break;
    }

    ctx->pc = 0x1ce158u;

    // 0x1ce158: 0x52240009  beql        $s1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE158u;
    {
        const bool branch_taken_0x1ce158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ce158) {
            ctx->pc = 0x1CE15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE158u;
            // 0x1ce15c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE180u;
            return;
        }
    }
    ctx->pc = 0x1CE160u;
    // 0x1ce160: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ce160u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce164: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE164u;
    {
        const bool branch_taken_0x1ce164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE164u;
        // 0x1ce168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce164) {
            ctx->pc = 0x1CE17Cu;
            return;
        }
    }
    ctx->pc = 0x1CE16Cu;
    // 0x1ce16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce170: 0xc073754  jal         func_1CDD50
    ctx->pc = 0x1CE170u;
    SET_GPR_U32(ctx, 31, 0x1CE178u);
    ctx->pc = 0x1CE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE170u;
    // 0x1ce174: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD50u, 0x1CE170u, 0x1CE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE178u;
label_1ce178:
    // 0x1ce178: 0x966403fa  lhu         $a0, 0x3FA($s3)
    ctx->pc = 0x1ce178u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
    ctx->pc = 0x1ce17cu;
}
