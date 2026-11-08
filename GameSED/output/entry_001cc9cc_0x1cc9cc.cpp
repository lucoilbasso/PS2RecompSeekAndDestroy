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

// Function: entry_001cc9cc
// Address: 0x1cc9cc - 0x1cc9e8
void entry_001cc9cc_0x1cc9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc9cc_0x1cc9cc");
#endif

    ctx->pc = 0x1cc9ccu;

    // 0x1cc9cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9d0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC9D0u;
    {
        const bool branch_taken_0x1cc9d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9D0u;
        // 0x1cc9d4: 0x210c3  sra         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9d0) {
            ctx->pc = 0x1CC9E8u;
            return;
        }
    }
    ctx->pc = 0x1CC9D8u;
    // 0x1cc9d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC9D8u;
    {
        const bool branch_taken_0x1cc9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9D8u;
        // 0x1cc9dc: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9d8) {
            ctx->pc = 0x1CC9E8u;
            return;
        }
    }
    ctx->pc = 0x1CC9E0u;
    // 0x1cc9e0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cc9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cc9e4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cc9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1cc9e8u;
}
