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

// Function: entry_00172650
// Address: 0x172650 - 0x172664
void entry_00172650_0x172650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172650_0x172650");
#endif

    ctx->pc = 0x172650u;

    // 0x172650: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x172650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x172654: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x172654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172658: 0x1440fe9d  bnez        $v0, . + 4 + (-0x163 << 2)
    ctx->pc = 0x172658u;
    {
        const bool branch_taken_0x172658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172658u;
        // 0x17265c: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172658) {
            ctx->pc = 0x1720D0u;
            return;
        }
    }
    ctx->pc = 0x172660u;
    // 0x172660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172664u;
}
