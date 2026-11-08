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

// Function: entry_0017e734
// Address: 0x17e734 - 0x17e74c
void entry_0017e734_0x17e734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e734_0x17e734");
#endif

    ctx->pc = 0x17e734u;

    // 0x17e734: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x17e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17e738: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E738u;
    {
        const bool branch_taken_0x17e738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e738) {
            ctx->pc = 0x17E73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E738u;
            // 0x17e73c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E758u;
            return;
        }
    }
    ctx->pc = 0x17E740u;
    // 0x17e740: 0x96020022  lhu         $v0, 0x22($s0)
    ctx->pc = 0x17e740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x17e744: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E744u;
    {
        const bool branch_taken_0x17e744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e744) {
            ctx->pc = 0x17E748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E744u;
            // 0x17e748: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E758u;
            return;
        }
    }
    ctx->pc = 0x17E74Cu;
}
