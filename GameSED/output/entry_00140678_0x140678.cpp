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

// Function: entry_00140678
// Address: 0x140678 - 0x14069c
void entry_00140678_0x140678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140678_0x140678");
#endif

    ctx->pc = 0x140678u;

    // 0x140678: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x140678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x14067c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14067cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x140680: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x140680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x140684: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x140684u;
    {
        const bool branch_taken_0x140684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140684) {
            ctx->pc = 0x140688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140684u;
            // 0x140688: 0x8cc2001c  lw          $v0, 0x1C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1406A8u;
            return;
        }
    }
    ctx->pc = 0x14068Cu;
    // 0x14068c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x14068cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140690: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x140690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x140694: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140694u;
    {
        const bool branch_taken_0x140694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x140694) {
            ctx->pc = 0x140698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140694u;
            // 0x140698: 0x8cc2001c  lw          $v0, 0x1C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1406A8u;
            return;
        }
    }
    ctx->pc = 0x14069Cu;
}
