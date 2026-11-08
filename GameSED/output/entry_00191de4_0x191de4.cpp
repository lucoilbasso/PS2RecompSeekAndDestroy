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

// Function: entry_00191de4
// Address: 0x191de4 - 0x191e30
void entry_00191de4_0x191de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191de4_0x191de4");
#endif

    ctx->pc = 0x191de4u;

    // 0x191de4: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x191de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x191de8: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x191de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x191dec: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x191decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x191df0: 0x240504e2  addiu       $a1, $zero, 0x4E2
    ctx->pc = 0x191df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x191df4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x191df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x191df8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191dfc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x191dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x191e00: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x191e00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191e04: 0x24f00010  addiu       $s0, $a3, 0x10
    ctx->pc = 0x191e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x191e08: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x191e08u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x191e0c: 0x44a00a  movz        $s4, $v0, $a0
    ctx->pc = 0x191e0cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x191e10: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x191e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
    // 0x191e14: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x191e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191e18: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x191e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x191e1c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x191e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191e20: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x191E20u;
    {
        const bool branch_taken_0x191e20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E20u;
        // 0x191e24: 0xdc520168  ld          $s2, 0x168($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e20) {
            ctx->pc = 0x191E30u;
            return;
        }
    }
    ctx->pc = 0x191E28u;
    // 0x191e28: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x191e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x191e2c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x191e2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->pc = 0x191e30u;
}
