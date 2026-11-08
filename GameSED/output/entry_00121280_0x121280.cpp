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

// Function: entry_00121280
// Address: 0x121280 - 0x1212a4
void entry_00121280_0x121280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121280_0x121280");
#endif

    ctx->pc = 0x121280u;

    // 0x121280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121284: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x121284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x121288: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12128c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12128cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x121290: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x121290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x121294: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x121294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121298: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x121298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12129c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12129Cu;
    {
        const bool branch_taken_0x12129c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12129c) {
            ctx->pc = 0x121258u;
            return;
        }
    }
    ctx->pc = 0x1212A4u;
}
