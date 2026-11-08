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

// Function: entry_001ae95c
// Address: 0x1ae95c - 0x1ae978
void entry_001ae95c_0x1ae95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae95c_0x1ae95c");
#endif

    ctx->pc = 0x1ae95cu;

    // 0x1ae95c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE95Cu;
    {
        const bool branch_taken_0x1ae95c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE95Cu;
        // 0x1ae960: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae95c) {
            ctx->pc = 0x1AE978u;
            return;
        }
    }
    ctx->pc = 0x1AE964u;
    // 0x1ae964: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ae964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ae968: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ae968u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1ae96c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae970: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae974: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1ae974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1ae978u;
}
