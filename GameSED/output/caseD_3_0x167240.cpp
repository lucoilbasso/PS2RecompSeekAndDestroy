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

// Function: caseD_3
// Address: 0x167240 - 0x1672b0
void caseD_3_0x167240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x167240");
#endif

    switch (ctx->pc) {
        case 0x167290u: goto label_167290;
        case 0x1672a0u: goto label_1672a0;
        case 0x1672a8u: goto label_1672a8;
        default: break;
    }

    ctx->pc = 0x167240u;

    // 0x167240: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x167240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x167244: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x167244u;
    {
        const bool branch_taken_0x167244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167244) {
            ctx->pc = 0x167248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167244u;
            // 0x167248: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16738Cu;
            return;
        }
    }
    ctx->pc = 0x16724Cu;
    // 0x16724c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16724Cu;
    {
        const bool branch_taken_0x16724c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x167250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16724Cu;
        // 0x167250: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16724c) {
            ctx->pc = 0x1672B0u;
            return;
        }
    }
    ctx->pc = 0x167254u;
    // 0x167254: 0x8e701264  lw          $s0, 0x1264($s3)
    ctx->pc = 0x167254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4708)));
    // 0x167258: 0x52000055  beql        $s0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x167258u;
    {
        const bool branch_taken_0x167258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167258) {
            ctx->pc = 0x16725Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167258u;
            // 0x16725c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1673B0u;
            return;
        }
    }
    ctx->pc = 0x167260u;
    // 0x167260: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x167260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x167264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x167268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16726c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16726cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167270: 0x4502004f  bc1fl       . + 4 + (0x4F << 2)
    ctx->pc = 0x167270u;
    {
        const bool branch_taken_0x167270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167270) {
            ctx->pc = 0x167274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167270u;
            // 0x167274: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1673B0u;
            return;
        }
    }
    ctx->pc = 0x167278u;
    // 0x167278: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x167278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16727c: 0x260305f0  addiu       $v1, $s0, 0x5F0
    ctx->pc = 0x16727cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    // 0x167280: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x167280u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167284: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x167284u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x167288: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x167288u;
    SET_GPR_U32(ctx, 31, 0x167290u);
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x167288u, 0x167290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167290u;
label_167290:
    // 0x167290: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x167290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167294: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x167294u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x167298: 0xc04c9d4  jal         func_132750
    ctx->pc = 0x167298u;
    SET_GPR_U32(ctx, 31, 0x1672A0u);
    ctx->pc = 0x16729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167298u;
    // 0x16729c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x132750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132750u, 0x167298u, 0x1672A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672A0u;
label_1672a0:
    // 0x1672a0: 0xc04ca08  jal         func_132820
    ctx->pc = 0x1672A0u;
    SET_GPR_U32(ctx, 31, 0x1672A8u);
    ctx->pc = 0x1672A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672A0u;
    // 0x1672a4: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132820u, 0x1672A0u, 0x1672A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672A8u;
label_1672a8:
    // 0x1672a8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1672A8u;
    {
        const bool branch_taken_0x1672a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672A8u;
        // 0x1672ac: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672a8) {
            ctx->pc = 0x1673B0u;
            return;
        }
    }
    ctx->pc = 0x1672B0u;
}
