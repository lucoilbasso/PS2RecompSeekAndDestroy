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

// Function: entry_001d5c98
// Address: 0x1d5c98 - 0x1d5cd0
void entry_001d5c98_0x1d5c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c98_0x1d5c98");
#endif

    switch (ctx->pc) {
        case 0x1d5ca8u: goto label_1d5ca8;
        case 0x1d5cbcu: goto label_1d5cbc;
        default: break;
    }

    ctx->pc = 0x1d5c98u;

    // 0x1d5c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5c9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5ca0: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D5CA0u;
    SET_GPR_U32(ctx, 31, 0x1D5CA8u);
    ctx->pc = 0x1D5CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA0u;
    // 0x1d5ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D5CA0u, 0x1D5CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CA8u;
label_1d5ca8:
    // 0x1d5ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cac: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5CACu;
    {
        const bool branch_taken_0x1d5cac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CACu;
        // 0x1d5cb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cac) {
            ctx->pc = 0x1D5CD0u;
            return;
        }
    }
    ctx->pc = 0x1D5CB4u;
    // 0x1d5cb4: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5CB4u;
    SET_GPR_U32(ctx, 31, 0x1D5CBCu);
    ctx->pc = 0x1D5CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CB4u;
    // 0x1d5cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5CB4u, 0x1D5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CBCu;
label_1d5cbc:
    // 0x1d5cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5cc0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1d5cc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cc4: 0xad630010  sw          $v1, 0x10($t3)
    ctx->pc = 0x1d5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 3));
    // 0x1d5cc8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1D5CC8u;
    {
        const bool branch_taken_0x1d5cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CC8u;
        // 0x1d5ccc: 0xad600014  sw          $zero, 0x14($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cc8) {
            ctx->pc = 0x1D5DECu;
            return;
        }
    }
    ctx->pc = 0x1D5CD0u;
}
