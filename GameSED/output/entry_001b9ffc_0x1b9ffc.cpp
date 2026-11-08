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

// Function: entry_001b9ffc
// Address: 0x1b9ffc - 0x1ba018
void entry_001b9ffc_0x1b9ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9ffc_0x1b9ffc");
#endif

    ctx->pc = 0x1b9ffcu;

    // 0x1b9ffc: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B9FFCu;
    {
        const bool branch_taken_0x1b9ffc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b9ffc) {
            ctx->pc = 0x1BA038u;
            return;
        }
    }
    ctx->pc = 0x1BA004u;
    // 0x1ba004: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x1ba004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1ba008: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BA008u;
    {
        const bool branch_taken_0x1ba008 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA008u;
        // 0x1ba00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba008) {
            ctx->pc = 0x1BA038u;
            return;
        }
    }
    ctx->pc = 0x1BA010u;
    // 0x1ba010: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x1ba010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x1ba014: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1ba014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    ctx->pc = 0x1ba018u;
}
