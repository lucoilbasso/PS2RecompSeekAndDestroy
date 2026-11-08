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

// Function: entry_0013a050
// Address: 0x13a050 - 0x13a0ac
void entry_0013a050_0x13a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a050_0x13a050");
#endif

    ctx->pc = 0x13a050u;

    // 0x13a050: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x13a050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x13a054: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13a054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13a058: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x13a058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x13a05c: 0xacb30010  sw          $s3, 0x10($a1)
    ctx->pc = 0x13a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 19));
    // 0x13a060: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13a060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13a064: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x13a064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13a068: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13a068u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13a06c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x13a06cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a070: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13a070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13a074: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13a074u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a078: 0xac950020  sw          $s5, 0x20($a0)
    ctx->pc = 0x13a078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 21));
    // 0x13a07c: 0xe4940018  swc1        $f20, 0x18($a0)
    ctx->pc = 0x13a07cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13a080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13a084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a088: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13a088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a08c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13a08cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a090: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13a090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a094: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13a094u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a098: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13a098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13a09c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a0a0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x13a0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x13a0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0A4u;
        // 0x13a0a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A0ACu;
}
