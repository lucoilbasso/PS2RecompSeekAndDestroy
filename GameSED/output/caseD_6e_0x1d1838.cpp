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

// Function: caseD_6e
// Address: 0x1d1838 - 0x1d1860
void caseD_6e_0x1d1838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6e_0x1d1838");
#endif

    ctx->pc = 0x1d1838u;

    // 0x1d1838: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x1d1838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x1d183c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D183Cu;
    {
        const bool branch_taken_0x1d183c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D183Cu;
        // 0x1d1840: 0x32e20040  andi        $v0, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d183c) {
            ctx->pc = 0x1D1860u;
            return;
        }
    }
    ctx->pc = 0x1D1844u;
    // 0x1d1844: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x1d1844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1848: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d1848u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d184c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1850: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x1d1850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x1d1854: 0x1000fed0  b           . + 4 + (-0x130 << 2)
    ctx->pc = 0x1D1854u;
    {
        const bool branch_taken_0x1d1854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1854u;
        // 0x1d1858: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1854) {
            ctx->pc = 0x1D1398u;
            return;
        }
    }
    ctx->pc = 0x1D185Cu;
    // 0x1d185c: 0x0  nop
    ctx->pc = 0x1d185cu;
    // NOP
    ctx->pc = 0x1d1860u;
}
