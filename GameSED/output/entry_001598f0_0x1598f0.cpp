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

// Function: entry_001598f0
// Address: 0x1598f0 - 0x15996c
void entry_001598f0_0x1598f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001598f0_0x1598f0");
#endif

    switch (ctx->pc) {
        case 0x159910u: goto label_159910;
        case 0x159924u: goto label_159924;
        default: break;
    }

    ctx->pc = 0x1598f0u;

    // 0x1598f0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1598f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1598f4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1598F4u;
    {
        const bool branch_taken_0x1598f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598F4u;
        // 0x1598f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598f4) {
            ctx->pc = 0x1599F8u;
            return;
        }
    }
    ctx->pc = 0x1598FCu;
    // 0x1598fc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1598fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x159900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159904: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159908: 0xc060300  jal         func_180C00
    ctx->pc = 0x159908u;
    SET_GPR_U32(ctx, 31, 0x159910u);
    ctx->pc = 0x15990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159908u;
    // 0x15990c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x159908u, 0x159910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159910u;
label_159910:
    // 0x159910: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x159910u;
    {
        const bool branch_taken_0x159910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159910u;
        // 0x159914: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159910) {
            ctx->pc = 0x159AE8u;
            return;
        }
    }
    ctx->pc = 0x159918u;
    // 0x159918: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x159918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15991c: 0xc0609fe  jal         func_1827F8
    ctx->pc = 0x15991Cu;
    SET_GPR_U32(ctx, 31, 0x159924u);
    ctx->pc = 0x159920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15991Cu;
    // 0x159920: 0x8e500160  lw          $s0, 0x160($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x15991Cu, 0x159924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159924u;
label_159924:
    // 0x159924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x159924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159928: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x159928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15992c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x15992cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x159930: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x159930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x159934: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x159934u;
    {
        const bool branch_taken_0x159934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x159938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159934u;
        // 0x159938: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159934) {
            ctx->pc = 0x15996Cu;
            return;
        }
    }
    ctx->pc = 0x15993Cu;
    // 0x15993c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x15993cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159940: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x159940u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x159944: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x159944u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x159948: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x159948u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x15994c: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x15994cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x159950: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x159950u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x159954: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x159954u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x159958: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x159958u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x15995c: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x15995cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x159960: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x159960u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x159964: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x159964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x159968: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x159968u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    ctx->pc = 0x15996cu;
}
