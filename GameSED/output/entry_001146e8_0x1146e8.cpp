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

// Function: entry_001146e8
// Address: 0x1146e8 - 0x11470c
void entry_001146e8_0x1146e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001146e8_0x1146e8");
#endif

    ctx->pc = 0x1146e8u;

    // 0x1146e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1146e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1146ec: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1146ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1146f0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1146f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1146f4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1146f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1146f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1146F8u;
    {
        const bool branch_taken_0x1146f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146F8u;
        // 0x1146fc: 0x8c460020  lw          $a2, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146f8) {
            ctx->pc = 0x114718u;
            return;
        }
    }
    ctx->pc = 0x114700u;
    // 0x114700: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x114700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x114704: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x114704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x114708: 0x8c420730  lw          $v0, 0x730($v0)
    ctx->pc = 0x114708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1840)));
    ctx->pc = 0x11470cu;
}
