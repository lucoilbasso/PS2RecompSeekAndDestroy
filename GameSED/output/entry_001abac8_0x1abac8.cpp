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

// Function: entry_001abac8
// Address: 0x1abac8 - 0x1abae8
void entry_001abac8_0x1abac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abac8_0x1abac8");
#endif

    ctx->pc = 0x1abac8u;

    // 0x1abac8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1abac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1abacc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1abaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1abad0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ABAD0u;
    {
        const bool branch_taken_0x1abad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAD0u;
        // 0x1abad4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abad0) {
            ctx->pc = 0x1ABB04u;
            return;
        }
    }
    ctx->pc = 0x1ABAD8u;
    // 0x1abad8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1abad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1abadc: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x1abadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x1abae0: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x1abae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x1abae4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1abae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1abae8u;
}
