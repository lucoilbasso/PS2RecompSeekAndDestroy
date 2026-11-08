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

// Function: entry_00164ec8
// Address: 0x164ec8 - 0x164ee4
void entry_00164ec8_0x164ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164ec8_0x164ec8");
#endif

    ctx->pc = 0x164ec8u;

    // 0x164ec8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164ecc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164ECCu;
    {
        const bool branch_taken_0x164ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ECCu;
        // 0x164ed0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ecc) {
            ctx->pc = 0x164EE4u;
            return;
        }
    }
    ctx->pc = 0x164ED4u;
    // 0x164ed4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x164ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x164ed8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x164ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x164edc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x164edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x164ee0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x164ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x164ee4u;
}
