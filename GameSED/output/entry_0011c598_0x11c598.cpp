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

// Function: entry_0011c598
// Address: 0x11c598 - 0x11c5a8
void entry_0011c598_0x11c598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c598_0x11c598");
#endif

    ctx->pc = 0x11c598u;

    // 0x11c598: 0x12020059  beq         $s0, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x11C598u;
    {
        const bool branch_taken_0x11c598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C598u;
        // 0x11c59c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c598) {
            ctx->pc = 0x11C700u;
            return;
        }
    }
    ctx->pc = 0x11C5A0u;
    // 0x11c5a0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x11C5A0u;
    {
        const bool branch_taken_0x11c5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5A0u;
        // 0x11c5a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5a0) {
            ctx->pc = 0x11C710u;
            return;
        }
    }
    ctx->pc = 0x11C5A8u;
}
