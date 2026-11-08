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

// Function: entry_0016f884
// Address: 0x16f884 - 0x16f890
void entry_0016f884_0x16f884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f884_0x16f884");
#endif

    ctx->pc = 0x16f884u;

    // 0x16f884: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16F884u;
    {
        const bool branch_taken_0x16f884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F884u;
        // 0x16f888: 0x16102a  slt         $v0, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f884) {
            ctx->pc = 0x16F890u;
            return;
        }
    }
    ctx->pc = 0x16F88Cu;
    // 0x16f88c: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x16f88cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->pc = 0x16f890u;
}
