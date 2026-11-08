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

// Function: entry_001b0348
// Address: 0x1b0348 - 0x1b0364
void entry_001b0348_0x1b0348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0348_0x1b0348");
#endif

    ctx->pc = 0x1b0348u;

    // 0x1b0348: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b0348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b034c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b0350: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b0350u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b0354: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1b0354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1b0358: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1b0358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1b035c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B035Cu;
    {
        const bool branch_taken_0x1b035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B035Cu;
        // 0x1b0360: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b035c) {
            ctx->pc = 0x1B0388u;
            return;
        }
    }
    ctx->pc = 0x1B0364u;
}
