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

// Function: entry_0017b560
// Address: 0x17b560 - 0x17b584
void entry_0017b560_0x17b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b560_0x17b560");
#endif

    switch (ctx->pc) {
        case 0x17b580u: goto label_17b580;
        default: break;
    }

    ctx->pc = 0x17b560u;

    // 0x17b560: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b564: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17B564u;
    {
        const bool branch_taken_0x17b564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B564u;
        // 0x17b568: 0x30430002  andi        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b564) {
            ctx->pc = 0x17B5C0u;
            return;
        }
    }
    ctx->pc = 0x17B56Cu;
    // 0x17b56c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B56Cu;
    {
        const bool branch_taken_0x17b56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B56Cu;
        // 0x17b570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b56c) {
            ctx->pc = 0x17B584u;
            return;
        }
    }
    ctx->pc = 0x17B574u;
    // 0x17b574: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17b574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b578: 0xc05eed4  jal         func_17BB50
    ctx->pc = 0x17B578u;
    SET_GPR_U32(ctx, 31, 0x17B580u);
    ctx->pc = 0x17B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B578u;
    // 0x17b57c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB50u, 0x17B578u, 0x17B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B580u;
label_17b580:
    // 0x17b580: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17b584u;
}
