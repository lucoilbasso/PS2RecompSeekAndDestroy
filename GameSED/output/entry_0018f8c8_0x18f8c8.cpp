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

// Function: entry_0018f8c8
// Address: 0x18f8c8 - 0x18f8ec
void entry_0018f8c8_0x18f8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f8c8_0x18f8c8");
#endif

    ctx->pc = 0x18f8c8u;

    // 0x18f8c8: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x18f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x18f8cc: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x18f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x18f8d0: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F8D0u;
    {
        const bool branch_taken_0x18f8d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8D0u;
        // 0x18f8d4: 0xa6020158  sh          $v0, 0x158($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8d0) {
            ctx->pc = 0x18F8ECu;
            return;
        }
    }
    ctx->pc = 0x18F8D8u;
    // 0x18f8d8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18f8dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f8e0: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x18f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x18f8e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18f8e8: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x18f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    ctx->pc = 0x18f8ecu;
}
