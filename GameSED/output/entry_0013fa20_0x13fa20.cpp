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

// Function: entry_0013fa20
// Address: 0x13fa20 - 0x13fa40
void entry_0013fa20_0x13fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fa20_0x13fa20");
#endif

    ctx->pc = 0x13fa20u;

    // 0x13fa20: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x13fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x13fa24: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13FA24u;
    {
        const bool branch_taken_0x13fa24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA24u;
        // 0x13fa28: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa24) {
            ctx->pc = 0x13FA68u;
            return;
        }
    }
    ctx->pc = 0x13FA2Cu;
    // 0x13fa2c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FA2Cu;
    {
        const bool branch_taken_0x13fa2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA2Cu;
        // 0x13fa30: 0x26510040  addiu       $s1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa2c) {
            ctx->pc = 0x13FA40u;
            return;
        }
    }
    ctx->pc = 0x13FA34u;
    // 0x13fa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa38: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13FA38u;
    SET_GPR_U32(ctx, 31, 0x13FA40u);
    ctx->pc = 0x13FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA38u;
    // 0x13fa3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13FA38u, 0x13FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA40u;
}
