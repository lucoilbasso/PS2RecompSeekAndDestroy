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

// Function: entry_00165ce0
// Address: 0x165ce0 - 0x165d00
void entry_00165ce0_0x165ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165ce0_0x165ce0");
#endif

    ctx->pc = 0x165ce0u;

    // 0x165ce0: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x165CE0u;
    {
        const bool branch_taken_0x165ce0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x165CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CE0u;
        // 0x165ce4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ce0) {
            ctx->pc = 0x165D00u;
            return;
        }
    }
    ctx->pc = 0x165CE8u;
    // 0x165ce8: 0x8e451264  lw          $a1, 0x1264($s2)
    ctx->pc = 0x165ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4708)));
    // 0x165cec: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x165cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x165cf0: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x165cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x165cf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x165CF4u;
    {
        const bool branch_taken_0x165cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CF4u;
        // 0x165cf8: 0x8ca3072c  lw          $v1, 0x72C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cf4) {
            ctx->pc = 0x165D18u;
            return;
        }
    }
    ctx->pc = 0x165CFCu;
    // 0x165cfc: 0x0  nop
    ctx->pc = 0x165cfcu;
    // NOP
    ctx->pc = 0x165d00u;
}
