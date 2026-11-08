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

// Function: entry_0015ffa4
// Address: 0x15ffa4 - 0x160000
void entry_0015ffa4_0x15ffa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ffa4_0x15ffa4");
#endif

    ctx->pc = 0x15ffa4u;

    // 0x15ffa4: 0x241e003a  addiu       $fp, $zero, 0x3A
    ctx->pc = 0x15ffa4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x15ffa8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x15ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x15ffac: 0x8e640f20  lw          $a0, 0xF20($s3)
    ctx->pc = 0x15ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3872)));
    // 0x15ffb0: 0x45f00b  movn        $fp, $v0, $a1
    ctx->pc = 0x15ffb0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
    // 0x15ffb4: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x15ffb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x15ffb8: 0x3de2818  mult        $a1, $fp, $fp
    ctx->pc = 0x15ffb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15ffbc: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x15ffbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x15ffc0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x15ffc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x15ffc4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x15ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x15ffc8: 0x146000ad  bnez        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x15FFC8u;
    {
        const bool branch_taken_0x15ffc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFC8u;
        // 0x15ffcc: 0xa4f00b  movn        $fp, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffc8) {
            ctx->pc = 0x160280u;
            return;
        }
    }
    ctx->pc = 0x15FFD0u;
    // 0x15ffd0: 0x3c170020  lui         $s7, 0x20
    ctx->pc = 0x15ffd0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32 << 16));
    // 0x15ffd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15ffd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffd8: 0x26f7bc50  addiu       $s7, $s7, -0x43B0
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949968));
    // 0x15ffdc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x15ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x15ffe0: 0x8ee20400  lw          $v0, 0x400($s7)
    ctx->pc = 0x15ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x15ffe4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15ffe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15ffe8: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x15FFE8u;
    {
        const bool branch_taken_0x15ffe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFE8u;
        // 0x15ffec: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffe8) {
            ctx->pc = 0x160284u;
            return;
        }
    }
    ctx->pc = 0x15FFF0u;
    // 0x15fff0: 0x24050f30  addiu       $a1, $zero, 0xF30
    ctx->pc = 0x15fff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
    // 0x15fff4: 0x24160082  addiu       $s6, $zero, 0x82
    ctx->pc = 0x15fff4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x15fff8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x15fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x15fffc: 0x241500fa  addiu       $s5, $zero, 0xFA
    ctx->pc = 0x15fffcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x160000u;
}
