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

// Function: entry_0015269c
// Address: 0x15269c - 0x1526e0
void entry_0015269c_0x15269c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015269c_0x15269c");
#endif

    ctx->pc = 0x15269cu;

    // 0x15269c: 0x8e7006a4  lw          $s0, 0x6A4($s3)
    ctx->pc = 0x15269cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1700)));
    // 0x1526a0: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x1526a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1526a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1526a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1526a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1526a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1526ac: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x1526ACu;
    {
        const bool branch_taken_0x1526ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1526ac) {
            ctx->pc = 0x1526B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1526ACu;
            // 0x1526b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1527C4u;
            return;
        }
    }
    ctx->pc = 0x1526B4u;
    // 0x1526b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1526b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1526b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1526b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1526bc: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1526BCu;
    {
        const bool branch_taken_0x1526bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1526bc) {
            ctx->pc = 0x1526C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1526BCu;
            // 0x1526c0: 0x26030160  addiu       $v1, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152710u;
            return;
        }
    }
    ctx->pc = 0x1526C4u;
    // 0x1526c4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1526C4u;
    {
        const bool branch_taken_0x1526c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1526c4) {
            ctx->pc = 0x1526C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1526C4u;
            // 0x1526c8: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1526E0u;
            return;
        }
    }
    ctx->pc = 0x1526CCu;
    // 0x1526cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1526ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1526d0: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1526D0u;
    {
        const bool branch_taken_0x1526d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1526D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526D0u;
        // 0x1526d4: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526d0) {
            ctx->pc = 0x152770u;
            return;
        }
    }
    ctx->pc = 0x1526D8u;
    // 0x1526d8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1526D8u;
    {
        const bool branch_taken_0x1526d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526D8u;
        // 0x1526dc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526d8) {
            ctx->pc = 0x1527B0u;
            return;
        }
    }
    ctx->pc = 0x1526E0u;
}
