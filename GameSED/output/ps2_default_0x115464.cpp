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

// Function: default
// Address: 0x115464 - 0x115498
void ps2_default_0x115464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x115464");
#endif

    ctx->pc = 0x115464u;

    // 0x115464: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x115464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x115468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11546c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11546cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x115470: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115474: 0x8463c0a8  lh          $v1, -0x3F58($v1)
    ctx->pc = 0x115474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294951080)));
    // 0x115478: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x115478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11547c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11547Cu;
    {
        const bool branch_taken_0x11547c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11547Cu;
        // 0x115480: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11547c) {
            ctx->pc = 0x1154C8u;
            return;
        }
    }
    ctx->pc = 0x115484u;
    // 0x115484: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x115484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x115488: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x115488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11548c: 0x123200  sll         $a2, $s2, 8
    ctx->pc = 0x11548cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x115490: 0x2443fcb0  addiu       $v1, $v0, -0x350
    ctx->pc = 0x115490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x115494: 0x0  nop
    ctx->pc = 0x115494u;
    // NOP
    ctx->pc = 0x115498u;
}
