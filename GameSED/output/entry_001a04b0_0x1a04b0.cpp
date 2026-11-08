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

// Function: entry_001a04b0
// Address: 0x1a04b0 - 0x1a04e8
void entry_001a04b0_0x1a04b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a04b0_0x1a04b0");
#endif

    ctx->pc = 0x1a04b0u;

    // 0x1a04b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A04B0u;
    {
        const bool branch_taken_0x1a04b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04B0u;
        // 0x1a04b4: 0x8f839170  lw          $v1, -0x6E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04b0) {
            ctx->pc = 0x1A0510u;
            return;
        }
    }
    ctx->pc = 0x1A04B8u;
    // 0x1a04b8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1a04b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a04bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a04bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a04c0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1a04c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a04c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a04c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a04c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a04cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a04ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a04d0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1a04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1a04d4: 0x1422006  srlv        $a0, $v0, $t2
    ctx->pc = 0x1a04d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x1a04d8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1a04d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1a04dc: 0xaf839170  sw          $v1, -0x6E90($gp)
    ctx->pc = 0x1a04dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 3));
    // 0x1a04e0: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x1a04e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a04e4: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x1a04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x1a04e8u;
}
