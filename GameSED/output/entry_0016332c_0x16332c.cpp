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

// Function: entry_0016332c
// Address: 0x16332c - 0x163340
void entry_0016332c_0x16332c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016332c_0x16332c");
#endif

    ctx->pc = 0x16332cu;

    // 0x16332c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163330: 0xae43015c  sw          $v1, 0x15C($s2)
    ctx->pc = 0x163330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 3));
    // 0x163334: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x163334u;
    {
        const bool branch_taken_0x163334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163334u;
        // 0x163338: 0xae42016c  sw          $v0, 0x16C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163334) {
            ctx->pc = 0x1634A0u;
            return;
        }
    }
    ctx->pc = 0x16333Cu;
    // 0x16333c: 0x0  nop
    ctx->pc = 0x16333cu;
    // NOP
    ctx->pc = 0x163340u;
}
