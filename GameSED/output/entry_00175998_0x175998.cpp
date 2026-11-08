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

// Function: entry_00175998
// Address: 0x175998 - 0x1759c8
void entry_00175998_0x175998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175998_0x175998");
#endif

    ctx->pc = 0x175998u;

label_175998:
    // 0x175998: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17599c: 0x0  nop
    ctx->pc = 0x17599cu;
    // NOP
    // 0x1759a0: 0x0  nop
    ctx->pc = 0x1759a0u;
    // NOP
    // 0x1759a4: 0x0  nop
    ctx->pc = 0x1759a4u;
    // NOP
    // 0x1759a8: 0x0  nop
    ctx->pc = 0x1759a8u;
    // NOP
    // 0x1759ac: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1759ACu;
    {
        const bool branch_taken_0x1759ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1759B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759ACu;
        // 0x1759b0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759ac) {
            ctx->pc = 0x175998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175998;
        }
    }
    ctx->pc = 0x1759B4u;
    // 0x1759b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1759b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1759b8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1759b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1759bc: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1759bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1759c0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1759c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1759c4: 0x0  nop
    ctx->pc = 0x1759c4u;
    // NOP
    ctx->pc = 0x1759c8u;
}
