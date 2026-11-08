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

// Function: entry_00100878
// Address: 0x100878 - 0x100890
void entry_00100878_0x100878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100878_0x100878");
#endif

    ctx->pc = 0x100878u;

    // 0x100878: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x100878u;
    {
        const bool branch_taken_0x100878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100878) {
            ctx->pc = 0x10087Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100878u;
            // 0x10087c: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100918u;
            return;
        }
    }
    ctx->pc = 0x100880u;
    // 0x100880: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x100880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x100884: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x100884u;
    {
        const bool branch_taken_0x100884 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100884u;
        // 0x100888: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100884) {
            ctx->pc = 0x100908u;
            return;
        }
    }
    ctx->pc = 0x10088Cu;
    // 0x10088c: 0x0  nop
    ctx->pc = 0x10088cu;
    // NOP
    ctx->pc = 0x100890u;
}
