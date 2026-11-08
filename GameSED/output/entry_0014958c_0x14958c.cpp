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

// Function: entry_0014958c
// Address: 0x14958c - 0x1495c0
void entry_0014958c_0x14958c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014958c_0x14958c");
#endif

    ctx->pc = 0x14958cu;

    // 0x14958c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x14958cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x149590: 0x24aa0010  addiu       $t2, $a1, 0x10
    ctx->pc = 0x149590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x149594: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x149594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x149598: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x149598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x14959c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x14959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1495a0: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1495a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1495a4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1495A4u;
    {
        const bool branch_taken_0x1495a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1495A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495A4u;
        // 0x1495a8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495a4) {
            ctx->pc = 0x149630u;
            return;
        }
    }
    ctx->pc = 0x1495ACu;
    // 0x1495ac: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x1495acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x1495b0: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x1495b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x1495b4: 0x25297820  addiu       $t1, $t1, 0x7820
    ctx->pc = 0x1495b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30752));
    // 0x1495b8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1495b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1495bc: 0x0  nop
    ctx->pc = 0x1495bcu;
    // NOP
    ctx->pc = 0x1495c0u;
}
