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

// Function: entry_0014dbd0
// Address: 0x14dbd0 - 0x14dbf4
void entry_0014dbd0_0x14dbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dbd0_0x14dbd0");
#endif

    ctx->pc = 0x14dbd0u;

    // 0x14dbd0: 0x2624075c  addiu       $a0, $s1, 0x75C
    ctx->pc = 0x14dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1884));
    // 0x14dbd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14dbd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DBD8u;
    {
        const bool branch_taken_0x14dbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBD8u;
        // 0x14dbdc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbd8) {
            ctx->pc = 0x14DBF4u;
            return;
        }
    }
    ctx->pc = 0x14DBE0u;
    // 0x14dbe0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14dbe4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14dbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14dbe8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14dbec: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x14dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x14dbf0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x14dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x14dbf4u;
}
