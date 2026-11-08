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

// Function: entry_001495c0
// Address: 0x1495c0 - 0x1495e0
void entry_001495c0_0x1495c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001495c0_0x1495c0");
#endif

    ctx->pc = 0x1495c0u;

    // 0x1495c0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1495c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1495c4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1495c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1495c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1495c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1495cc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1495CCu;
    {
        const bool branch_taken_0x1495cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1495cc) {
            ctx->pc = 0x1495D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1495CCu;
            // 0x1495d0: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149620u;
            return;
        }
    }
    ctx->pc = 0x1495D4u;
    // 0x1495d4: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x1495d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1495d8: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x1495d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1495dc: 0x2c480080  sltiu       $t0, $v0, 0x80
    ctx->pc = 0x1495dcu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    ctx->pc = 0x1495e0u;
}
