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

// Function: caseD_63
// Address: 0x1d15e0 - 0x1d1600
void caseD_63_0x1d15e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_63_0x1d15e0");
#endif

    ctx->pc = 0x1d15e0u;

    // 0x1d15e0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d15e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d15e4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d15e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d15e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d15e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d15ec: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d15f0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d15f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d15f4: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x1D15F4u;
    {
        const bool branch_taken_0x1d15f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15F4u;
        // 0x1d15f8: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15f4) {
            ctx->pc = 0x1D1B50u;
            return;
        }
    }
    ctx->pc = 0x1D15FCu;
    // 0x1d15fc: 0x0  nop
    ctx->pc = 0x1d15fcu;
    // NOP
    ctx->pc = 0x1d1600u;
}
