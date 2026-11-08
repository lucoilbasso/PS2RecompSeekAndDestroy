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

// Function: entry_001067c8
// Address: 0x1067c8 - 0x1067e8
void entry_001067c8_0x1067c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001067c8_0x1067c8");
#endif

    ctx->pc = 0x1067c8u;

label_1067c8:
    // 0x1067c8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1067c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1067cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1067ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1067d0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1067d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1067d4: 0x0  nop
    ctx->pc = 0x1067d4u;
    // NOP
    // 0x1067d8: 0x0  nop
    ctx->pc = 0x1067d8u;
    // NOP
    // 0x1067dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1067DCu;
    {
        const bool branch_taken_0x1067dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1067E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067DCu;
        // 0x1067e0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067dc) {
            ctx->pc = 0x1067C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1067c8;
        }
    }
    ctx->pc = 0x1067E4u;
    // 0x1067e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1067e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1067e8u;
}
