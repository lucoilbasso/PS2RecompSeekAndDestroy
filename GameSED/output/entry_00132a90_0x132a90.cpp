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

// Function: entry_00132a90
// Address: 0x132a90 - 0x132ad0
void entry_00132a90_0x132a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a90_0x132a90");
#endif

    ctx->pc = 0x132a90u;

    // 0x132a90: 0x27828a30  addiu       $v0, $gp, -0x75D0
    ctx->pc = 0x132a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937136));
    // 0x132a94: 0x12230028  beq         $s1, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x132A94u;
    {
        const bool branch_taken_0x132a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x132A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A94u;
        // 0x132a98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a94) {
            ctx->pc = 0x132B38u;
            return;
        }
    }
    ctx->pc = 0x132A9Cu;
    // 0x132a9c: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x132a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x132aa0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x132AA0u;
    {
        const bool branch_taken_0x132aa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x132AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AA0u;
        // 0x132aa4: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132aa0) {
            ctx->pc = 0x132AD0u;
            return;
        }
    }
    ctx->pc = 0x132AA8u;
    // 0x132aa8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x132aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x132aac: 0x24042118  addiu       $a0, $zero, 0x2118
    ctx->pc = 0x132aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x132ab0: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x132ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132ab4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x132ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x132ab8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x132ab8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132abc: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x132ABCu;
    {
        const bool branch_taken_0x132abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x132AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132ABCu;
        // 0x132ac0: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132abc) {
            ctx->pc = 0x132AE8u;
            return;
        }
    }
    ctx->pc = 0x132AC4u;
    // 0x132ac4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x132AC4u;
    {
        const bool branch_taken_0x132ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AC4u;
        // 0x132ac8: 0x24420260  addiu       $v0, $v0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ac4) {
            ctx->pc = 0x132B38u;
            return;
        }
    }
    ctx->pc = 0x132ACCu;
    // 0x132acc: 0x0  nop
    ctx->pc = 0x132accu;
    // NOP
    ctx->pc = 0x132ad0u;
}
