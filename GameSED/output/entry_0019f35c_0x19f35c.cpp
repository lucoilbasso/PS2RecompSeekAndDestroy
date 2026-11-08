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

// Function: entry_0019f35c
// Address: 0x19f35c - 0x19f378
void entry_0019f35c_0x19f35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f35c_0x19f35c");
#endif

    ctx->pc = 0x19f35cu;

    // 0x19f35c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f360: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19f360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19f364: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f368: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f36c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f370: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19F370u;
    {
        const bool branch_taken_0x19f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F370u;
        // 0x19f374: 0xac64fff0  sw          $a0, -0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f370) {
            ctx->pc = 0x19F3C8u;
            return;
        }
    }
    ctx->pc = 0x19F378u;
}
