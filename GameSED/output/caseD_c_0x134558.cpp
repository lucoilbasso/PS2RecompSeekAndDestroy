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

// Function: caseD_c
// Address: 0x134558 - 0x1345d0
void caseD_c_0x134558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x134558");
#endif

    switch (ctx->pc) {
        case 0x134598u: goto label_134598;
        case 0x1345b0u: goto label_1345b0;
        case 0x1345ccu: goto label_1345cc;
        default: break;
    }

    ctx->pc = 0x134558u;

    // 0x134558: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13455c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x13455cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134560: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x134560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134564: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x134564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x134568: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x134568u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13456c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x13456cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x134570: 0x8ca3b830  lw          $v1, -0x47D0($a1)
    ctx->pc = 0x134570u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134574: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x134574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134578: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x134578u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13457c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x13457cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134580: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x134580u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x134584: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134588: 0x50510012  beql        $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x134588u;
    {
        const bool branch_taken_0x134588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x134588) {
            ctx->pc = 0x13458Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134588u;
            // 0x13458c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1345D4u;
            return;
        }
    }
    ctx->pc = 0x134590u;
    // 0x134590: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134590u;
    SET_GPR_U32(ctx, 31, 0x134598u);
    ctx->pc = 0x134594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134590u;
    // 0x134594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134590u, 0x134598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134598u;
label_134598:
    // 0x134598: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13459c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1345a0: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1345A0u;
    {
        const bool branch_taken_0x1345a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1345A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345A0u;
        // 0x1345a4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345a0) {
            ctx->pc = 0x1345D0u;
            return;
        }
    }
    ctx->pc = 0x1345A8u;
    // 0x1345a8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1345A8u;
    SET_GPR_U32(ctx, 31, 0x1345B0u);
    ctx->pc = 0x1345ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345A8u;
    // 0x1345ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1345A8u, 0x1345B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345B0u;
label_1345b0:
    // 0x1345b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1345b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345b4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1345b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1345b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1345b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1345bc: 0x50710005  beql        $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1345BCu;
    {
        const bool branch_taken_0x1345bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1345bc) {
            ctx->pc = 0x1345C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1345BCu;
            // 0x1345c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1345D4u;
            return;
        }
    }
    ctx->pc = 0x1345C4u;
    // 0x1345c4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1345C4u;
    SET_GPR_U32(ctx, 31, 0x1345CCu);
    ctx->pc = 0x1345C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345C4u;
    // 0x1345c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1345C4u, 0x1345CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345CCu;
label_1345cc:
    // 0x1345cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1345ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1345d0u;
}
