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

// Function: entry_00137458
// Address: 0x137458 - 0x137464
void entry_00137458_0x137458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137458_0x137458");
#endif

    ctx->pc = 0x137458u;

    // 0x137458: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x137458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13745c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x13745Cu;
    {
        const bool branch_taken_0x13745c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13745Cu;
        // 0x137460: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13745c) {
            ctx->pc = 0x137430u;
            return;
        }
    }
    ctx->pc = 0x137464u;
}
