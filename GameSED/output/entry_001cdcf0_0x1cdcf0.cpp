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

// Function: entry_001cdcf0
// Address: 0x1cdcf0 - 0x1cdd20
void entry_001cdcf0_0x1cdcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdcf0_0x1cdcf0");
#endif

    ctx->pc = 0x1cdcf0u;

label_1cdcf0:
    // 0x1cdcf0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1cdcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1cdcf4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cdcf8: 0xdc430020  ld          $v1, 0x20($v0)
    ctx->pc = 0x1cdcf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1cdcfc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1cdcfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cdd00: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1cdd00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1cdd04: 0x24c703f0  addiu       $a3, $a2, 0x3F0
    ctx->pc = 0x1cdd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1008));
    // 0x1cdd08: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1cdd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cdd0c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1cdd0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdd10: 0x1069fff7  beq         $v1, $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDD10u;
    {
        const bool branch_taken_0x1cdd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x1CDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD10u;
        // 0x1cdd14: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd10) {
            ctx->pc = 0x1CDCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdcf0;
        }
    }
    ctx->pc = 0x1CDD18u;
    // 0x1cdd18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd1c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1cdd1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1cdd20u;
}
