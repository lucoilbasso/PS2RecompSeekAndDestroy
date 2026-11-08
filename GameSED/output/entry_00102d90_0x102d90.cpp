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

// Function: entry_00102d90
// Address: 0x102d90 - 0x102db8
void entry_00102d90_0x102d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102d90_0x102d90");
#endif

    ctx->pc = 0x102d90u;

    // 0x102d90: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x102D90u;
    {
        const bool branch_taken_0x102d90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D90u;
        // 0x102d94: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d90) {
            ctx->pc = 0x102E08u;
            return;
        }
    }
    ctx->pc = 0x102D98u;
    // 0x102d98: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x102d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x102d9c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x102D9Cu;
    {
        const bool branch_taken_0x102d9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x102DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D9Cu;
        // 0x102da0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d9c) {
            ctx->pc = 0x102DDCu;
            return;
        }
    }
    ctx->pc = 0x102DA4u;
    // 0x102da4: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x102da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x102da8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x102da8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102dac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x102dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102db0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x102db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102db4: 0x0  nop
    ctx->pc = 0x102db4u;
    // NOP
    ctx->pc = 0x102db8u;
}
