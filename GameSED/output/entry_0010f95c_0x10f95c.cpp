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

// Function: entry_0010f95c
// Address: 0x10f95c - 0x10f980
void entry_0010f95c_0x10f95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f95c_0x10f95c");
#endif

    ctx->pc = 0x10f95cu;

    // 0x10f95c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x10f95cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f960: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10f960u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10f964: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x10f964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10f968: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F968u;
    {
        const bool branch_taken_0x10f968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F968u;
        // 0x10f96c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f968) {
            ctx->pc = 0x10F980u;
            return;
        }
    }
    ctx->pc = 0x10F970u;
    // 0x10f970: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x10f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10f974: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F974u;
    {
        const bool branch_taken_0x10f974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F974u;
        // 0x10f978: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f974) {
            ctx->pc = 0x10F984u;
            return;
        }
    }
    ctx->pc = 0x10F97Cu;
    // 0x10f97c: 0x0  nop
    ctx->pc = 0x10f97cu;
    // NOP
    ctx->pc = 0x10f980u;
}
