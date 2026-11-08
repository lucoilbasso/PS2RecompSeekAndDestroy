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

// Function: entry_001d3388
// Address: 0x1d3388 - 0x1d33b0
void entry_001d3388_0x1d3388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3388_0x1d3388");
#endif

    ctx->pc = 0x1d3388u;

    // 0x1d3388: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1d3388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d338c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d338cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3390: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1d3390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d3394: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x1d3394u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1d3398: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1d3398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d339c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D339Cu;
    {
        const bool branch_taken_0x1d339c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D339Cu;
        // 0x1d33a0: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d339c) {
            ctx->pc = 0x1D33B0u;
            return;
        }
    }
    ctx->pc = 0x1D33A4u;
    // 0x1d33a4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d33a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d33a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d33a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d33ac: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1d33acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x1d33b0u;
}
