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

// Function: entry_0014a738
// Address: 0x14a738 - 0x14a758
void entry_0014a738_0x14a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a738_0x14a738");
#endif

    ctx->pc = 0x14a738u;

    // 0x14a738: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x14a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14a73c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a740: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a744: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x14A744u;
    {
        const bool branch_taken_0x14a744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a744) {
            ctx->pc = 0x14A748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A744u;
            // 0x14a748: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A798u;
            return;
        }
    }
    ctx->pc = 0x14A74Cu;
    // 0x14a74c: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x14a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x14a750: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x14a750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x14a754: 0x2c480080  sltiu       $t0, $v0, 0x80
    ctx->pc = 0x14a754u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    ctx->pc = 0x14a758u;
}
