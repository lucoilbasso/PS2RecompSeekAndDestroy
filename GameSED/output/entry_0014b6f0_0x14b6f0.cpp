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

// Function: entry_0014b6f0
// Address: 0x14b6f0 - 0x14b714
void entry_0014b6f0_0x14b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b6f0_0x14b6f0");
#endif

    ctx->pc = 0x14b6f0u;

label_14b6f0:
    // 0x14b6f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b6f4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x14B6F4u;
    {
        const bool branch_taken_0x14b6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b6f4) {
            ctx->pc = 0x14B6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B6F4u;
            // 0x14b6f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B740u;
            return;
        }
    }
    ctx->pc = 0x14B6FCu;
    // 0x14b6fc: 0x0  nop
    ctx->pc = 0x14b6fcu;
    // NOP
    // 0x14b700: 0x0  nop
    ctx->pc = 0x14b700u;
    // NOP
    // 0x14b704: 0x0  nop
    ctx->pc = 0x14b704u;
    // NOP
    // 0x14b708: 0x0  nop
    ctx->pc = 0x14b708u;
    // NOP
    // 0x14b70c: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B70Cu;
    {
        const bool branch_taken_0x14b70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14b70c) {
            ctx->pc = 0x14B710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B70Cu;
            // 0x14b710: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b6f0;
        }
    }
    ctx->pc = 0x14B714u;
}
