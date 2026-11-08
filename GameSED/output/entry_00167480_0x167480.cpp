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

// Function: entry_00167480
// Address: 0x167480 - 0x167498
void entry_00167480_0x167480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167480_0x167480");
#endif

    ctx->pc = 0x167480u;

    // 0x167480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167484: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167484u;
    {
        const bool branch_taken_0x167484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167484u;
        // 0x167488: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167484) {
            ctx->pc = 0x167498u;
            return;
        }
    }
    ctx->pc = 0x16748Cu;
    // 0x16748c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x16748cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x167490: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x167490u;
    {
        const bool branch_taken_0x167490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167490) {
            ctx->pc = 0x167494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167490u;
            // 0x167494: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167450u;
            return;
        }
    }
    ctx->pc = 0x167498u;
}
