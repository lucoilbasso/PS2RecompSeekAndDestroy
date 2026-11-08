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

// Function: entry_001494c0
// Address: 0x1494c0 - 0x149500
void entry_001494c0_0x1494c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001494c0_0x1494c0");
#endif

    ctx->pc = 0x1494c0u;

    // 0x1494c0: 0x2842ffc0  slti        $v0, $v0, -0x40
    ctx->pc = 0x1494c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967232) ? 1 : 0);
    // 0x1494c4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1494C4u;
    {
        const bool branch_taken_0x1494c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1494c4) {
            ctx->pc = 0x1494C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1494C4u;
            // 0x1494c8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149500u;
            return;
        }
    }
    ctx->pc = 0x1494CCu;
    // 0x1494cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1494ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1494d0: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1494d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1494d4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1494D4u;
    {
        const bool branch_taken_0x1494d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1494d4) {
            ctx->pc = 0x1494D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1494D4u;
            // 0x1494d8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149500u;
            return;
        }
    }
    ctx->pc = 0x1494DCu;
    // 0x1494dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1494dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1494e0: 0x2842ffc0  slti        $v0, $v0, -0x40
    ctx->pc = 0x1494e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967232) ? 1 : 0);
    // 0x1494e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1494E4u;
    {
        const bool branch_taken_0x1494e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1494e4) {
            ctx->pc = 0x1494E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1494E4u;
            // 0x1494e8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149500u;
            return;
        }
    }
    ctx->pc = 0x1494ECu;
    // 0x1494ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1494f0: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1494f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1494f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1494F4u;
    {
        const bool branch_taken_0x1494f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1494F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494F4u;
        // 0x1494f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494f4) {
            ctx->pc = 0x149514u;
            return;
        }
    }
    ctx->pc = 0x1494FCu;
    // 0x1494fc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1494fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x149500u;
}
