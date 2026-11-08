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

// Function: entry_00124500
// Address: 0x124500 - 0x124518
void entry_00124500_0x124500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124500_0x124500");
#endif

    ctx->pc = 0x124500u;

    // 0x124500: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124500u;
    {
        const bool branch_taken_0x124500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x124500) {
            ctx->pc = 0x124504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124500u;
            // 0x124504: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124518u;
            return;
        }
    }
    ctx->pc = 0x124508u;
    // 0x124508: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x124508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12450c: 0xae040110  sw          $a0, 0x110($s0)
    ctx->pc = 0x12450cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 4));
    // 0x124510: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x124510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x124514: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x124514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->pc = 0x124518u;
}
