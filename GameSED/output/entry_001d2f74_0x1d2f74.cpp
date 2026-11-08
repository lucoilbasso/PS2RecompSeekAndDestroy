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

// Function: entry_001d2f74
// Address: 0x1d2f74 - 0x1d2f98
void entry_001d2f74_0x1d2f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2f74_0x1d2f74");
#endif

    ctx->pc = 0x1d2f74u;

    // 0x1d2f74: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x1d2f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1d2f78: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2F78u;
    {
        const bool branch_taken_0x1d2f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f78) {
            ctx->pc = 0x1D2F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2F78u;
            // 0x1d2f7c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2F98u;
            return;
        }
    }
    ctx->pc = 0x1D2F80u;
    // 0x1d2f80: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1d2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d2f84: 0x0  nop
    ctx->pc = 0x1d2f84u;
    // NOP
    // 0x1d2f88: 0x0  nop
    ctx->pc = 0x1d2f88u;
    // NOP
    // 0x1d2f8c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D2F8Cu;
    {
        const bool branch_taken_0x1d2f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f8c) {
            ctx->pc = 0x1D2F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2F8Cu;
            // 0x1d2f90: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2F70u;
            return;
        }
    }
    ctx->pc = 0x1D2F94u;
    // 0x1d2f94: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x1d2f94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
    ctx->pc = 0x1d2f98u;
}
