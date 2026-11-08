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

// Function: __sread
// Address: 0x1d63c0 - 0x1d6424
void ps2___sread_0x1d63c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sread_0x1d63c0");
#endif

    switch (ctx->pc) {
        case 0x1d63e4u: goto label_1d63e4;
        default: break;
    }

    ctx->pc = 0x1d63c0u;

    // 0x1d63c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d63c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d63c4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d63c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d63c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d63cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d63ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d63d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d63d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d63d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63d8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d63d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d63dc: 0xc0759d8  jal         func_1D6760
    ctx->pc = 0x1D63DCu;
    SET_GPR_U32(ctx, 31, 0x1D63E4u);
    ctx->pc = 0x1D63E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63DCu;
    // 0x1d63e0: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6760u, 0x1D63DCu, 0x1D63E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63E4u;
label_1d63e4:
    // 0x1d63e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d63e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d63e8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d63e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d63ec: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D63ECu;
    {
        const bool branch_taken_0x1d63ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63ECu;
        // 0x1d63f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63ec) {
            ctx->pc = 0x1D6408u;
            goto label_1d6408;
        }
    }
    ctx->pc = 0x1D63F4u;
    // 0x1d63f4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1d63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1d63f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d63fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D63FCu;
    {
        const bool branch_taken_0x1d63fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63FCu;
        // 0x1d6400: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63fc) {
            ctx->pc = 0x1D6414u;
            goto label_1d6414;
        }
    }
    ctx->pc = 0x1D6404u;
    // 0x1d6404: 0x0  nop
    ctx->pc = 0x1d6404u;
    // NOP
label_1d6408:
    // 0x1d6408: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d6408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d640c: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x1d640cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
    // 0x1d6410: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x1d6410u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_1d6414:
    // 0x1d6414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6418: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d6418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d641c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D641Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D641Cu;
        // 0x1d6420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D641Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6424u;
}
