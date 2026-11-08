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

// Function: entry_00140590
// Address: 0x140590 - 0x14059c
void entry_00140590_0x140590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140590_0x140590");
#endif

    ctx->pc = 0x140590u;

    // 0x140590: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x140590u;
    {
        const bool branch_taken_0x140590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140590) {
            ctx->pc = 0x140594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140590u;
            // 0x140594: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1405A4u;
            return;
        }
    }
    ctx->pc = 0x140598u;
    // 0x140598: 0x2402038e  addiu       $v0, $zero, 0x38E
    ctx->pc = 0x140598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 910));
    ctx->pc = 0x14059cu;
}
