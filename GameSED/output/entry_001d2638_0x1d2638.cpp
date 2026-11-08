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

// Function: entry_001d2638
// Address: 0x1d2638 - 0x1d2660
void entry_001d2638_0x1d2638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2638_0x1d2638");
#endif

    ctx->pc = 0x1d2638u;

    // 0x1d2638: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d2638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d263c: 0x1a000047  blez        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1D263Cu;
    {
        const bool branch_taken_0x1d263c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D263Cu;
        // 0x1d2640: 0x8fa60200  lw          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d263c) {
            ctx->pc = 0x1D275Cu;
            return;
        }
    }
    ctx->pc = 0x1D2644u;
    // 0x1d2644: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d2644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2648: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2648u;
    {
        const bool branch_taken_0x1d2648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2648u;
        // 0x1d264c: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2648) {
            ctx->pc = 0x1D26C0u;
            return;
        }
    }
    ctx->pc = 0x1D2650u;
    // 0x1d2650: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d2650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d2654: 0x24f1c3d0  addiu       $s1, $a3, -0x3C30
    ctx->pc = 0x1d2654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d2658: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1d2658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x1d265c: 0x0  nop
    ctx->pc = 0x1d265cu;
    // NOP
    ctx->pc = 0x1d2660u;
}
