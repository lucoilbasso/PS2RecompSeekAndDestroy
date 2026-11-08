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

// Function: entry_0012412c
// Address: 0x12412c - 0x124140
void entry_0012412c_0x12412c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012412c_0x12412c");
#endif

    ctx->pc = 0x12412cu;

    // 0x12412c: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12412Cu;
    {
        const bool branch_taken_0x12412c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x12412c) {
            ctx->pc = 0x124130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12412Cu;
            // 0x124130: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124140u;
            return;
        }
    }
    ctx->pc = 0x124134u;
    // 0x124134: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x124134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x124138: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x124138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
    // 0x12413c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12413cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x124140u;
}
