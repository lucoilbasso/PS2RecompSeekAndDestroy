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

// Function: caseD_2
// Address: 0x1079a8 - 0x1079d8
void caseD_2_0x1079a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1079a8");
#endif

    ctx->pc = 0x1079a8u;

    // 0x1079a8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1079a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1079ac: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1079acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1079b0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1079B0u;
    {
        const bool branch_taken_0x1079b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1079B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079B0u;
        // 0x1079b4: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079b0) {
            ctx->pc = 0x1079D8u;
            return;
        }
    }
    ctx->pc = 0x1079B8u;
    // 0x1079b8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1079b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1079bc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1079bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1079c0: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x1079c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x1079c4: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x1079c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1079c8: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x1079c8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1079cc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1079ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1079d0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1079d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1079d4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x1079d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->pc = 0x1079d8u;
}
