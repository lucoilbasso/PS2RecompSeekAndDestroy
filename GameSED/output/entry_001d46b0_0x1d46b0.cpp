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

// Function: entry_001d46b0
// Address: 0x1d46b0 - 0x1d46e8
void entry_001d46b0_0x1d46b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d46b0_0x1d46b0");
#endif

    ctx->pc = 0x1d46b0u;

    // 0x1d46b0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1d46b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1d46b4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1d46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1d46b8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D46B8u;
    {
        const bool branch_taken_0x1d46b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46B8u;
        // 0x1d46bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46b8) {
            ctx->pc = 0x1D46F4u;
            return;
        }
    }
    ctx->pc = 0x1D46C0u;
    // 0x1d46c0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1d46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d46c4: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x1d46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1d46c8: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x1d46c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1d46cc: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1d46ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1d46d0: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1d46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1d46d4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D46D4u;
    {
        const bool branch_taken_0x1d46d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d46d4) {
            ctx->pc = 0x1D46D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D46D4u;
            // 0x1d46d8: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D46E8u;
            return;
        }
    }
    ctx->pc = 0x1D46DCu;
    // 0x1d46dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D46DCu;
    {
        const bool branch_taken_0x1d46dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46DCu;
        // 0x1d46e0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46dc) {
            ctx->pc = 0x1D46F4u;
            return;
        }
    }
    ctx->pc = 0x1D46E4u;
    // 0x1d46e4: 0x0  nop
    ctx->pc = 0x1d46e4u;
    // NOP
    ctx->pc = 0x1d46e8u;
}
