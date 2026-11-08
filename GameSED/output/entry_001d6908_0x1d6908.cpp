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

// Function: entry_001d6908
// Address: 0x1d6908 - 0x1d6920
void entry_001d6908_0x1d6908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6908_0x1d6908");
#endif

    ctx->pc = 0x1d6908u;

    // 0x1d6908: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D6908u;
    {
        const bool branch_taken_0x1d6908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6908) {
            ctx->pc = 0x1D690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6908u;
            // 0x1d690c: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6978u;
            return;
        }
    }
    ctx->pc = 0x1D6910u;
    // 0x1d6910: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1d6910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1d6914: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D6914u;
    {
        const bool branch_taken_0x1d6914 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6914u;
        // 0x1d6918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6914) {
            ctx->pc = 0x1D6968u;
            return;
        }
    }
    ctx->pc = 0x1D691Cu;
    // 0x1d691c: 0x0  nop
    ctx->pc = 0x1d691cu;
    // NOP
    ctx->pc = 0x1d6920u;
}
