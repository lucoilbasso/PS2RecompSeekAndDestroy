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

// Function: entry_00134830
// Address: 0x134830 - 0x134890
void entry_00134830_0x134830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134830_0x134830");
#endif

    switch (ctx->pc) {
        case 0x134848u: goto label_134848;
        case 0x134858u: goto label_134858;
        default: break;
    }

    ctx->pc = 0x134830u;

    // 0x134830: 0x5662001c  bnel        $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x134830u;
    {
        const bool branch_taken_0x134830 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x134830) {
            ctx->pc = 0x134834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134830u;
            // 0x134834: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1348A4u;
            return;
        }
    }
    ctx->pc = 0x134838u;
    // 0x134838: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x134838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x13483c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x13483cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x134840: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x134840u;
    SET_GPR_U32(ctx, 31, 0x134848u);
    ctx->pc = 0x134844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134840u;
    // 0x134844: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x134840u, 0x134848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134848u;
label_134848:
    // 0x134848: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x134848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x13484c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x13484cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x134850: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x134850u;
    SET_GPR_U32(ctx, 31, 0x134858u);
    ctx->pc = 0x134854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134850u;
    // 0x134854: 0x46170502  mul.s       $f20, $f0, $f23 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x134850u, 0x134858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134858u;
label_134858:
    // 0x134858: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x134858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x13485c: 0x3c01c37a  lui         $at, 0xC37A
    ctx->pc = 0x13485cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50042 << 16));
    // 0x134860: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x134860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x134864: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x134864u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x134868: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x134868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x13486c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x13486cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x134870: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x134870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134874: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x134874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x134878: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x134878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13487c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x13487cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x134880: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x134880u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x134884: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x134884u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x134888: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x134888u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x13488c: 0x26260820  addiu       $a2, $s1, 0x820
    ctx->pc = 0x13488cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    ctx->pc = 0x134890u;
}
