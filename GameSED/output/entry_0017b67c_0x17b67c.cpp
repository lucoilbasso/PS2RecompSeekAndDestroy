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

// Function: entry_0017b67c
// Address: 0x17b67c - 0x17b698
void entry_0017b67c_0x17b67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b67c_0x17b67c");
#endif

    ctx->pc = 0x17b67cu;

    // 0x17b67c: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x17b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x17b680: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B680u;
    {
        const bool branch_taken_0x17b680 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x17B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B680u;
        // 0x17b684: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b680) {
            ctx->pc = 0x17B698u;
            return;
        }
    }
    ctx->pc = 0x17B688u;
    // 0x17b688: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b68c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x17b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x17b690: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17b694: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17b694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x17b698u;
}
