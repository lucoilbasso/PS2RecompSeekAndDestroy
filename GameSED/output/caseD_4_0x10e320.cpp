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

// Function: caseD_4
// Address: 0x10e320 - 0x10e338
void caseD_4_0x10e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x10e320");
#endif

    ctx->pc = 0x10e320u;

    // 0x10e320: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10e324: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x10e324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x10e328: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10e328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10e32c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10E32Cu;
    {
        const bool branch_taken_0x10e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E32Cu;
        // 0x10e330: 0x1225c0  sll         $a0, $s2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e32c) {
            ctx->pc = 0x10E390u;
            return;
        }
    }
    ctx->pc = 0x10E334u;
    // 0x10e334: 0x0  nop
    ctx->pc = 0x10e334u;
    // NOP
    ctx->pc = 0x10e338u;
}
