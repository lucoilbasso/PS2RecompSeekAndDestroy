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

// Function: entry_00161ba4
// Address: 0x161ba4 - 0x161bb8
void entry_00161ba4_0x161ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161ba4_0x161ba4");
#endif

    ctx->pc = 0x161ba4u;

    // 0x161ba4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x161ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x161ba8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x161ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x161bac: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x161BACu;
    {
        const bool branch_taken_0x161bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BACu;
        // 0x161bb0: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bac) {
            ctx->pc = 0x1620F0u;
            return;
        }
    }
    ctx->pc = 0x161BB4u;
    // 0x161bb4: 0x0  nop
    ctx->pc = 0x161bb4u;
    // NOP
    ctx->pc = 0x161bb8u;
}
