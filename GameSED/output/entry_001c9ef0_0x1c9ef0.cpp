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

// Function: entry_001c9ef0
// Address: 0x1c9ef0 - 0x1c9f28
void entry_001c9ef0_0x1c9ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9ef0_0x1c9ef0");
#endif

    ctx->pc = 0x1c9ef0u;

label_1c9ef0:
    // 0x1c9ef0: 0x72878  dsll        $a1, $a3, 1
    ctx->pc = 0x1c9ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 1);
    // 0x1c9ef4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c9ef8: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x1c9ef8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x1c9efc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c9efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9f00: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x1c9f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x1c9f04: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x1c9f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x1c9f08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c9f0c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x1c9f0cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c9f10: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1c9f10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1c9f14: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c9f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f18: 0x1080fff5  beqz        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C9F18u;
    {
        const bool branch_taken_0x1c9f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F18u;
        // 0x1c9f1c: 0xfcc50010  sd          $a1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f18) {
            ctx->pc = 0x1C9EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ef0;
        }
    }
    ctx->pc = 0x1C9F20u;
    // 0x1c9f20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9F20u;
    {
        const bool branch_taken_0x1c9f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f20) {
            ctx->pc = 0x1C9F3Cu;
            return;
        }
    }
    ctx->pc = 0x1C9F28u;
}
