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

// Function: entry_0019b400
// Address: 0x19b400 - 0x19b428
void entry_0019b400_0x19b400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b400_0x19b400");
#endif

    ctx->pc = 0x19b400u;

label_19b400:
    // 0x19b400: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x19b400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b404: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b408: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b40c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b410: 0x0  nop
    ctx->pc = 0x19b410u;
    // NOP
    // 0x19b414: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B414u;
    {
        const bool branch_taken_0x19b414 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x19B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B414u;
        // 0x19b418: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b414) {
            ctx->pc = 0x19B400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b400;
        }
    }
    ctx->pc = 0x19B41Cu;
    // 0x19b41c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19B41Cu;
    {
        const bool branch_taken_0x19b41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B41Cu;
        // 0x19b420: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b41c) {
            ctx->pc = 0x19B44Cu;
            return;
        }
    }
    ctx->pc = 0x19B424u;
    // 0x19b424: 0x0  nop
    ctx->pc = 0x19b424u;
    // NOP
    ctx->pc = 0x19b428u;
}
