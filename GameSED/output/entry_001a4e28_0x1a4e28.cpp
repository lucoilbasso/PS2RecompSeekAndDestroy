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

// Function: entry_001a4e28
// Address: 0x1a4e28 - 0x1a4e3c
void entry_001a4e28_0x1a4e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4e28_0x1a4e28");
#endif

    ctx->pc = 0x1a4e28u;

    // 0x1a4e28: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4E28u;
    {
        const bool branch_taken_0x1a4e28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e28) {
            ctx->pc = 0x1A4E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4E28u;
            // 0x1a4e2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4E40u;
            return;
        }
    }
    ctx->pc = 0x1A4E30u;
    // 0x1a4e30: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a4e30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a4e34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a4e38: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a4e38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a4e3cu;
}
