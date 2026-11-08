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

// Function: entry_001d5bb8
// Address: 0x1d5bb8 - 0x1d5bd4
void entry_001d5bb8_0x1d5bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5bb8_0x1d5bb8");
#endif

    ctx->pc = 0x1d5bb8u;

label_1d5bb8:
    // 0x1d5bb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5bbc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d5bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d5bc0: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x1d5bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1d5bc4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1d5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1d5bc8: 0x0  nop
    ctx->pc = 0x1d5bc8u;
    // NOP
    // 0x1d5bcc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5BCCu;
    {
        const bool branch_taken_0x1d5bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BCCu;
        // 0x1d5bd0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5bcc) {
            ctx->pc = 0x1D5BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5bb8;
        }
    }
    ctx->pc = 0x1D5BD4u;
}
