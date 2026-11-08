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

// Function: entry_001079fc
// Address: 0x1079fc - 0x107a24
void entry_001079fc_0x1079fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001079fc_0x1079fc");
#endif

    ctx->pc = 0x1079fcu;

    // 0x1079fc: 0x24020086  addiu       $v0, $zero, 0x86
    ctx->pc = 0x1079fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x107a00: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107A00u;
    {
        const bool branch_taken_0x107a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107a00) {
            ctx->pc = 0x107A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A00u;
            // 0x107a04: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107A24u;
            return;
        }
    }
    ctx->pc = 0x107A08u;
    // 0x107a08: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x107a0c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107a0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107a10: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x107a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x107a14: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x107a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x107a18: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x107a18u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x107a1c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x107a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x107a20: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107a20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x107a24u;
}
