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

// Function: entry_001b58f4
// Address: 0x1b58f4 - 0x1b5930
void entry_001b58f4_0x1b58f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b58f4_0x1b58f4");
#endif

    switch (ctx->pc) {
        case 0x1b5924u: goto label_1b5924;
        default: break;
    }

    ctx->pc = 0x1b58f4u;

    // 0x1b58f4: 0x24e2b300  addiu       $v0, $a3, -0x4D00
    ctx->pc = 0x1b58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947584));
    // 0x1b58f8: 0x2524b240  addiu       $a0, $t1, -0x4DC0
    ctx->pc = 0x1b58f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947392));
    // 0x1b58fc: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1b58fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b5900: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b5900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5904: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x1b5904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1b5908: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b5908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b590c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5914: 0x2609b280  addiu       $t1, $s0, -0x4D80
    ctx->pc = 0x1b5914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947456));
    // 0x1b5918: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b5918u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b591c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B591Cu;
    SET_GPR_U32(ctx, 31, 0x1B5924u);
    ctx->pc = 0x1B5920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B591Cu;
    // 0x1b5920: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B591Cu, 0x1B5924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5924u;
label_1b5924:
    // 0x1b5924: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5924u;
    {
        const bool branch_taken_0x1b5924 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5924u;
        // 0x1b5928: 0x8e02b280  lw          $v0, -0x4D80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5924) {
            ctx->pc = 0x1B5930u;
            return;
        }
    }
    ctx->pc = 0x1B592Cu;
    // 0x1b592c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1b5930u;
}
