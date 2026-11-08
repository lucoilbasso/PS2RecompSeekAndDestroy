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

// Function: entry_001d6bb8
// Address: 0x1d6bb8 - 0x1d6bd0
void entry_001d6bb8_0x1d6bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6bb8_0x1d6bb8");
#endif

    ctx->pc = 0x1d6bb8u;

    // 0x1d6bb8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D6BB8u;
    {
        const bool branch_taken_0x1d6bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BB8u;
        // 0x1d6bbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bb8) {
            ctx->pc = 0x1D6C30u;
            return;
        }
    }
    ctx->pc = 0x1D6BC0u;
    // 0x1d6bc0: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1d6bc4: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D6BC4u;
    {
        const bool branch_taken_0x1d6bc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BC4u;
        // 0x1d6bc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bc4) {
            ctx->pc = 0x1D6C18u;
            return;
        }
    }
    ctx->pc = 0x1D6BCCu;
    // 0x1d6bcc: 0x0  nop
    ctx->pc = 0x1d6bccu;
    // NOP
    ctx->pc = 0x1d6bd0u;
}
