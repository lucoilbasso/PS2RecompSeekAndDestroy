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

// Function: entry_0010da58
// Address: 0x10da58 - 0x10da80
void entry_0010da58_0x10da58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010da58_0x10da58");
#endif

    ctx->pc = 0x10da58u;

label_10da58:
    // 0x10da58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x10da58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10da5c: 0x8e6301dc  lw          $v1, 0x1DC($s3)
    ctx->pc = 0x10da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 476)));
    // 0x10da60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10da60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10da64: 0xac830178  sw          $v1, 0x178($a0)
    ctx->pc = 0x10da64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 3));
    // 0x10da68: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x10da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x10da6c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x10da6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10da70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10DA70u;
    {
        const bool branch_taken_0x10da70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA70u;
        // 0x10da74: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da70) {
            ctx->pc = 0x10DA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10da58;
        }
    }
    ctx->pc = 0x10DA78u;
    // 0x10da78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10DA78u;
    {
        const bool branch_taken_0x10da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA78u;
        // 0x10da7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da78) {
            ctx->pc = 0x10DA8Cu;
            return;
        }
    }
    ctx->pc = 0x10DA80u;
}
