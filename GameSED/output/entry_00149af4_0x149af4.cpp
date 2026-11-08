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

// Function: entry_00149af4
// Address: 0x149af4 - 0x149b00
void entry_00149af4_0x149af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149af4_0x149af4");
#endif

    ctx->pc = 0x149af4u;

    // 0x149af4: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x149af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149af8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x149AF8u;
    {
        const bool branch_taken_0x149af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AF8u;
        // 0x149afc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149af8) {
            ctx->pc = 0x149AC8u;
            return;
        }
    }
    ctx->pc = 0x149B00u;
}
