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

// Function: entry_0019ff10
// Address: 0x19ff10 - 0x19ff30
void entry_0019ff10_0x19ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ff10_0x19ff10");
#endif

    switch (ctx->pc) {
        case 0x19ff28u: goto label_19ff28;
        default: break;
    }

    ctx->pc = 0x19ff10u;

    // 0x19ff10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ff10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19ff14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ff18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19ff18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff1c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x19ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x19ff20: 0xc067ff4  jal         func_19FFD0
    ctx->pc = 0x19FF20u;
    SET_GPR_U32(ctx, 31, 0x19FF28u);
    ctx->pc = 0x19FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF20u;
    // 0x19ff24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FFD0u, 0x19FF20u, 0x19FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF28u;
label_19ff28:
    // 0x19ff28: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x19ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x19ff2c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x19ff2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x19ff30u;
}
