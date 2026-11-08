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

// Function: entry_001291d0
// Address: 0x1291d0 - 0x129218
void entry_001291d0_0x1291d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001291d0_0x1291d0");
#endif

    ctx->pc = 0x1291d0u;

    // 0x1291d0: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1291D0u;
    {
        const bool branch_taken_0x1291d0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1291D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291D0u;
        // 0x1291d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291d0) {
            ctx->pc = 0x129218u;
            return;
        }
    }
    ctx->pc = 0x1291D8u;
    // 0x1291d8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1291d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1291dc: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1291dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1291e0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1291e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1291e4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1291e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1291e8: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x1291e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x1291ec: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x1291ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x1291f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1291f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1291f4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1291f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1291f8: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x1291f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x1291fc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1291fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x129200: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x129200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x129204: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x129204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x129208: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x129208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12920c: 0xffc30008  sd          $v1, 0x8($fp)
    ctx->pc = 0x12920cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 3));
    // 0x129210: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x129210u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x129214: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x129214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129218u;
}
