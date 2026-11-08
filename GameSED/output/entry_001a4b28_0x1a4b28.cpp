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

// Function: entry_001a4b28
// Address: 0x1a4b28 - 0x1a4b3c
void entry_001a4b28_0x1a4b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4b28_0x1a4b28");
#endif

    ctx->pc = 0x1a4b28u;

    // 0x1a4b28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4B28u;
    {
        const bool branch_taken_0x1a4b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b28) {
            ctx->pc = 0x1A4B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4B28u;
            // 0x1a4b2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4B40u;
            return;
        }
    }
    ctx->pc = 0x1A4B30u;
    // 0x1a4b30: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a4b30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a4b34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a4b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a4b38: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a4b38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a4b3cu;
}
