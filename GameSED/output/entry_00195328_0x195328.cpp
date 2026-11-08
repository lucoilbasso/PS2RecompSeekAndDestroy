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

// Function: entry_00195328
// Address: 0x195328 - 0x195350
void entry_00195328_0x195328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195328_0x195328");
#endif

    ctx->pc = 0x195328u;

    // 0x195328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19532c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19532cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195330: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x195330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x195334: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x195338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19533c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19533Cu;
    {
        const bool branch_taken_0x19533c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19533Cu;
        // 0x195340: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19533c) {
            ctx->pc = 0x195364u;
            return;
        }
    }
    ctx->pc = 0x195344u;
    // 0x195344: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x195344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x195348: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x195348u;
    SET_GPR_U32(ctx, 31, 0x195350u);
    ctx->pc = 0x19534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195348u;
    // 0x19534c: 0x2484de38  addiu       $a0, $a0, -0x21C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x195348u, 0x195350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195350u;
}
