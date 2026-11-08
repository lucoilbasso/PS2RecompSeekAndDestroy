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

// Function: entry_001cbf18
// Address: 0x1cbf18 - 0x1cbf44
void entry_001cbf18_0x1cbf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbf18_0x1cbf18");
#endif

    switch (ctx->pc) {
        case 0x1cbf30u: goto label_1cbf30;
        default: break;
    }

    ctx->pc = 0x1cbf18u;

    // 0x1cbf18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cbf1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cbf20: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cbf20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cbf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cbf28: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CBF28u;
    SET_GPR_U32(ctx, 31, 0x1CBF30u);
    ctx->pc = 0x1CBF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF28u;
    // 0x1cbf2c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CBF28u, 0x1CBF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF30u;
label_1cbf30:
    // 0x1cbf30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBF30u;
    {
        const bool branch_taken_0x1cbf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF30u;
        // 0x1cbf34: 0x32430006  andi        $v1, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf30) {
            ctx->pc = 0x1CBF50u;
            return;
        }
    }
    ctx->pc = 0x1CBF38u;
    // 0x1cbf38: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1cbf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1cbf3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cbf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cbf40: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1cbf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x1cbf44u;
}
