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

// Function: entry_001d2b88
// Address: 0x1d2b88 - 0x1d2bb0
void entry_001d2b88_0x1d2b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2b88_0x1d2b88");
#endif

    ctx->pc = 0x1d2b88u;

label_1d2b88:
    // 0x1d2b88: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1d2b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d2b8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d2b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d2b90: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x1d2b90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d2b94: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1d2b94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d2b98: 0x0  nop
    ctx->pc = 0x1d2b98u;
    // NOP
    // 0x1d2b9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D2B9Cu;
    {
        const bool branch_taken_0x1d2b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B9Cu;
        // 0x1d2ba0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b9c) {
            ctx->pc = 0x1D2B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2b88;
        }
    }
    ctx->pc = 0x1D2BA4u;
    // 0x1d2ba4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2BA4u;
    {
        const bool branch_taken_0x1d2ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BA4u;
        // 0x1d2ba8: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ba4) {
            ctx->pc = 0x1D2BCCu;
            return;
        }
    }
    ctx->pc = 0x1D2BACu;
    // 0x1d2bac: 0x0  nop
    ctx->pc = 0x1d2bacu;
    // NOP
    ctx->pc = 0x1d2bb0u;
}
