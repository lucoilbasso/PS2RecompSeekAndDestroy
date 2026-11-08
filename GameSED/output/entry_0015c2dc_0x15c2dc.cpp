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

// Function: entry_0015c2dc
// Address: 0x15c2dc - 0x15c2f0
void entry_0015c2dc_0x15c2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c2dc_0x15c2dc");
#endif

    ctx->pc = 0x15c2dcu;

    // 0x15c2dc: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x15c2dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15c2e0: 0xa7a50000  sh          $a1, 0x0($sp)
    ctx->pc = 0x15c2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x15c2e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C2E4u;
    {
        const bool branch_taken_0x15c2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2E4u;
        // 0x15c2e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2e4) {
            ctx->pc = 0x15C30Cu;
            return;
        }
    }
    ctx->pc = 0x15C2ECu;
    // 0x15c2ec: 0x0  nop
    ctx->pc = 0x15c2ecu;
    // NOP
    ctx->pc = 0x15c2f0u;
}
