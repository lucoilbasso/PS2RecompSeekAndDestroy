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

// Function: entry_001112d0
// Address: 0x1112d0 - 0x111330
void entry_001112d0_0x1112d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001112d0_0x1112d0");
#endif

    switch (ctx->pc) {
        case 0x1112e4u: goto label_1112e4;
        case 0x1112f0u: goto label_1112f0;
        case 0x111310u: goto label_111310;
        default: break;
    }

    ctx->pc = 0x1112d0u;

    // 0x1112d0: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1112D0u;
    {
        const bool branch_taken_0x1112d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1112D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112D0u;
        // 0x1112d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112d0) {
            ctx->pc = 0x1113B8u;
            return;
        }
    }
    ctx->pc = 0x1112D8u;
    // 0x1112d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1112d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112dc: 0xc05ac0a  jal         func_16B028
    ctx->pc = 0x1112DCu;
    SET_GPR_U32(ctx, 31, 0x1112E4u);
    ctx->pc = 0x1112E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112DCu;
    // 0x1112e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B028u, 0x1112DCu, 0x1112E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112E4u;
label_1112e4:
    // 0x1112e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1112e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112e8: 0xc04171a  jal         func_105C68
    ctx->pc = 0x1112E8u;
    SET_GPR_U32(ctx, 31, 0x1112F0u);
    ctx->pc = 0x1112ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112E8u;
    // 0x1112ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x1112E8u, 0x1112F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112F0u;
label_1112f0:
    // 0x1112f0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1112F0u;
    {
        const bool branch_taken_0x1112f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112F0u;
        // 0x1112f4: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112f0) {
            ctx->pc = 0x111368u;
            return;
        }
    }
    ctx->pc = 0x1112F8u;
    // 0x1112f8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1112f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1112fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1112fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111300: 0x10640014  beq         $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x111300u;
    {
        const bool branch_taken_0x111300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x111304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111300u;
        // 0x111304: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111300) {
            ctx->pc = 0x111354u;
            return;
        }
    }
    ctx->pc = 0x111308u;
    // 0x111308: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111308u;
    SET_GPR_U32(ctx, 31, 0x111310u);
    ctx->pc = 0x11130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111308u;
    // 0x11130c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111308u, 0x111310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111310u;
label_111310:
    // 0x111310: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111314: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111318: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x111318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11131c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11131Cu;
    {
        const bool branch_taken_0x11131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11131Cu;
        // 0x111320: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11131c) {
            ctx->pc = 0x111350u;
            return;
        }
    }
    ctx->pc = 0x111324u;
    // 0x111324: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x111324u;
    {
        const bool branch_taken_0x111324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111324u;
        // 0x111328: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111324) {
            ctx->pc = 0x11134Cu;
            return;
        }
    }
    ctx->pc = 0x11132Cu;
    // 0x11132c: 0x0  nop
    ctx->pc = 0x11132cu;
    // NOP
    ctx->pc = 0x111330u;
}
