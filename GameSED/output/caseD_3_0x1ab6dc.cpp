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

// Function: caseD_3
// Address: 0x1ab6dc - 0x1ab704
void caseD_3_0x1ab6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ab6dc");
#endif

    ctx->pc = 0x1ab6dcu;

    // 0x1ab6dc: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB6DCu;
    {
        const bool branch_taken_0x1ab6dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6DCu;
        // 0x1ab6e0: 0x31230fff  andi        $v1, $t1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6dc) {
            ctx->pc = 0x1AB704u;
            return;
        }
    }
    ctx->pc = 0x1AB6E4u;
    // 0x1ab6e4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1ab6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ab6e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab6ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ab6ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ab6f0: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x1ab6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1ab6f4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1ab6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab6f8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1ab6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1ab6fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ab6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ab700: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ab700u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x1ab704u;
}
