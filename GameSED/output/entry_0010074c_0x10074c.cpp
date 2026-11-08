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

// Function: entry_0010074c
// Address: 0x10074c - 0x100760
void entry_0010074c_0x10074c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010074c_0x10074c");
#endif

    ctx->pc = 0x10074cu;

    // 0x10074c: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x10074Cu;
    {
        const bool branch_taken_0x10074c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10074c) {
            ctx->pc = 0x100750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10074Cu;
            // 0x100750: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1007D8u;
            return;
        }
    }
    ctx->pc = 0x100754u;
    // 0x100754: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x100754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x100758: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x100758u;
    {
        const bool branch_taken_0x100758 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100758u;
        // 0x10075c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100758) {
            ctx->pc = 0x1007C8u;
            return;
        }
    }
    ctx->pc = 0x100760u;
}
