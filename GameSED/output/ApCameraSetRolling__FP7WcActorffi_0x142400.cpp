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

// Function: ApCameraSetRolling__FP7WcActorffi
// Address: 0x142400 - 0x1424bc
void ApCameraSetRolling__FP7WcActorffi_0x142400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetRolling__FP7WcActorffi_0x142400");
#endif

    switch (ctx->pc) {
        case 0x142434u: goto label_142434;
        default: break;
    }

    ctx->pc = 0x142400u;

    // 0x142400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142408: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x142408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14240c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x14240cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x142410: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x142410u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x142414: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x142414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x142418: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x142418u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x14241c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x142420: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x142420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x142424: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x142424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x142428: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14242c: 0xc061a46  jal         func_186918
    ctx->pc = 0x14242Cu;
    SET_GPR_U32(ctx, 31, 0x142434u);
    ctx->pc = 0x142430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14242Cu;
    // 0x142430: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x14242Cu, 0x142434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142434u;
label_142434:
    // 0x142434: 0x3c06fffe  lui         $a2, 0xFFFE
    ctx->pc = 0x142434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65534 << 16));
    // 0x142438: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x142438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14243c: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x14243cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x142440: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x142440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x142444: 0x2444ee48  addiu       $a0, $v0, -0x11B8
    ctx->pc = 0x142444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x142448: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x142448u;
    {
        const bool branch_taken_0x142448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142448u;
        // 0x14244c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142448) {
            ctx->pc = 0x142468u;
            goto label_142468;
        }
    }
    ctx->pc = 0x142450u;
    // 0x142450: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x142450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x142454: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142454u;
    {
        const bool branch_taken_0x142454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x142454) {
            ctx->pc = 0x142458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142454u;
            // 0x142458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14246Cu;
            goto label_14246c;
        }
    }
    ctx->pc = 0x14245Cu;
    // 0x14245c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14245Cu;
    {
        const bool branch_taken_0x14245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14245Cu;
        // 0x142460: 0x8c65001c  lw          $a1, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14245c) {
            ctx->pc = 0x14246Cu;
            goto label_14246c;
        }
    }
    ctx->pc = 0x142464u;
    // 0x142464: 0x0  nop
    ctx->pc = 0x142464u;
    // NOP
label_142468:
    // 0x142468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14246c:
    // 0x14246c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x14246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x142470: 0x5447000d  bnel        $v0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x142470u;
    {
        const bool branch_taken_0x142470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x142470) {
            ctx->pc = 0x142474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142470u;
            // 0x142474: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1424A8u;
            goto label_1424a8;
        }
    }
    ctx->pc = 0x142478u;
    // 0x142478: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x142478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x14247c: 0x8ca30084  lw          $v1, 0x84($a1)
    ctx->pc = 0x14247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x142480: 0x8ca40194  lw          $a0, 0x194($a1)
    ctx->pc = 0x142480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    // 0x142484: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x142484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x142488: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x142488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x14248c: 0xe4b50188  swc1        $f21, 0x188($a1)
    ctx->pc = 0x14248cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x142490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x142490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x142494: 0xe4b40184  swc1        $f20, 0x184($a1)
    ctx->pc = 0x142494u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x142498: 0xacb00190  sw          $s0, 0x190($a1)
    ctx->pc = 0x142498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 400), GPR_U32(ctx, 16));
    // 0x14249c: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x14249cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
    // 0x1424a0: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1424a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x1424a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1424a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1424a8:
    // 0x1424a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1424a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1424ac: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1424acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1424b0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1424b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1424b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1424B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1424B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424B4u;
        // 0x1424b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1424B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1424BCu;
}
