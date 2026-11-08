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

// Function: entry_00132ad0
// Address: 0x132ad0 - 0x132ae8
void entry_00132ad0_0x132ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132ad0_0x132ad0");
#endif

    ctx->pc = 0x132ad0u;

    // 0x132ad0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x132AD0u;
    {
        const bool branch_taken_0x132ad0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x132AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AD0u;
        // 0x132ad4: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ad0) {
            ctx->pc = 0x132AE8u;
            return;
        }
    }
    ctx->pc = 0x132AD8u;
    // 0x132ad8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x132ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x132adc: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x132adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132ae0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x132AE0u;
    {
        const bool branch_taken_0x132ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AE0u;
        // 0x132ae4: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ae0) {
            ctx->pc = 0x132B34u;
            return;
        }
    }
    ctx->pc = 0x132AE8u;
}
