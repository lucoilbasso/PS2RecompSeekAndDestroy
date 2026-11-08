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

// Function: entry_00107a24
// Address: 0x107a24 - 0x107a48
void entry_00107a24_0x107a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a24_0x107a24");
#endif

    ctx->pc = 0x107a24u;

    // 0x107a24: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x107a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x107a28: 0x54620043  bnel        $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x107A28u;
    {
        const bool branch_taken_0x107a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107a28) {
            ctx->pc = 0x107A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A28u;
            // 0x107a2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            return;
        }
    }
    ctx->pc = 0x107A30u;
    // 0x107a30: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x107a34: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107a34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107a38: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x107a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x107a3c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x107A3Cu;
    {
        const bool branch_taken_0x107a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A3Cu;
        // 0x107a40: 0x34640100  ori         $a0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a3c) {
            ctx->pc = 0x107AC0u;
            return;
        }
    }
    ctx->pc = 0x107A44u;
    // 0x107a44: 0x0  nop
    ctx->pc = 0x107a44u;
    // NOP
    ctx->pc = 0x107a48u;
}
