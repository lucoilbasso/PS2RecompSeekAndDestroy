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

// Function: entry_00143fd8
// Address: 0x143fd8 - 0x143ff8
void entry_00143fd8_0x143fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143fd8_0x143fd8");
#endif

    ctx->pc = 0x143fd8u;

    // 0x143fd8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x143fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x143fdc: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x143FDCu;
    {
        const bool branch_taken_0x143fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143fdc) {
            ctx->pc = 0x143FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143FDCu;
            // 0x143fe0: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144054u;
            return;
        }
    }
    ctx->pc = 0x143FE4u;
    // 0x143fe4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x143fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x143fe8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x143FE8u;
    {
        const bool branch_taken_0x143fe8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x143FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FE8u;
        // 0x143fec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fe8) {
            ctx->pc = 0x144038u;
            return;
        }
    }
    ctx->pc = 0x143FF0u;
    // 0x143ff0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x143ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x143ff4: 0x0  nop
    ctx->pc = 0x143ff4u;
    // NOP
    ctx->pc = 0x143ff8u;
}
