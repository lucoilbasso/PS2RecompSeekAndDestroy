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

// Function: entry_0014a704
// Address: 0x14a704 - 0x14a738
void entry_0014a704_0x14a704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a704_0x14a704");
#endif

    ctx->pc = 0x14a704u;

    // 0x14a704: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14a704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14a708: 0x248a0010  addiu       $t2, $a0, 0x10
    ctx->pc = 0x14a708u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x14a70c: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x14a70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x14a710: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x14a710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x14a714: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x14a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x14a718: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x14a718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x14a71c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14A71Cu;
    {
        const bool branch_taken_0x14a71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A71Cu;
        // 0x14a720: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a71c) {
            ctx->pc = 0x14A7A8u;
            return;
        }
    }
    ctx->pc = 0x14A724u;
    // 0x14a724: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x14a724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x14a728: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x14a728u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x14a72c: 0x25297820  addiu       $t1, $t1, 0x7820
    ctx->pc = 0x14a72cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30752));
    // 0x14a730: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x14a730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x14a734: 0x0  nop
    ctx->pc = 0x14a734u;
    // NOP
    ctx->pc = 0x14a738u;
}
