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

// Function: entry_0017d800
// Address: 0x17d800 - 0x17d820
void entry_0017d800_0x17d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d800_0x17d800");
#endif

    ctx->pc = 0x17d800u;

    // 0x17d800: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x17d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x17d804: 0x50470011  beql        $v0, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x17D804u;
    {
        const bool branch_taken_0x17d804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x17d804) {
            ctx->pc = 0x17D808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D804u;
            // 0x17d808: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D84Cu;
            return;
        }
    }
    ctx->pc = 0x17D80Cu;
    // 0x17d80c: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x17d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x17d810: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x17d810u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d814: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D814u;
    {
        const bool branch_taken_0x17d814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D814u;
        // 0x17d818: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d814) {
            ctx->pc = 0x17D844u;
            return;
        }
    }
    ctx->pc = 0x17D81Cu;
    // 0x17d81c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x17d820u;
}
