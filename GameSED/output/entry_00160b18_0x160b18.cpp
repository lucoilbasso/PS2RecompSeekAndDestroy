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

// Function: entry_00160b18
// Address: 0x160b18 - 0x160b40
void entry_00160b18_0x160b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b18_0x160b18");
#endif

    ctx->pc = 0x160b18u;

    // 0x160b18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x160b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x160b20: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x160b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x160b24: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x160b24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x160b28: 0xa606001c  sh          $a2, 0x1C($s0)
    ctx->pc = 0x160b28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x160b2c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x160b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x160b30: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x160b30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x160b34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x160B34u;
    {
        const bool branch_taken_0x160b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B34u;
        // 0x160b38: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b34) {
            ctx->pc = 0x160B40u;
            return;
        }
    }
    ctx->pc = 0x160B3Cu;
    // 0x160b3c: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x160b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x160b40u;
}
