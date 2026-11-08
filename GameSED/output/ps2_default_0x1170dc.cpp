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

// Function: default
// Address: 0x1170dc - 0x1170f8
void ps2_default_0x1170dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1170dc");
#endif

    ctx->pc = 0x1170dcu;

    // 0x1170dc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1170dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1170e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1170e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1170e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1170e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1170e8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1170E8u;
    {
        const bool branch_taken_0x1170e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1170e8) {
            ctx->pc = 0x1170ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1170E8u;
            // 0x1170ec: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1170FCu;
            return;
        }
    }
    ctx->pc = 0x1170F0u;
    // 0x1170f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1170f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1170f4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x1170f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1170f8u;
}
