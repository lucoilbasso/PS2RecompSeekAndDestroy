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

// Function: caseD_4
// Address: 0x116668 - 0x116670
void caseD_4_0x116668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x116668");
#endif

    ctx->pc = 0x116668u;

    // 0x116668: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x116668u;
    {
        const bool branch_taken_0x116668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116668u;
        // 0x11666c: 0x262300c0  addiu       $v1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116668) {
            ctx->pc = 0x1166A4u;
            return;
        }
    }
    ctx->pc = 0x116670u;
}
