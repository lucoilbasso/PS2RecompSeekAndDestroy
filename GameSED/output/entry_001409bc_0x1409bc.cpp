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

// Function: entry_001409bc
// Address: 0x1409bc - 0x140a48
void entry_001409bc_0x1409bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001409bc_0x1409bc");
#endif

    switch (ctx->pc) {
        case 0x1409dcu: goto label_1409dc;
        default: break;
    }

    ctx->pc = 0x1409bcu;

    // 0x1409bc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1409bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1409c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1409c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1409c4: 0x26102630  addiu       $s0, $s0, 0x2630
    ctx->pc = 0x1409c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9776));
    // 0x1409c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1409c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1409ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1409d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409d4: 0xc05129a  jal         func_144A68
    ctx->pc = 0x1409D4u;
    SET_GPR_U32(ctx, 31, 0x1409DCu);
    ctx->pc = 0x1409D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1409D4u;
    // 0x1409d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x1409D4u, 0x1409DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1409DCu;
label_1409dc:
    // 0x1409dc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1409dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1409e0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1409e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1409e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1409e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1409e8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1409e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1409ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1409ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1409f0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1409f0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1409f4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1409f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1409f8: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x1409f8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x1409fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1409fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x140a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x140a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140a04: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x140a04u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x140a08: 0xc66201a4  lwc1        $f2, 0x1A4($s3)
    ctx->pc = 0x140a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140a0c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x140a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x140a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140a14: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x140a14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x140a18: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x140a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x140a1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x140a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140a20: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x140a20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140a24: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x140a24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x140a28: 0xe66201a4  swc1        $f2, 0x1A4($s3)
    ctx->pc = 0x140a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 420), bits); }
    // 0x140a2c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x140a2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140a30: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x140a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x140a34: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x140a34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x140a38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x140a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140a3c: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x140a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x140a40: 0x3e00008  jr          $ra
    ctx->pc = 0x140A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A40u;
        // 0x140a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140A48u;
}
