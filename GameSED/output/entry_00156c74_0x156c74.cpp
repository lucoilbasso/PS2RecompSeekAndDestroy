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

// Function: entry_00156c74
// Address: 0x156c74 - 0x156cc8
void entry_00156c74_0x156c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156c74_0x156c74");
#endif

    ctx->pc = 0x156c74u;

    // 0x156c74: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x156c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x156c78: 0x246735e0  addiu       $a3, $v1, 0x35E0
    ctx->pc = 0x156c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 13792));
    // 0x156c7c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x156c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2635ECu));
    // 0x156c80: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x156c80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2635E4u));
    // 0x156c84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x156c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156c88: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x156c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x156c8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x156c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156c90: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x156c90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x156c94: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x156C94u;
    {
        const bool branch_taken_0x156c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C94u;
        // 0x156c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c94) {
            ctx->pc = 0x156D28u;
            return;
        }
    }
    ctx->pc = 0x156C9Cu;
    // 0x156c9c: 0x90a60003  lbu         $a2, 0x3($a1)
    ctx->pc = 0x156c9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x156ca0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x156ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x156ca4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x156CA4u;
    {
        const bool branch_taken_0x156ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CA4u;
        // 0x156ca8: 0x2c4400fa  sltiu       $a0, $v0, 0xFA (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)250) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ca4) {
            ctx->pc = 0x156CE8u;
            return;
        }
    }
    ctx->pc = 0x156CACu;
    // 0x156cac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156cb0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x156cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x156cb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x156cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x156cb8: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x156cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x156cbc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x156cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x156cc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x156cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x156cc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x156cc8u;
}
