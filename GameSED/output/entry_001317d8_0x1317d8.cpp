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

// Function: entry_001317d8
// Address: 0x1317d8 - 0x1317f0
void entry_001317d8_0x1317d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001317d8_0x1317d8");
#endif

    ctx->pc = 0x1317d8u;

    // 0x1317d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1317d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1317dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1317dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1317e0: 0x10430048  beq         $v0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1317E0u;
    {
        const bool branch_taken_0x1317e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1317E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317E0u;
        // 0x1317e4: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317e0) {
            ctx->pc = 0x131904u;
            return;
        }
    }
    ctx->pc = 0x1317E8u;
    // 0x1317e8: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x1317e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1317ec: 0x0  nop
    ctx->pc = 0x1317ecu;
    // NOP
    ctx->pc = 0x1317f0u;
}
