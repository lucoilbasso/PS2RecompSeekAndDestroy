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

// Function: entry_001aa524
// Address: 0x1aa524 - 0x1aa548
void entry_001aa524_0x1aa524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa524_0x1aa524");
#endif

    switch (ctx->pc) {
        case 0x1aa53cu: goto label_1aa53c;
        default: break;
    }

    ctx->pc = 0x1aa524u;

    // 0x1aa524: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x1aa524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1aa528: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA528u;
    {
        const bool branch_taken_0x1aa528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA528u;
        // 0x1aa52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa528) {
            ctx->pc = 0x1AA548u;
            return;
        }
    }
    ctx->pc = 0x1AA530u;
    // 0x1aa530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aa530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa534: 0xc06cbb2  jal         func_1B2EC8
    ctx->pc = 0x1AA534u;
    SET_GPR_U32(ctx, 31, 0x1AA53Cu);
    ctx->pc = 0x1AA538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA534u;
    // 0x1aa538: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2EC8u, 0x1AA534u, 0x1AA53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA53Cu;
label_1aa53c:
    // 0x1aa53c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1aa53cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa540: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AA540u;
    {
        const bool branch_taken_0x1aa540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA540u;
        // 0x1aa544: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa540) {
            ctx->pc = 0x1AA520u;
            return;
        }
    }
    ctx->pc = 0x1AA548u;
}
