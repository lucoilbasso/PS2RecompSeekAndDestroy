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

// Function: entry_001c8850
// Address: 0x1c8850 - 0x1c88bc
void entry_001c8850_0x1c8850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8850_0x1c8850");
#endif

    ctx->pc = 0x1c8850u;

    // 0x1c8850: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c8850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8854: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c8854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c8858: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c885c: 0x1e47824  and         $t7, $t7, $a0
    ctx->pc = 0x1c885cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 4));
    // 0x1c8860: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x1c8860u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x1c8864: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1c8864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1c8868: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1c8868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1c886c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1c886cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1c8870: 0x1e57824  and         $t7, $t7, $a1
    ctx->pc = 0x1c8870u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
    // 0x1c8874: 0x13000011  beqz        $t8, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C8874u;
    {
        const bool branch_taken_0x1c8874 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8874u;
        // 0x1c8878: 0x1e21825  or          $v1, $t7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8874) {
            ctx->pc = 0x1C88BCu;
            return;
        }
    }
    ctx->pc = 0x1C887Cu;
    // 0x1c887c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1c887cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8880: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c8880u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c8884: 0x1c47024  and         $t6, $t6, $a0
    ctx->pc = 0x1c8884u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
    // 0x1c8888: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c8888u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c888c: 0x3203f  dsra32      $a0, $v1, 0
    ctx->pc = 0x1c888cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c8890: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c8890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8894: 0x42023  negu        $a0, $a0
    ctx->pc = 0x1c8894u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1c8898: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c889c: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x1c889cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x1c88a0: 0xe183c  dsll32      $v1, $t6, 0
    ctx->pc = 0x1c88a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1c88a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c88a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c88a8: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x1c88a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
    // 0x1c88ac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1c88acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c88b0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1c88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c88b4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c88b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c88b8: 0x1c41825  or          $v1, $t6, $a0
    ctx->pc = 0x1c88b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
    ctx->pc = 0x1c88bcu;
}
