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

// Function: entry_001d27ac
// Address: 0x1d27ac - 0x1d27e0
void entry_001d27ac_0x1d27ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d27ac_0x1d27ac");
#endif

    ctx->pc = 0x1d27acu;

    // 0x1d27ac: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D27ACu;
    {
        const bool branch_taken_0x1d27ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27ACu;
        // 0x1d27b0: 0x8fa301f0  lw          $v1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27ac) {
            ctx->pc = 0x1D2880u;
            return;
        }
    }
    ctx->pc = 0x1D27B4u;
    // 0x1d27b4: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x1d27b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d27b8: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x1d27b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d27bc: 0x1a000032  blez        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D27BCu;
    {
        const bool branch_taken_0x1d27bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27BCu;
        // 0x1d27c0: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27bc) {
            ctx->pc = 0x1D2888u;
            return;
        }
    }
    ctx->pc = 0x1D27C4u;
    // 0x1d27c4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d27c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d27c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D27C8u;
    {
        const bool branch_taken_0x1d27c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27C8u;
        // 0x1d27cc: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27c8) {
            ctx->pc = 0x1D2840u;
            return;
        }
    }
    ctx->pc = 0x1D27D0u;
    // 0x1d27d0: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d27d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d27d4: 0x24f1c3c0  addiu       $s1, $a3, -0x3C40
    ctx->pc = 0x1d27d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951872));
    // 0x1d27d8: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1d27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x1d27dc: 0x0  nop
    ctx->pc = 0x1d27dcu;
    // NOP
    ctx->pc = 0x1d27e0u;
}
