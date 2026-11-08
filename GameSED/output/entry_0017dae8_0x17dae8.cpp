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

// Function: entry_0017dae8
// Address: 0x17dae8 - 0x17db00
void entry_0017dae8_0x17dae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dae8_0x17dae8");
#endif

    ctx->pc = 0x17dae8u;

    // 0x17dae8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17daec: 0xa1a30000  sb          $v1, 0x0($t5)
    ctx->pc = 0x17daecu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17daf0: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x17daf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x17daf4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17daf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DAF8u;
    {
        const bool branch_taken_0x17daf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAF8u;
        // 0x17dafc: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17daf8) {
            ctx->pc = 0x17DB0Cu;
            return;
        }
    }
    ctx->pc = 0x17DB00u;
}
