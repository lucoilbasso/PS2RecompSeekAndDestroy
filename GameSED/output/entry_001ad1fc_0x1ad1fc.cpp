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

// Function: entry_001ad1fc
// Address: 0x1ad1fc - 0x1ad218
void entry_001ad1fc_0x1ad1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad1fc_0x1ad1fc");
#endif

    switch (ctx->pc) {
        case 0x1ad210u: goto label_1ad210;
        default: break;
    }

    ctx->pc = 0x1ad1fcu;

    // 0x1ad1fc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AD1FCu;
    {
        const bool branch_taken_0x1ad1fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1FCu;
        // 0x1ad200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1fc) {
            ctx->pc = 0x1AD24Cu;
            return;
        }
    }
    ctx->pc = 0x1AD204u;
    // 0x1ad204: 0x2512018  mult        $a0, $s2, $s1
    ctx->pc = 0x1ad204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ad208: 0xc06b94e  jal         func_1AE538
    ctx->pc = 0x1AD208u;
    SET_GPR_U32(ctx, 31, 0x1AD210u);
    ctx->pc = 0x1AD20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD208u;
    // 0x1ad20c: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE538u, 0x1AD208u, 0x1AD210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD210u;
label_1ad210:
    // 0x1ad210: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD210u;
    {
        const bool branch_taken_0x1ad210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD210u;
        // 0x1ad214: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad210) {
            ctx->pc = 0x1AD220u;
            return;
        }
    }
    ctx->pc = 0x1AD218u;
}
