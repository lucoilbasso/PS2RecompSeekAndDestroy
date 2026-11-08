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

// Function: entry_00124088
// Address: 0x124088 - 0x1240c8
void entry_00124088_0x124088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124088_0x124088");
#endif

    ctx->pc = 0x124088u;

    // 0x124088: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x124088u;
    {
        const bool branch_taken_0x124088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124088u;
        // 0x12408c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124088) {
            ctx->pc = 0x124168u;
            return;
        }
    }
    ctx->pc = 0x124090u;
    // 0x124090: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x124090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x124094: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x124094u;
    {
        const bool branch_taken_0x124094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x124094) {
            ctx->pc = 0x124098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124094u;
            // 0x124098: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240E4u;
            return;
        }
    }
    ctx->pc = 0x12409Cu;
    // 0x12409c: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x12409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x1240a0: 0x5450000b  bnel        $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1240A0u;
    {
        const bool branch_taken_0x1240a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1240a0) {
            ctx->pc = 0x1240A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1240A0u;
            // 0x1240a4: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240D0u;
            return;
        }
    }
    ctx->pc = 0x1240A8u;
    // 0x1240a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1240a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1240ac: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1240ACu;
    {
        const bool branch_taken_0x1240ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240ac) {
            ctx->pc = 0x1240B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1240ACu;
            // 0x1240b0: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240C8u;
            return;
        }
    }
    ctx->pc = 0x1240B4u;
    // 0x1240b4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1240b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1240b8: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1240B8u;
    {
        const bool branch_taken_0x1240b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1240b8) {
            ctx->pc = 0x1240BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1240B8u;
            // 0x1240bc: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240C8u;
            return;
        }
    }
    ctx->pc = 0x1240C0u;
    // 0x1240c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1240C0u;
    {
        const bool branch_taken_0x1240c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240C0u;
        // 0x1240c4: 0xac83013c  sw          $v1, 0x13C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240c0) {
            ctx->pc = 0x1240CCu;
            return;
        }
    }
    ctx->pc = 0x1240C8u;
}
