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

// Function: entry_0019b368
// Address: 0x19b368 - 0x19b390
void entry_0019b368_0x19b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b368_0x19b368");
#endif

    ctx->pc = 0x19b368u;

label_19b368:
    // 0x19b368: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x19b368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b36c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b370: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b378: 0x0  nop
    ctx->pc = 0x19b378u;
    // NOP
    // 0x19b37c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B37Cu;
    {
        const bool branch_taken_0x19b37c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x19B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B37Cu;
        // 0x19b380: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b37c) {
            ctx->pc = 0x19B368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b368;
        }
    }
    ctx->pc = 0x19B384u;
    // 0x19b384: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x19B384u;
    {
        const bool branch_taken_0x19b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B384u;
        // 0x19b388: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b384) {
            ctx->pc = 0x19B44Cu;
            return;
        }
    }
    ctx->pc = 0x19B38Cu;
    // 0x19b38c: 0x0  nop
    ctx->pc = 0x19b38cu;
    // NOP
    ctx->pc = 0x19b390u;
}
