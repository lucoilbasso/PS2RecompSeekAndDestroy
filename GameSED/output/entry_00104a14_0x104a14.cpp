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

// Function: entry_00104a14
// Address: 0x104a14 - 0x104a24
void entry_00104a14_0x104a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104a14_0x104a14");
#endif

    ctx->pc = 0x104a14u;

    // 0x104a14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x104a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104a18: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x104a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x104a1c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x104A1Cu;
    {
        const bool branch_taken_0x104a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x104A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A1Cu;
        // 0x104a20: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a1c) {
            ctx->pc = 0x104A28u;
            return;
        }
    }
    ctx->pc = 0x104A24u;
}
