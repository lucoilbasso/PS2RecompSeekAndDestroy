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

// Function: entry_001634a4
// Address: 0x1634a4 - 0x1634e0
void entry_001634a4_0x1634a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001634a4_0x1634a4");
#endif

    ctx->pc = 0x1634a4u;

    // 0x1634a4: 0x264601f0  addiu       $a2, $s2, 0x1F0
    ctx->pc = 0x1634a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x1634a8: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x1634a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x1634ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1634acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1634b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1634b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1634b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1634b8: 0x8e44016c  lw          $a0, 0x16C($s2)
    ctx->pc = 0x1634b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x1634bc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1634bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1634c0: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1634C0u;
    {
        const bool branch_taken_0x1634c0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1634C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634C0u;
        // 0x1634c4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634c0) {
            ctx->pc = 0x163528u;
            return;
        }
    }
    ctx->pc = 0x1634C8u;
    // 0x1634c8: 0x26490204  addiu       $t1, $s2, 0x204
    ctx->pc = 0x1634c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 516));
    // 0x1634cc: 0x264b01f8  addiu       $t3, $s2, 0x1F8
    ctx->pc = 0x1634ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x1634d0: 0x26460210  addiu       $a2, $s2, 0x210
    ctx->pc = 0x1634d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    // 0x1634d4: 0x26480220  addiu       $t0, $s2, 0x220
    ctx->pc = 0x1634d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x1634d8: 0x2647015c  addiu       $a3, $s2, 0x15C
    ctx->pc = 0x1634d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 348));
    // 0x1634dc: 0x0  nop
    ctx->pc = 0x1634dcu;
    // NOP
    ctx->pc = 0x1634e0u;
}
