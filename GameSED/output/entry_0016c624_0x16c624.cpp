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

// Function: entry_0016c624
// Address: 0x16c624 - 0x16c700
void entry_0016c624_0x16c624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c624_0x16c624");
#endif

    switch (ctx->pc) {
        case 0x16c6d8u: goto label_16c6d8;
        default: break;
    }

    ctx->pc = 0x16c624u;

    // 0x16c624: 0xae2202b0  sw          $v0, 0x2B0($s1)
    ctx->pc = 0x16c624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
    // 0x16c628: 0x26260230  addiu       $a2, $s1, 0x230
    ctx->pc = 0x16c628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x16c62c: 0xc7808470  lwc1        $f0, -0x7B90($gp)
    ctx->pc = 0x16c62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c630: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16c630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16c634: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16c634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16c638: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16c638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16c63c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16c640: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16c640u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16c644: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16c644u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16c648: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16c648u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16c64c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x16c650: 0x26270240  addiu       $a3, $s1, 0x240
    ctx->pc = 0x16c650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x16c654: 0xc7818474  lwc1        $f1, -0x7B8C($gp)
    ctx->pc = 0x16c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c658: 0xc7828478  lwc1        $f2, -0x7B88($gp)
    ctx->pc = 0x16c658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16c65c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16c65cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16c660: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x16c660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16c664: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x16c664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16c668: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16c668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16c66c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16c66cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16c670: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16c670u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16c674: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16c674u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16c678: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x16c678u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x16c67c: 0x26260290  addiu       $a2, $s1, 0x290
    ctx->pc = 0x16c67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x16c680: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16c680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16c684: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16c684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16c688: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16c688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16c68c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16c690: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16c690u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16c694: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16c694u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16c698: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16c698u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16c69c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16c69cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x16c6a0: 0x262702a0  addiu       $a3, $s1, 0x2A0
    ctx->pc = 0x16c6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x16c6a4: 0xc780847c  lwc1        $f0, -0x7B84($gp)
    ctx->pc = 0x16c6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16c6a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16c6ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16c6acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16c6b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16c6b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16c6b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16c6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16c6b8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16c6b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16c6bc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16c6bcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16c6c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16c6c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16c6c4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x16c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x16c6c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16c6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c6cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16c6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c6d0: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x16C6D0u;
    SET_GPR_U32(ctx, 31, 0x16C6D8u);
    ctx->pc = 0x16C6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6D0u;
    // 0x16c6d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x16C6D0u, 0x16C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6D8u;
label_16c6d8:
    // 0x16c6d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c6dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c6e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c6e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c6e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c6e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16c6e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c6ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16c6ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c6f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16c6f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c6f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16c6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16c6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x16C6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6F8u;
        // 0x16c6fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C700u;
}
