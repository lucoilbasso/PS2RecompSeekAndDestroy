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

// Function: entry_0011e348
// Address: 0x11e348 - 0x11e36c
void entry_0011e348_0x11e348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e348_0x11e348");
#endif

    ctx->pc = 0x11e348u;

    // 0x11e348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e34c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x11e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11e350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e354: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11e354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11e358: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x11e358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11e35c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e360: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e364: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11E364u;
    {
        const bool branch_taken_0x11e364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e364) {
            ctx->pc = 0x11E330u;
            return;
        }
    }
    ctx->pc = 0x11E36Cu;
}
