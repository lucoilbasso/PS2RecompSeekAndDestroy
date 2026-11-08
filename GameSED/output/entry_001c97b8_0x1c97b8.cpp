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

// Function: entry_001c97b8
// Address: 0x1c97b8 - 0x1c97f8
void entry_001c97b8_0x1c97b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c97b8_0x1c97b8");
#endif

    ctx->pc = 0x1c97b8u;

    // 0x1c97b8: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1c97b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c97bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C97BCu;
    {
        const bool branch_taken_0x1c97bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97BCu;
        // 0x1c97c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97bc) {
            ctx->pc = 0x1C97F8u;
            return;
        }
    }
    ctx->pc = 0x1C97C4u;
    // 0x1c97c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c97c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c97c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c97cc: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1c97ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1c97d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c97d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c97d4: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c97d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c97d8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c97d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c97dc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1c97dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c97e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c97e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c97e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c97e8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c97e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c97ec: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c97ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c97f0: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1C97F0u;
    {
        const bool branch_taken_0x1c97f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97F0u;
        // 0x1c97f4: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97f0) {
            ctx->pc = 0x1C9A34u;
            return;
        }
    }
    ctx->pc = 0x1C97F8u;
}
