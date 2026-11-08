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

// Function: entry_001292a4
// Address: 0x1292a4 - 0x1292f4
void entry_001292a4_0x1292a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001292a4_0x1292a4");
#endif

    ctx->pc = 0x1292a4u;

    // 0x1292a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1292a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1292a8: 0x2a820014  slti        $v0, $s4, 0x14
    ctx->pc = 0x1292a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1292ac: 0x1440ff1a  bnez        $v0, . + 4 + (-0xE6 << 2)
    ctx->pc = 0x1292ACu;
    {
        const bool branch_taken_0x1292ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1292B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292ACu;
        // 0x1292b0: 0x4618a500  add.s       $f20, $f20, $f24 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292ac) {
            ctx->pc = 0x128F18u;
            return;
        }
    }
    ctx->pc = 0x1292B4u;
    // 0x1292b4: 0x1a60000f  blez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1292B4u;
    {
        const bool branch_taken_0x1292b4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1292B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292B4u;
        // 0x1292b8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292b4) {
            ctx->pc = 0x1292F4u;
            return;
        }
    }
    ctx->pc = 0x1292BCu;
    // 0x1292bc: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1292bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1292c0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1292c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1292c4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1292c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1292c8: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x1292c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x1292cc: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x1292ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x1292d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1292d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1292d4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1292d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1292d8: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x1292d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x1292dc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1292dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1292e0: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x1292e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x1292e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1292e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1292e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1292e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1292ec: 0xffc30008  sd          $v1, 0x8($fp)
    ctx->pc = 0x1292ecu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 3));
    // 0x1292f0: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x1292f0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1292f4u;
}
