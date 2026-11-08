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

// Function: entry_0011a3a8
// Address: 0x11a3a8 - 0x11a3d4
void entry_0011a3a8_0x11a3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a3a8_0x11a3a8");
#endif

    ctx->pc = 0x11a3a8u;

    // 0x11a3a8: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x11a3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x11a3ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A3ACu;
    {
        const bool branch_taken_0x11a3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3ACu;
        // 0x11a3b0: 0x30e2003f  andi        $v0, $a3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3ac) {
            ctx->pc = 0x11A3D4u;
            return;
        }
    }
    ctx->pc = 0x11A3B4u;
    // 0x11a3b4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x11a3b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a3b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11a3bc: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x11a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x11a3c0: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x11a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x11a3c4: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x11a3c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11a3c8: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x11a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x11a3cc: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x11a3ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x11a3d0: 0x30e2003f  andi        $v0, $a3, 0x3F
    ctx->pc = 0x11a3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    ctx->pc = 0x11a3d4u;
}
