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

// Function: entry_001802f8
// Address: 0x1802f8 - 0x180330
void entry_001802f8_0x1802f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001802f8_0x1802f8");
#endif

    ctx->pc = 0x1802f8u;

label_1802f8:
    // 0x1802f8: 0x80820002  lb          $v0, 0x2($a0)
    ctx->pc = 0x1802f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1802fc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1802fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180300: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x180300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x180304: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x180304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x180308: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x180308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x18030c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180310: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x180310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x180314: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x180314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x180318: 0xa4460030  sh          $a2, 0x30($v0)
    ctx->pc = 0x180318u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x18031c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18031cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x180320: 0x94e20022  lhu         $v0, 0x22($a3)
    ctx->pc = 0x180320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x180324: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x180324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x180328: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x180328u;
    {
        const bool branch_taken_0x180328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180328u;
        // 0x18032c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180328) {
            ctx->pc = 0x1802F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1802f8;
        }
    }
    ctx->pc = 0x180330u;
}
