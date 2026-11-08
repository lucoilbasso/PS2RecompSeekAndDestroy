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

// Function: entry_001c8c70
// Address: 0x1c8c70 - 0x1c8cb0
void entry_001c8c70_0x1c8c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8c70_0x1c8c70");
#endif

    ctx->pc = 0x1c8c70u;

    // 0x1c8c70: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1c8c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8c74: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C8C74u;
    {
        const bool branch_taken_0x1c8c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C74u;
        // 0x1c8c78: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c74) {
            ctx->pc = 0x1C8CB0u;
            return;
        }
    }
    ctx->pc = 0x1C8C7Cu;
    // 0x1c8c7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c8c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8c80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8c84: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1c8c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1c8c88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8c8c: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8c8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8c90: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c8c90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c8c94: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1c8c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c8c98: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8c9c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c8c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c8ca0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8ca0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8ca4: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c8ca4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c8ca8: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1C8CA8u;
    {
        const bool branch_taken_0x1c8ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CA8u;
        // 0x1c8cac: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ca8) {
            ctx->pc = 0x1C8EECu;
            return;
        }
    }
    ctx->pc = 0x1C8CB0u;
}
