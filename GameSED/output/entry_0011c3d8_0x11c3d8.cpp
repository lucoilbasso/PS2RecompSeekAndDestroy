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

// Function: entry_0011c3d8
// Address: 0x11c3d8 - 0x11c410
void entry_0011c3d8_0x11c3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c3d8_0x11c3d8");
#endif

    ctx->pc = 0x11c3d8u;

label_11c3d8:
    // 0x11c3d8: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x11c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x11c3dc: 0x412c0  sll         $v0, $a0, 11
    ctx->pc = 0x11c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x11c3e0: 0x42300  sll         $a0, $a0, 12
    ctx->pc = 0x11c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x11c3e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11c3e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11c3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11c3ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11c3f0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x11c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11c3f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x11c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11c3f8: 0x94435a0e  lhu         $v1, 0x5A0E($v0)
    ctx->pc = 0x11c3f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 23054)));
    // 0x11c3fc: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x11c3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x11c400: 0x8c825a0c  lw          $v0, 0x5A0C($a0)
    ctx->pc = 0x11c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23052)));
    // 0x11c404: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x11c404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11c408: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11C408u;
    {
        const bool branch_taken_0x11c408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C408u;
        // 0x11c40c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c408) {
            ctx->pc = 0x11C3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c3d8;
        }
    }
    ctx->pc = 0x11C410u;
}
