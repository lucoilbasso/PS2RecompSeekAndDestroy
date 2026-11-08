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

// Function: entry_0012d948
// Address: 0x12d948 - 0x12d96c
void entry_0012d948_0x12d948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d948_0x12d948");
#endif

    ctx->pc = 0x12d948u;

    // 0x12d948: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x12d948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x12d94c: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12d950: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12d950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12d954: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D954u;
    {
        const bool branch_taken_0x12d954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d954) {
            ctx->pc = 0x12D958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D954u;
            // 0x12d958: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D96Cu;
            return;
        }
    }
    ctx->pc = 0x12D95Cu;
    // 0x12d95c: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x12d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x12d960: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x12d960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d964: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12d964u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d968: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x12d96cu;
}
