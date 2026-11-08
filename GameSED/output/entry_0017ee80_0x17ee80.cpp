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

// Function: entry_0017ee80
// Address: 0x17ee80 - 0x17eea4
void entry_0017ee80_0x17ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ee80_0x17ee80");
#endif

    ctx->pc = 0x17ee80u;

label_17ee80:
    // 0x17ee80: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17ee84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x17ee84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x17ee88: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x17ee88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x17ee8c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x17ee90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17ee94: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x17ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x17ee98: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17ee9c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17EE9Cu;
    {
        const bool branch_taken_0x17ee9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE9Cu;
        // 0x17eea0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee9c) {
            ctx->pc = 0x17EE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ee80;
        }
    }
    ctx->pc = 0x17EEA4u;
}
