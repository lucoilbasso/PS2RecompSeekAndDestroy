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

// Function: entry_001d0410
// Address: 0x1d0410 - 0x1d0438
void entry_001d0410_0x1d0410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0410_0x1d0410");
#endif

    ctx->pc = 0x1d0410u;

    // 0x1d0410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0414: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0418: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d0418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d041c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d0420: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0420u;
    {
        const bool branch_taken_0x1d0420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0420u;
        // 0x1d0424: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0420) {
            ctx->pc = 0x1D0438u;
            return;
        }
    }
    ctx->pc = 0x1D0428u;
    // 0x1d0428: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1d0428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d042c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0430: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D0430u;
    {
        const bool branch_taken_0x1d0430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0430u;
        // 0x1d0434: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0430) {
            ctx->pc = 0x1D0468u;
            return;
        }
    }
    ctx->pc = 0x1D0438u;
}
