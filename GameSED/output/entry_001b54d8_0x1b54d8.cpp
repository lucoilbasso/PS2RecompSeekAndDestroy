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

// Function: entry_001b54d8
// Address: 0x1b54d8 - 0x1b5500
void entry_001b54d8_0x1b54d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b54d8_0x1b54d8");
#endif

    ctx->pc = 0x1b54d8u;

    // 0x1b54d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b54d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54dc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b54dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b54e0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B54E0u;
    {
        const bool branch_taken_0x1b54e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54E0u;
        // 0x1b54e4: 0xa2420014  sb          $v0, 0x14($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54e0) {
            ctx->pc = 0x1B552Cu;
            return;
        }
    }
    ctx->pc = 0x1B54E8u;
    // 0x1b54e8: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x1b54e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b54ec: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b54ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b54f0: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b54f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b54f4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b54f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b54f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b54f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b54fc: 0x0  nop
    ctx->pc = 0x1b54fcu;
    // NOP
    ctx->pc = 0x1b5500u;
}
