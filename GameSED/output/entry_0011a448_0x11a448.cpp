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

// Function: entry_0011a448
// Address: 0x11a448 - 0x11a474
void entry_0011a448_0x11a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a448_0x11a448");
#endif

    ctx->pc = 0x11a448u;

    // 0x11a448: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x11a448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x11a44c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A44Cu;
    {
        const bool branch_taken_0x11a44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A44Cu;
        // 0x11a450: 0x30a2003f  andi        $v0, $a1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a44c) {
            ctx->pc = 0x11A474u;
            return;
        }
    }
    ctx->pc = 0x11A454u;
    // 0x11a454: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x11a454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11a458: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11a458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11a45c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x11a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x11a460: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x11a460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x11a464: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x11a464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11a468: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x11a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x11a46c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x11a46cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x11a470: 0x30a2003f  andi        $v0, $a1, 0x3F
    ctx->pc = 0x11a470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    ctx->pc = 0x11a474u;
}
