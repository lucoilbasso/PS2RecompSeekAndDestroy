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

// Function: entry_0019f4b4
// Address: 0x19f4b4 - 0x19f4d0
void entry_0019f4b4_0x19f4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f4b4_0x19f4b4");
#endif

    ctx->pc = 0x19f4b4u;

    // 0x19f4b4: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x19F4B4u;
    {
        const bool branch_taken_0x19f4b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4B4u;
        // 0x19f4b8: 0x2643004f  addiu       $v1, $s2, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4b4) {
            ctx->pc = 0x19F530u;
            return;
        }
    }
    ctx->pc = 0x19F4BCu;
    // 0x19f4bc: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x19f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x19f4c0: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x19F4C0u;
    {
        const bool branch_taken_0x19f4c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4C0u;
        // 0x19f4c4: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4c0) {
            ctx->pc = 0x19F500u;
            return;
        }
    }
    ctx->pc = 0x19F4C8u;
    // 0x19f4c8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x19f4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19f4cc: 0x0  nop
    ctx->pc = 0x19f4ccu;
    // NOP
    ctx->pc = 0x19f4d0u;
}
