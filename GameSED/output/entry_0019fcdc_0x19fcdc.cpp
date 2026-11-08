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

// Function: entry_0019fcdc
// Address: 0x19fcdc - 0x19fce4
void entry_0019fcdc_0x19fcdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fcdc_0x19fcdc");
#endif

    ctx->pc = 0x19fcdcu;

    // 0x19fcdc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FCDCu;
    {
        const bool branch_taken_0x19fcdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCDCu;
        // 0x19fce0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcdc) {
            ctx->pc = 0x19FCF8u;
            return;
        }
    }
    ctx->pc = 0x19FCE4u;
}
