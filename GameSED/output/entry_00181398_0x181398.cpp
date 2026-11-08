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

// Function: entry_00181398
// Address: 0x181398 - 0x1813ac
void entry_00181398_0x181398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181398_0x181398");
#endif

    ctx->pc = 0x181398u;

    // 0x181398: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x181398u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x18139c: 0x258c0030  addiu       $t4, $t4, 0x30
    ctx->pc = 0x18139cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x1813a0: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x1813a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1813a4: 0x1440fe46  bnez        $v0, . + 4 + (-0x1BA << 2)
    ctx->pc = 0x1813A4u;
    {
        const bool branch_taken_0x1813a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1813A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813A4u;
        // 0x1813a8: 0x27180010  addiu       $t8, $t8, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813a4) {
            ctx->pc = 0x180CC0u;
            return;
        }
    }
    ctx->pc = 0x1813ACu;
}
