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

// Function: caseD_6
// Address: 0x134338 - 0x134370
void caseD_6_0x134338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x134338");
#endif

    switch (ctx->pc) {
        case 0x134344u: goto label_134344;
        case 0x13434cu: goto label_13434c;
        case 0x13436cu: goto label_13436c;
        default: break;
    }

    ctx->pc = 0x134338u;

    // 0x134338: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13433c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13433Cu;
    SET_GPR_U32(ctx, 31, 0x134344u);
    ctx->pc = 0x134340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13433Cu;
    // 0x134340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13433Cu, 0x134344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134344u;
label_134344:
    // 0x134344: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x134344u;
    SET_GPR_U32(ctx, 31, 0x13434Cu);
    ctx->pc = 0x134348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134344u;
    // 0x134348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x134344u, 0x13434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13434Cu;
label_13434c:
    // 0x13434c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13434cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x134350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x134350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134354: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13435c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13435Cu;
    {
        const bool branch_taken_0x13435c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13435c) {
            ctx->pc = 0x134370u;
            return;
        }
    }
    ctx->pc = 0x134364u;
    // 0x134364: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134364u;
    SET_GPR_U32(ctx, 31, 0x13436Cu);
    ctx->pc = 0x134368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134364u;
    // 0x134368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134364u, 0x13436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13436Cu;
label_13436c:
    // 0x13436c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13436cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x134370u;
}
