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

// Function: entry_00127e18
// Address: 0x127e18 - 0x127e44
void entry_00127e18_0x127e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127e18_0x127e18");
#endif

    ctx->pc = 0x127e18u;

label_127e18:
    // 0x127e18: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x127e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x127e1c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x127e1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127e20: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x127e20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x127e24: 0x24640230  addiu       $a0, $v1, 0x230
    ctx->pc = 0x127e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
    // 0x127e28: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x127e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x127e2c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x127e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127e30: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x127e30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x127e34: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x127e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x127e38: 0x1cc0fff7  bgtz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x127E38u;
    {
        const bool branch_taken_0x127e38 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x127E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E38u;
        // 0x127e3c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e38) {
            ctx->pc = 0x127E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127e18;
        }
    }
    ctx->pc = 0x127E40u;
    // 0x127e40: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x127e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    ctx->pc = 0x127e44u;
}
