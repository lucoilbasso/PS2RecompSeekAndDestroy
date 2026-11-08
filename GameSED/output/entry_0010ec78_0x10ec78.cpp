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

// Function: entry_0010ec78
// Address: 0x10ec78 - 0x10ec84
void entry_0010ec78_0x10ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ec78_0x10ec78");
#endif

    ctx->pc = 0x10ec78u;

    // 0x10ec78: 0x4a30022  bgezl       $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x10EC78u;
    {
        const bool branch_taken_0x10ec78 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x10ec78) {
            ctx->pc = 0x10EC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC78u;
            // 0x10ec7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ED04u;
            return;
        }
    }
    ctx->pc = 0x10EC80u;
    // 0x10ec80: 0x8e910048  lw          $s1, 0x48($s4)
    ctx->pc = 0x10ec80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    ctx->pc = 0x10ec84u;
}
