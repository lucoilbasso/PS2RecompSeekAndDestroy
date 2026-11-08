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

// Function: entry_00129c80
// Address: 0x129c80 - 0x129cc8
void entry_00129c80_0x129c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129c80_0x129c80");
#endif

    ctx->pc = 0x129c80u;

    // 0x129c80: 0x1ac00011  blez        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x129C80u;
    {
        const bool branch_taken_0x129c80 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x129C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C80u;
        // 0x129c84: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c80) {
            ctx->pc = 0x129CC8u;
            return;
        }
    }
    ctx->pc = 0x129C88u;
    // 0x129c88: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x129c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129c8c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x129c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x129c90: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x129c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x129c94: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x129c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x129c98: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x129c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x129c9c: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x129c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x129ca0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x129ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x129ca4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x129ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x129ca8: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x129ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x129cac: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x129cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129cb0: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x129cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x129cb4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x129cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x129cb8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x129cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x129cbc: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x129cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x129cc0: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x129cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x129cc4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x129cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129cc8u;
}
