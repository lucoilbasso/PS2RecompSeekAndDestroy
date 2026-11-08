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

// Function: caseD_b
// Address: 0x1344b8 - 0x134530
void caseD_b_0x1344b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1344b8");
#endif

    switch (ctx->pc) {
        case 0x1344d4u: goto label_1344d4;
        case 0x1344f0u: goto label_1344f0;
        case 0x134508u: goto label_134508;
        default: break;
    }

    ctx->pc = 0x1344b8u;

    // 0x1344b8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1344b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1344bc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1344bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1344c0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1344c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1344c4: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x1344c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1344c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1344c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344cc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1344CCu;
    SET_GPR_U32(ctx, 31, 0x1344D4u);
    ctx->pc = 0x1344D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344CCu;
    // 0x1344d0: 0x3c138000  lui         $s3, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1344CCu, 0x1344D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344D4u;
label_1344d4:
    // 0x1344d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1344d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344d8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1344d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1344dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1344dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1344e0: 0x50730014  beql        $v1, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1344E0u;
    {
        const bool branch_taken_0x1344e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x1344e0) {
            ctx->pc = 0x1344E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1344E0u;
            // 0x1344e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134534u;
            return;
        }
    }
    ctx->pc = 0x1344E8u;
    // 0x1344e8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1344E8u;
    SET_GPR_U32(ctx, 31, 0x1344F0u);
    ctx->pc = 0x1344ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344E8u;
    // 0x1344ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1344E8u, 0x1344F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344F0u;
label_1344f0:
    // 0x1344f0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1344f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1344f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1344f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1344f8: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1344F8u;
    {
        const bool branch_taken_0x1344f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1344FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344F8u;
        // 0x1344fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344f8) {
            ctx->pc = 0x134530u;
            return;
        }
    }
    ctx->pc = 0x134500u;
    // 0x134500: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134500u;
    SET_GPR_U32(ctx, 31, 0x134508u);
    ctx->pc = 0x134504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134500u;
    // 0x134504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134500u, 0x134508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134508u;
label_134508:
    // 0x134508: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x134508u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13450c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134510: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134514: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x134514u;
    {
        const bool branch_taken_0x134514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x134518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134514u;
        // 0x134518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134514) {
            ctx->pc = 0x134534u;
            return;
        }
    }
    ctx->pc = 0x13451Cu;
    // 0x13451c: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x13451cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134520: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x134520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134528: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134528u;
    SET_GPR_U32(ctx, 31, 0x134530u);
    ctx->pc = 0x13452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134528u;
    // 0x13452c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134528u, 0x134530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134530u;
}
