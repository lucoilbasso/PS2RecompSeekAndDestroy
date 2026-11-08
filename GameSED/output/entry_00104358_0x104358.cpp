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

// Function: entry_00104358
// Address: 0x104358 - 0x10436c
void entry_00104358_0x104358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104358_0x104358");
#endif

    ctx->pc = 0x104358u;

    // 0x104358: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x104358u;
    {
        const bool branch_taken_0x104358 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104358u;
        // 0x10435c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104358) {
            ctx->pc = 0x104374u;
            return;
        }
    }
    ctx->pc = 0x104360u;
    // 0x104360: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x104360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x104364: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x104364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x104368: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x104368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x10436cu;
}
