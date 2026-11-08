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

// Function: entry_001a0f78
// Address: 0x1a0f78 - 0x1a0f98
void entry_001a0f78_0x1a0f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0f78_0x1a0f78");
#endif

    ctx->pc = 0x1a0f78u;

    // 0x1a0f78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f7c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a0f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a0f80: 0xac202c08  sw          $zero, 0x2C08($at)
    ctx->pc = 0x1a0f80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 0));
    // 0x1a0f84: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0F84u;
    {
        const bool branch_taken_0x1a0f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F84u;
        // 0x1a0f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f84) {
            ctx->pc = 0x1A0FA0u;
            return;
        }
    }
    ctx->pc = 0x1A0F8Cu;
    // 0x1a0f8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a0f90: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x1a0f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x1a0f94: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1a0f98u;
}
