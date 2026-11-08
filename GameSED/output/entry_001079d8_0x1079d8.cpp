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

// Function: entry_001079d8
// Address: 0x1079d8 - 0x1079fc
void entry_001079d8_0x1079d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001079d8_0x1079d8");
#endif

    ctx->pc = 0x1079d8u;

    // 0x1079d8: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1079D8u;
    {
        const bool branch_taken_0x1079d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1079d8) {
            ctx->pc = 0x1079DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1079D8u;
            // 0x1079dc: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1079FCu;
            return;
        }
    }
    ctx->pc = 0x1079E0u;
    // 0x1079e0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1079e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1079e4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1079e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1079e8: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x1079e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x1079ec: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x1079ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1079f0: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x1079f0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1079f4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1079f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1079f8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1079f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1079fcu;
}
