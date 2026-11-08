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

// Function: entry_001bec60
// Address: 0x1bec60 - 0x1bec94
void entry_001bec60_0x1bec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bec60_0x1bec60");
#endif

    switch (ctx->pc) {
        case 0x1bec84u: goto label_1bec84;
        default: break;
    }

    ctx->pc = 0x1bec60u;

    // 0x1bec60: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x1bec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1bec64: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1bec64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bec68: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BEC68u;
    {
        const bool branch_taken_0x1bec68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC68u;
        // 0x1bec6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec68) {
            ctx->pc = 0x1BEC94u;
            return;
        }
    }
    ctx->pc = 0x1BEC70u;
    // 0x1bec70: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1bec70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1bec74: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1bec74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec78: 0x24a5b450  addiu       $a1, $a1, -0x4BB0
    ctx->pc = 0x1bec78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947920));
    // 0x1bec7c: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1BEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1BEC84u);
    ctx->pc = 0x1BEC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC7Cu;
    // 0x1bec80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1BEC7Cu, 0x1BEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC84u;
label_1bec84:
    // 0x1bec84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bec88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bec88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec8c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1BEC8Cu;
    {
        const bool branch_taken_0x1bec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC8Cu;
        // 0x1bec90: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec8c) {
            ctx->pc = 0x1BEDD0u;
            return;
        }
    }
    ctx->pc = 0x1BEC94u;
}
