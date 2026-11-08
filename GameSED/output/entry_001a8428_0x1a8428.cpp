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

// Function: entry_001a8428
// Address: 0x1a8428 - 0x1a8450
void entry_001a8428_0x1a8428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8428_0x1a8428");
#endif

    ctx->pc = 0x1a8428u;

label_1a8428:
    // 0x1a8428: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1a8428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a842c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a842cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a8430: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1a8430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a8434: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x1a8434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a8438: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x1a8438u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a843c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a843cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a8440: 0x47300a  movz        $a2, $v0, $a3
    ctx->pc = 0x1a8440u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1a8444: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1a8444u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8448: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A8448u;
    {
        const bool branch_taken_0x1a8448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8448u;
        // 0x1a844c: 0x30870003  andi        $a3, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8448) {
            ctx->pc = 0x1A8428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8428;
        }
    }
    ctx->pc = 0x1A8450u;
}
