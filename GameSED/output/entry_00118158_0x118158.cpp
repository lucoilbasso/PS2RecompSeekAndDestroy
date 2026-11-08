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

// Function: entry_00118158
// Address: 0x118158 - 0x118188
void entry_00118158_0x118158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118158_0x118158");
#endif

    ctx->pc = 0x118158u;

label_118158:
    // 0x118158: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11815c: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x11815cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x118160: 0x0  nop
    ctx->pc = 0x118160u;
    // NOP
    // 0x118164: 0x0  nop
    ctx->pc = 0x118164u;
    // NOP
    // 0x118168: 0x0  nop
    ctx->pc = 0x118168u;
    // NOP
    // 0x11816c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11816Cu;
    {
        const bool branch_taken_0x11816c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x118170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11816Cu;
        // 0x118170: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11816c) {
            ctx->pc = 0x118158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118158;
        }
    }
    ctx->pc = 0x118174u;
    // 0x118174: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118178: 0x24841008  addiu       $a0, $a0, 0x1008
    ctx->pc = 0x118178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4104));
    // 0x11817c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11817cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118180: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x118180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118184: 0x0  nop
    ctx->pc = 0x118184u;
    // NOP
    ctx->pc = 0x118188u;
}
