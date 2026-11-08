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

// Function: entry_001c7700
// Address: 0x1c7700 - 0x1c7718
void entry_001c7700_0x1c7700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7700_0x1c7700");
#endif

    ctx->pc = 0x1c7700u;

    // 0x1c7700: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c7700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7704: 0x640002e  bltz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C7704u;
    {
        const bool branch_taken_0x1c7704 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1C7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7704u;
        // 0x1c7708: 0x8fa50238  lw          $a1, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7704) {
            ctx->pc = 0x1C77C0u;
            return;
        }
    }
    ctx->pc = 0x1C770Cu;
    // 0x1c770c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1c770cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c7710: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x1c7710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1c7714: 0x0  nop
    ctx->pc = 0x1c7714u;
    // NOP
    ctx->pc = 0x1c7718u;
}
