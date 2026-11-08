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

// Function: ApAFPanelCreate__Fiiff
// Address: 0x10ce58 - 0x10ced4
void ApAFPanelCreate__Fiiff_0x10ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApAFPanelCreate__Fiiff_0x10ce58");
#endif

    switch (ctx->pc) {
        case 0x10ce90u: goto label_10ce90;
        default: break;
    }

    ctx->pc = 0x10ce58u;

    // 0x10ce58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ce5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ce5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ce60: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x10ce60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x10ce64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ce64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ce68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ce68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10ce6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10ce70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10ce70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10ce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10ce78: 0x2610f6d0  addiu       $s0, $s0, -0x930
    ctx->pc = 0x10ce78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964944));
    // 0x10ce7c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x10ce7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10ce80: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x10ce80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x10ce84: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10ce84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10ce88: 0xc06256e  jal         func_1895B8
    ctx->pc = 0x10CE88u;
    SET_GPR_U32(ctx, 31, 0x10CE90u);
    ctx->pc = 0x10CE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE88u;
    // 0x10ce8c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1895B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1895B8u, 0x10CE88u, 0x10CE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE90u;
label_10ce90:
    // 0x10ce90: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x10ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x10ce94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce98: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x10ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x10ce9c: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x10ce9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x10cea0: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x10cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x10cea4: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x10cea4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10cea8: 0x2463bb10  addiu       $v1, $v1, -0x44F0
    ctx->pc = 0x10cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949648));
    // 0x10ceac: 0xac90015c  sw          $s0, 0x15C($a0)
    ctx->pc = 0x10ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 16));
    // 0x10ceb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ceb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ceb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ceb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ceb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ceb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cebc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10cebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10cec0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x10cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10cec4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10cec8: 0xac830158  sw          $v1, 0x158($a0)
    ctx->pc = 0x10cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 3));
    // 0x10cecc: 0x3e00008  jr          $ra
    ctx->pc = 0x10CECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CECCu;
        // 0x10ced0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CED4u;
}
