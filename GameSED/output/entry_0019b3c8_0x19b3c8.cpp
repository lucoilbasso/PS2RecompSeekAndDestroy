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

// Function: entry_0019b3c8
// Address: 0x19b3c8 - 0x19b3ec
void entry_0019b3c8_0x19b3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b3c8_0x19b3c8");
#endif

    ctx->pc = 0x19b3c8u;

label_19b3c8:
    // 0x19b3c8: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x19b3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19b3cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b3d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19b3d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b3d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b3dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x19b3e0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x19b3e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b3e4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19B3E4u;
    {
        const bool branch_taken_0x19b3e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3E4u;
        // 0x19b3e8: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3e4) {
            ctx->pc = 0x19B3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b3c8;
        }
    }
    ctx->pc = 0x19B3ECu;
}
