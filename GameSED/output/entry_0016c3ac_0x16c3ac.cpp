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

// Function: entry_0016c3ac
// Address: 0x16c3ac - 0x16c3d8
void entry_0016c3ac_0x16c3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c3ac_0x16c3ac");
#endif

    ctx->pc = 0x16c3acu;

    // 0x16c3ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c3b0: 0x26230270  addiu       $v1, $s1, 0x270
    ctx->pc = 0x16c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    // 0x16c3b4: 0xae240260  sw          $a0, 0x260($s1)
    ctx->pc = 0x16c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 4));
    // 0x16c3b8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x16c3b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16c3bc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16c3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16c3c0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16c3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c3c8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16c3cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16C3CCu;
    {
        const bool branch_taken_0x16c3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3CCu;
        // 0x16c3d0: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3cc) {
            ctx->pc = 0x16C434u;
            return;
        }
    }
    ctx->pc = 0x16C3D4u;
    // 0x16c3d4: 0x0  nop
    ctx->pc = 0x16c3d4u;
    // NOP
    ctx->pc = 0x16c3d8u;
}
