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

// Function: entry_001d4ac0
// Address: 0x1d4ac0 - 0x1d4ad0
void entry_001d4ac0_0x1d4ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ac0_0x1d4ac0");
#endif

    ctx->pc = 0x1d4ac0u;

    // 0x1d4ac0: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x1d4ac0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1d4ac4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D4AC4u;
    {
        const bool branch_taken_0x1d4ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AC4u;
        // 0x1d4ac8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ac4) {
            ctx->pc = 0x1D4B40u;
            return;
        }
    }
    ctx->pc = 0x1D4ACCu;
    // 0x1d4acc: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1d4ad0u;
}
