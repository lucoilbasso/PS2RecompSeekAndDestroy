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

// Function: entry_00137488
// Address: 0x137488 - 0x1374b0
void entry_00137488_0x137488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137488_0x137488");
#endif

    ctx->pc = 0x137488u;

label_137488:
    // 0x137488: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x137488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13748c: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x13748cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x137490: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x137490u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x137494: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x137494u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x137498: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x137498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x13749c: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x13749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1374a0: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x1374a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1374a4: 0x0  nop
    ctx->pc = 0x1374a4u;
    // NOP
    // 0x1374a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1374A8u;
    {
        const bool branch_taken_0x1374a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1374ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1374A8u;
        // 0x1374ac: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374a8) {
            ctx->pc = 0x137488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137488;
        }
    }
    ctx->pc = 0x1374B0u;
}
