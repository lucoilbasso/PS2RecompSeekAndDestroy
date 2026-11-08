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

// Function: entry_001c8c38
// Address: 0x1c8c38 - 0x1c8c70
void entry_001c8c38_0x1c8c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8c38_0x1c8c38");
#endif

    ctx->pc = 0x1c8c38u;

    // 0x1c8c38: 0x132000ac  beqz        $t9, . + 4 + (0xAC << 2)
    ctx->pc = 0x1C8C38u;
    {
        const bool branch_taken_0x1c8c38 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C38u;
        // 0x1c8c3c: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c38) {
            ctx->pc = 0x1C8EECu;
            return;
        }
    }
    ctx->pc = 0x1C8C40u;
    // 0x1c8c40: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x1c8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8c44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8c48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8c4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c8c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8c50: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8c50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8c54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8c58: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8c5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c8c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c8c60: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c8c60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c8c64: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1C8C64u;
    {
        const bool branch_taken_0x1c8c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C64u;
        // 0x1c8c68: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c64) {
            ctx->pc = 0x1C8EE8u;
            return;
        }
    }
    ctx->pc = 0x1C8C6Cu;
    // 0x1c8c6c: 0x0  nop
    ctx->pc = 0x1c8c6cu;
    // NOP
    ctx->pc = 0x1c8c70u;
}
