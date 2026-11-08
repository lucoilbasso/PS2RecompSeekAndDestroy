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

// Function: entry_0013bcbc
// Address: 0x13bcbc - 0x13bcc4
void entry_0013bcbc_0x13bcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bcbc_0x13bcbc");
#endif

    ctx->pc = 0x13bcbcu;

    // 0x13bcbc: 0x56a0ffb0  bnel        $s5, $zero, . + 4 + (-0x50 << 2)
    ctx->pc = 0x13BCBCu;
    {
        const bool branch_taken_0x13bcbc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bcbc) {
            ctx->pc = 0x13BCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BCBCu;
            // 0x13bcc0: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BB80u;
            return;
        }
    }
    ctx->pc = 0x13BCC4u;
}
