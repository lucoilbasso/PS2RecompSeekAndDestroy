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

// Function: entry_0017b634
// Address: 0x17b634 - 0x17b650
void entry_0017b634_0x17b634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b634_0x17b634");
#endif

    ctx->pc = 0x17b634u;

    // 0x17b634: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x17b634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x17b638: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B638u;
    {
        const bool branch_taken_0x17b638 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x17B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B638u;
        // 0x17b63c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b638) {
            ctx->pc = 0x17B650u;
            return;
        }
    }
    ctx->pc = 0x17B640u;
    // 0x17b640: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b644: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x17b644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x17b648: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x17b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x17b64c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x17b650u;
}
