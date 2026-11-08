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

// Function: entry_00162160
// Address: 0x162160 - 0x162224
void entry_00162160_0x162160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162160_0x162160");
#endif

    ctx->pc = 0x162160u;

label_162160:
    // 0x162160: 0x1892021  addu        $a0, $t4, $t1
    ctx->pc = 0x162160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x162164: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x162164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162168: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16216c: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x16216cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x162170: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x162174: 0xa8382a  slt         $a3, $a1, $t0
    ctx->pc = 0x162174u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x162178: 0x88302a  slt         $a2, $a0, $t0
    ctx->pc = 0x162178u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x16217c: 0x67280a  movz        $a1, $v1, $a3
    ctx->pc = 0x16217cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x162180: 0x46200a  movz        $a0, $v0, $a2
    ctx->pc = 0x162180u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x162184: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x162184u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x162188: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x162188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16218c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x16218cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x162190: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x162190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x162194: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x162194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x162198: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x162198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x16219c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x16219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1621a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1621a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621a4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1621a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1621a8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1621a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1621ac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1621acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1621b0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1621b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1621b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1621b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1621b8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1621b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1621bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1621bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1621c0: 0x46010044  c1          0x10044
    ctx->pc = 0x1621c0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1621c4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1621c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1621c8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1621c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1621cc: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1621ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1621d0: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1621d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1621d4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1621d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1621d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1621dc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1621dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1621e0: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x1621e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1621e4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x1621e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x1621e8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1621e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1621ec: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1621ECu;
    {
        const bool branch_taken_0x1621ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1621F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621ECu;
        // 0x1621f0: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1621ec) {
            ctx->pc = 0x162160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162160;
        }
    }
    ctx->pc = 0x1621F4u;
    // 0x1621f4: 0x0  nop
    ctx->pc = 0x1621f4u;
    // NOP
    // 0x1621f8: 0x0  nop
    ctx->pc = 0x1621f8u;
    // NOP
    // 0x1621fc: 0x46042803  div.s       $f0, $f5, $f4
    ctx->pc = 0x1621fcu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x162200: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x162200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162204: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x162204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x162208: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x162208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16220c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x16220cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x162210: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x162210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162214: 0xe6801ac8  swc1        $f0, 0x1AC8($s4)
    ctx->pc = 0x162214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6856), bits); }
    // 0x162218: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x162218u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16221c: 0x3e00008  jr          $ra
    ctx->pc = 0x16221Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16221Cu;
        // 0x162220: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16221Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162224u;
}
