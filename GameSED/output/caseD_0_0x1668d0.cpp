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

// Function: caseD_0
// Address: 0x1668d0 - 0x16693c
void caseD_0_0x1668d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1668d0");
#endif

    switch (ctx->pc) {
        case 0x166920u: goto label_166920;
        case 0x166930u: goto label_166930;
        case 0x166938u: goto label_166938;
        default: break;
    }

    ctx->pc = 0x1668d0u;

    // 0x1668d0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1668d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1668d4: 0x544002ad  bnel        $v0, $zero, . + 4 + (0x2AD << 2)
    ctx->pc = 0x1668D4u;
    {
        const bool branch_taken_0x1668d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1668d4) {
            ctx->pc = 0x1668D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668D4u;
            // 0x1668d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16738Cu;
            return;
        }
    }
    ctx->pc = 0x1668DCu;
    // 0x1668dc: 0x108002b4  beqz        $a0, . + 4 + (0x2B4 << 2)
    ctx->pc = 0x1668DCu;
    {
        const bool branch_taken_0x1668dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668DCu;
        // 0x1668e0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668dc) {
            ctx->pc = 0x1673B0u;
            return;
        }
    }
    ctx->pc = 0x1668E4u;
    // 0x1668e4: 0x8e701264  lw          $s0, 0x1264($s3)
    ctx->pc = 0x1668e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4708)));
    // 0x1668e8: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1668E8u;
    {
        const bool branch_taken_0x1668e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1668e8) {
            ctx->pc = 0x1668ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668E8u;
            // 0x1668ec: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16693Cu;
            return;
        }
    }
    ctx->pc = 0x1668F0u;
    // 0x1668f0: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x1668f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1668f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1668f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1668f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1668f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1668fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1668fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166900: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x166900u;
    {
        const bool branch_taken_0x166900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x166900) {
            ctx->pc = 0x166904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166900u;
            // 0x166904: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16693Cu;
            return;
        }
    }
    ctx->pc = 0x166908u;
    // 0x166908: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x166908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16690c: 0x260305f0  addiu       $v1, $s0, 0x5F0
    ctx->pc = 0x16690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    // 0x166910: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x166910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166914: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x166914u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x166918: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x166918u;
    SET_GPR_U32(ctx, 31, 0x166920u);
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x166918u, 0x166920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166920u;
label_166920:
    // 0x166920: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x166920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166924: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x166924u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x166928: 0xc04c9d4  jal         func_132750
    ctx->pc = 0x166928u;
    SET_GPR_U32(ctx, 31, 0x166930u);
    ctx->pc = 0x16692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166928u;
    // 0x16692c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x132750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132750u, 0x166928u, 0x166930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166930u;
label_166930:
    // 0x166930: 0xc04ca08  jal         func_132820
    ctx->pc = 0x166930u;
    SET_GPR_U32(ctx, 31, 0x166938u);
    ctx->pc = 0x166934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166930u;
    // 0x166934: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132820u, 0x166930u, 0x166938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166938u;
label_166938:
    // 0x166938: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x166938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->pc = 0x16693cu;
}
