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

// Function: entry_0010f688
// Address: 0x10f688 - 0x10f698
void entry_0010f688_0x10f688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f688_0x10f688");
#endif

    ctx->pc = 0x10f688u;

    // 0x10f688: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F688u;
    {
        const bool branch_taken_0x10f688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f688) {
            ctx->pc = 0x10F68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F688u;
            // 0x10f68c: 0x266300d0  addiu       $v1, $s3, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F698u;
            return;
        }
    }
    ctx->pc = 0x10F690u;
    // 0x10f690: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x10f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x10f694: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x10f694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->pc = 0x10f698u;
}
