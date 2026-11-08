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

// Function: caseD_64
// Address: 0x1d1604 - 0x1d1620
void caseD_64_0x1d1604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_64_0x1d1604");
#endif

    ctx->pc = 0x1d1604u;

    // 0x1d1604: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x1d1604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x1d1608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1608u;
    {
        const bool branch_taken_0x1d1608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1608u;
        // 0x1d160c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1608) {
            ctx->pc = 0x1D1620u;
            return;
        }
    }
    ctx->pc = 0x1D1610u;
    // 0x1d1610: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1610u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d1614: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D1614u;
    {
        const bool branch_taken_0x1d1614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1614u;
        // 0x1d1618: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1614) {
            ctx->pc = 0x1D1640u;
            return;
        }
    }
    ctx->pc = 0x1D161Cu;
    // 0x1d161c: 0x0  nop
    ctx->pc = 0x1d161cu;
    // NOP
    ctx->pc = 0x1d1620u;
}
