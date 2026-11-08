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

// Function: entry_0014d7ec
// Address: 0x14d7ec - 0x14d814
void entry_0014d7ec_0x14d7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d7ec_0x14d7ec");
#endif

    ctx->pc = 0x14d7ecu;

    // 0x14d7ec: 0x2643075c  addiu       $v1, $s2, 0x75C
    ctx->pc = 0x14d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1884));
    // 0x14d7f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d7f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D7F4u;
    {
        const bool branch_taken_0x14d7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7F4u;
        // 0x14d7f8: 0x2644079c  addiu       $a0, $s2, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7f4) {
            ctx->pc = 0x14D814u;
            return;
        }
    }
    ctx->pc = 0x14D7FCu;
    // 0x14d7fc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x14d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14d800: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x14d800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x14d804: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14d804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d808: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x14d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14d80c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14d80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14d810: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x14d810u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d814u;
}
