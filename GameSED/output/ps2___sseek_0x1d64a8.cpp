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

// Function: __sseek
// Address: 0x1d64a8 - 0x1d650c
void ps2___sseek_0x1d64a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sseek_0x1d64a8");
#endif

    switch (ctx->pc) {
        case 0x1d64ccu: goto label_1d64cc;
        default: break;
    }

    ctx->pc = 0x1d64a8u;

    // 0x1d64a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d64a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d64ac: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d64acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d64b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d64b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d64b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d64b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d64bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d64bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64c0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d64c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d64c4: 0xc0759c0  jal         func_1D6700
    ctx->pc = 0x1D64C4u;
    SET_GPR_U32(ctx, 31, 0x1D64CCu);
    ctx->pc = 0x1D64C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64C4u;
    // 0x1d64c8: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6700u, 0x1D64C4u, 0x1D64CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64CCu;
label_1d64cc:
    // 0x1d64cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d64d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d64d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64d4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1d64d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d64d8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d64d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d64dc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D64DCu;
    {
        const bool branch_taken_0x1d64dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64DCu;
        // 0x1d64e0: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64dc) {
            ctx->pc = 0x1D64F0u;
            goto label_1d64f0;
        }
    }
    ctx->pc = 0x1D64E4u;
    // 0x1d64e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D64E4u;
    {
        const bool branch_taken_0x1d64e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64E4u;
        // 0x1d64e8: 0x3063efff  andi        $v1, $v1, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64e4) {
            ctx->pc = 0x1D64F8u;
            goto label_1d64f8;
        }
    }
    ctx->pc = 0x1D64ECu;
    // 0x1d64ec: 0x0  nop
    ctx->pc = 0x1d64ecu;
    // NOP
label_1d64f0:
    // 0x1d64f0: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x1d64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x1d64f4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1d64f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_1d64f8:
    // 0x1d64f8: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x1d64f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d64fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d64fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6500: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d6500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6504: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6504u;
        // 0x1d6508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D650Cu;
}
