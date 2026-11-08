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

// Function: entry_001bca84
// Address: 0x1bca84 - 0x1bcab0
void entry_001bca84_0x1bca84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bca84_0x1bca84");
#endif

    switch (ctx->pc) {
        case 0x1bca8cu: goto label_1bca8c;
        case 0x1bcaa4u: goto label_1bcaa4;
        default: break;
    }

    ctx->pc = 0x1bca84u;

    // 0x1bca84: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1BCA84u;
    SET_GPR_U32(ctx, 31, 0x1BCA8Cu);
    ctx->pc = 0x1BCA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA84u;
    // 0x1bca88: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1BCA84u, 0x1BCA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA8Cu;
label_1bca8c:
    // 0x1bca8c: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1bca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1bca90: 0x14430055  bne         $v0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x1BCA90u;
    {
        const bool branch_taken_0x1bca90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BCA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA90u;
        // 0x1bca94: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca90) {
            ctx->pc = 0x1BCBE8u;
            return;
        }
    }
    ctx->pc = 0x1BCA98u;
    // 0x1bca98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bca98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca9c: 0xc06f36e  jal         func_1BCDB8
    ctx->pc = 0x1BCA9Cu;
    SET_GPR_U32(ctx, 31, 0x1BCAA4u);
    ctx->pc = 0x1BCAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA9Cu;
    // 0x1bcaa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCDB8u, 0x1BCA9Cu, 0x1BCAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAA4u;
label_1bcaa4:
    // 0x1bcaa4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1BCAA4u;
    {
        const bool branch_taken_0x1bcaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAA4u;
        // 0x1bcaa8: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcaa4) {
            ctx->pc = 0x1BCBE8u;
            return;
        }
    }
    ctx->pc = 0x1BCAACu;
    // 0x1bcaac: 0x0  nop
    ctx->pc = 0x1bcaacu;
    // NOP
    ctx->pc = 0x1bcab0u;
}
