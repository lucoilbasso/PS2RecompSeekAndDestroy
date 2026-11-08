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

// Function: entry_001d10a8
// Address: 0x1d10a8 - 0x1d10d8
void entry_001d10a8_0x1d10a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d10a8_0x1d10a8");
#endif

    ctx->pc = 0x1d10a8u;

    // 0x1d10a8: 0x4c1000b  bgez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1D10A8u;
    {
        const bool branch_taken_0x1d10a8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10A8u;
        // 0x1d10ac: 0x5102f  dsubu       $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10a8) {
            ctx->pc = 0x1D10D8u;
            return;
        }
    }
    ctx->pc = 0x1D10B0u;
    // 0x1d10b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d10b4: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x1d10b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x1d10b8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1d10b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d10bc: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1d10bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1d10c0: 0x77280a  movz        $a1, $v1, $s7
    ctx->pc = 0x1d10c0u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1d10c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d10c8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1d10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d10cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D10CCu;
    {
        const bool branch_taken_0x1d10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10CCu;
        // 0x1d10d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10cc) {
            ctx->pc = 0x1D10DCu;
            return;
        }
    }
    ctx->pc = 0x1D10D4u;
    // 0x1d10d4: 0x0  nop
    ctx->pc = 0x1d10d4u;
    // NOP
    ctx->pc = 0x1d10d8u;
}
