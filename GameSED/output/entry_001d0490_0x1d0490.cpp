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

// Function: entry_001d0490
// Address: 0x1d0490 - 0x1d04b0
void entry_001d0490_0x1d0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0490_0x1d0490");
#endif

    ctx->pc = 0x1d0490u;

    // 0x1d0490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0498: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0498u;
    {
        const bool branch_taken_0x1d0498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0498u;
        // 0x1d049c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0498) {
            ctx->pc = 0x1D04B0u;
            return;
        }
    }
    ctx->pc = 0x1D04A0u;
    // 0x1d04a0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1d04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d04a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d04a8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1D04A8u;
    {
        const bool branch_taken_0x1d04a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04A8u;
        // 0x1d04ac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04a8) {
            ctx->pc = 0x1D0544u;
            return;
        }
    }
    ctx->pc = 0x1D04B0u;
}
