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

// Function: entry_0017e990
// Address: 0x17e990 - 0x17e9b0
void entry_0017e990_0x17e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e990_0x17e990");
#endif

    ctx->pc = 0x17e990u;

    // 0x17e990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e994: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17e998: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17e99c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x17e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e9a0: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17E9A0u;
    {
        const bool branch_taken_0x17e9a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9A0u;
        // 0x17e9a4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9a0) {
            ctx->pc = 0x17EA04u;
            return;
        }
    }
    ctx->pc = 0x17E9A8u;
    // 0x17e9a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17e9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9ac: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x17e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->pc = 0x17e9b0u;
}
