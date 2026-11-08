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

// Function: entry_0017ffdc
// Address: 0x17ffdc - 0x17fff8
void entry_0017ffdc_0x17ffdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ffdc_0x17ffdc");
#endif

    ctx->pc = 0x17ffdcu;

    // 0x17ffdc: 0x2962000b  slti        $v0, $t3, 0xB
    ctx->pc = 0x17ffdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x17ffe0: 0x2580a  movz        $t3, $zero, $v0
    ctx->pc = 0x17ffe0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x17ffe4: 0xa0cb000d  sb          $t3, 0xD($a2)
    ctx->pc = 0x17ffe4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 11));
    // 0x17ffe8: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x17ffe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x17ffec: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x17ffecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x17fff0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FFF0u;
    {
        const bool branch_taken_0x17fff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFF0u;
        // 0x17fff4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fff0) {
            ctx->pc = 0x180014u;
            return;
        }
    }
    ctx->pc = 0x17FFF8u;
}
