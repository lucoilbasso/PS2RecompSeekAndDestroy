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

// Function: entry_0019aebc
// Address: 0x19aebc - 0x19aed8
void entry_0019aebc_0x19aebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aebc_0x19aebc");
#endif

    ctx->pc = 0x19aebcu;

    // 0x19aebc: 0x0  nop
    ctx->pc = 0x19aebcu;
    // NOP
    // 0x19aec0: 0x0  nop
    ctx->pc = 0x19aec0u;
    // NOP
    // 0x19aec4: 0x1509fff6  bne         $t0, $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AEC4u;
    {
        const bool branch_taken_0x19aec4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x19AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEC4u;
        // 0x19aec8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aec4) {
            ctx->pc = 0x19AEA0u;
            return;
        }
    }
    ctx->pc = 0x19AECCu;
    // 0x19aecc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19AECCu;
    {
        const bool branch_taken_0x19aecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AECCu;
        // 0x19aed0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aecc) {
            ctx->pc = 0x19AF48u;
            return;
        }
    }
    ctx->pc = 0x19AED4u;
    // 0x19aed4: 0x0  nop
    ctx->pc = 0x19aed4u;
    // NOP
    ctx->pc = 0x19aed8u;
}
