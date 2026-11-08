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

// Function: entry_001c676c
// Address: 0x1c676c - 0x1c6790
void entry_001c676c_0x1c676c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c676c_0x1c676c");
#endif

    ctx->pc = 0x1c676cu;

    // 0x1c676c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1c676cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c6770: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6770u;
    {
        const bool branch_taken_0x1c6770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6770u;
        // 0x1c6774: 0xffbf0068  sd          $ra, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6770) {
            ctx->pc = 0x1C6790u;
            return;
        }
    }
    ctx->pc = 0x1C6778u;
    // 0x1c6778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c677c: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x1c677cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x1c6780: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1c6780u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x1c6784: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x1C6784u;
    {
        const bool branch_taken_0x1c6784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6784u;
        // 0x1c6788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6784) {
            ctx->pc = 0x1C6CA8u;
            return;
        }
    }
    ctx->pc = 0x1C678Cu;
    // 0x1c678c: 0x0  nop
    ctx->pc = 0x1c678cu;
    // NOP
    ctx->pc = 0x1c6790u;
}
