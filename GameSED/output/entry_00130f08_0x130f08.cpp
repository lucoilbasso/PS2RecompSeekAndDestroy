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

// Function: entry_00130f08
// Address: 0x130f08 - 0x130f20
void entry_00130f08_0x130f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130f08_0x130f08");
#endif

    ctx->pc = 0x130f08u;

    // 0x130f08: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x130f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x130f0c: 0x544a000f  bnel        $v0, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x130F0Cu;
    {
        const bool branch_taken_0x130f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x130f0c) {
            ctx->pc = 0x130F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F0Cu;
            // 0x130f10: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F4Cu;
            return;
        }
    }
    ctx->pc = 0x130F14u;
    // 0x130f14: 0x8c8201f8  lw          $v0, 0x1F8($a0)
    ctx->pc = 0x130f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x130f18: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x130f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x130f1c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x130f1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130f20u;
}
