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

// Function: entry_0018b590
// Address: 0x18b590 - 0x18b5a0
void entry_0018b590_0x18b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b590_0x18b590");
#endif

    ctx->pc = 0x18b590u;

    // 0x18b590: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B590u;
    {
        const bool branch_taken_0x18b590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b590) {
            ctx->pc = 0x18B594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B590u;
            // 0x18b594: 0x8e620208  lw          $v0, 0x208($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B5B4u;
            return;
        }
    }
    ctx->pc = 0x18B598u;
    // 0x18b598: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x18b598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18b59c: 0x0  nop
    ctx->pc = 0x18b59cu;
    // NOP
    ctx->pc = 0x18b5a0u;
}
