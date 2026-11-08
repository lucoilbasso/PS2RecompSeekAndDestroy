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

// Function: entry_001c3160
// Address: 0x1c3160 - 0x1c3194
void entry_001c3160_0x1c3160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3160_0x1c3160");
#endif

    ctx->pc = 0x1c3160u;

label_1c3160:
    // 0x1c3160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3164: 0x0  nop
    ctx->pc = 0x1c3164u;
    // NOP
    // 0x1c3168: 0x0  nop
    ctx->pc = 0x1c3168u;
    // NOP
    // 0x1c316c: 0x0  nop
    ctx->pc = 0x1c316cu;
    // NOP
    // 0x1c3170: 0x0  nop
    ctx->pc = 0x1c3170u;
    // NOP
    // 0x1c3174: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3174u;
    {
        const bool branch_taken_0x1c3174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3174) {
            ctx->pc = 0x1C3160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3160;
        }
    }
    ctx->pc = 0x1C317Cu;
    // 0x1c317c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1c317cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3180: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x1c3180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c3184: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1C3184u;
    {
        const bool branch_taken_0x1c3184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3184u;
        // 0x1c3188: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3184) {
            ctx->pc = 0x1C3060u;
            return;
        }
    }
    ctx->pc = 0x1C318Cu;
    // 0x1c318c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C318Cu;
    {
        const bool branch_taken_0x1c318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C318Cu;
        // 0x1c3190: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c318c) {
            ctx->pc = 0x1C319Cu;
            return;
        }
    }
    ctx->pc = 0x1C3194u;
}
