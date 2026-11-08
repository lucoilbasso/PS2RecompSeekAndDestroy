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

// Function: entry_001d6978
// Address: 0x1d6978 - 0x1d6990
void entry_001d6978_0x1d6978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6978_0x1d6978");
#endif

    ctx->pc = 0x1d6978u;

    // 0x1d6978: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D6978u;
    {
        const bool branch_taken_0x1d6978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6978) {
            ctx->pc = 0x1D697Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6978u;
            // 0x1d697c: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D69ECu;
            return;
        }
    }
    ctx->pc = 0x1D6980u;
    // 0x1d6980: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1d6980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1d6984: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D6984u;
    {
        const bool branch_taken_0x1d6984 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6984u;
        // 0x1d6988: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6984) {
            ctx->pc = 0x1D69DCu;
            return;
        }
    }
    ctx->pc = 0x1D698Cu;
    // 0x1d698c: 0x0  nop
    ctx->pc = 0x1d698cu;
    // NOP
    ctx->pc = 0x1d6990u;
}
