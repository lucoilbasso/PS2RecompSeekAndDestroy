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

// Function: Cmd_ANTI_FLICKER_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x10bed8 - 0x10bfa4
void Cmd_ANTI_FLICKER_MAKE_Entry__FP15BsSCDEntControl_0x10bed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ANTI_FLICKER_MAKE_Entry__FP15BsSCDEntControl_0x10bed8");
#endif

    switch (ctx->pc) {
        case 0x10bf0cu: goto label_10bf0c;
        case 0x10bf18u: goto label_10bf18;
        case 0x10bf24u: goto label_10bf24;
        case 0x10bf30u: goto label_10bf30;
        case 0x10bf3cu: goto label_10bf3c;
        case 0x10bf44u: goto label_10bf44;
        case 0x10bf7cu: goto label_10bf7c;
        default: break;
    }

    ctx->pc = 0x10bed8u;

    // 0x10bed8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10bed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10bedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10bee8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10bee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10beec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10bef0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10bef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10bef4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x10bef4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x10bef8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10bef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10befc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10bf00: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10bf04: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10BF04u;
    SET_GPR_U32(ctx, 31, 0x10BF0Cu);
    ctx->pc = 0x10BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF04u;
    // 0x10bf08: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10BF04u, 0x10BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF0Cu;
label_10bf0c:
    // 0x10bf0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf10: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10BF10u;
    SET_GPR_U32(ctx, 31, 0x10BF18u);
    ctx->pc = 0x10BF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF10u;
    // 0x10bf14: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10BF10u, 0x10BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF18u;
label_10bf18:
    // 0x10bf18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf1c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10BF1Cu;
    SET_GPR_U32(ctx, 31, 0x10BF24u);
    ctx->pc = 0x10BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF1Cu;
    // 0x10bf20: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10BF1Cu, 0x10BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF24u;
label_10bf24:
    // 0x10bf24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf28: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10BF28u;
    SET_GPR_U32(ctx, 31, 0x10BF30u);
    ctx->pc = 0x10BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF28u;
    // 0x10bf2c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10BF28u, 0x10BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF30u;
label_10bf30:
    // 0x10bf30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf34: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10BF34u;
    SET_GPR_U32(ctx, 31, 0x10BF3Cu);
    ctx->pc = 0x10BF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF34u;
    // 0x10bf38: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10BF34u, 0x10BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF3Cu;
label_10bf3c:
    // 0x10bf3c: 0xc06256e  jal         func_1895B8
    ctx->pc = 0x10BF3Cu;
    SET_GPR_U32(ctx, 31, 0x10BF44u);
    ctx->pc = 0x10BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF3Cu;
    // 0x10bf40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1895B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1895B8u, 0x10BF3Cu, 0x10BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF44u;
label_10bf44:
    // 0x10bf44: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x10bf44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x10bf48: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x10bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x10bf4c: 0x2610f6d0  addiu       $s0, $s0, -0x930
    ctx->pc = 0x10bf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964944));
    // 0x10bf50: 0x2463bb10  addiu       $v1, $v1, -0x44F0
    ctx->pc = 0x10bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949648));
    // 0x10bf54: 0xac50015c  sw          $s0, 0x15C($v0)
    ctx->pc = 0x10bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 16));
    // 0x10bf58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10bf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf5c: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x10bf5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x25F6D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x25F6D0u, _value); } while (0);
    // 0x10bf60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10bf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf64: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x10bf64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x25F6D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x25F6D4u, _value); } while (0);
    // 0x10bf68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10bf68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf6c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x10bf6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x25F6D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x25F6D8u, _value); } while (0); }
    // 0x10bf70: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x10bf70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x25F6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x25F6DCu, _value); } while (0); }
    // 0x10bf74: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10BF74u;
    SET_GPR_U32(ctx, 31, 0x10BF7Cu);
    ctx->pc = 0x10BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF74u;
    // 0x10bf78: 0xac430158  sw          $v1, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10BF74u, 0x10BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF7Cu;
label_10bf7c:
    // 0x10bf7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bf7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bf80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10bf80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10bf84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10bf84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bf88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10bf88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10bf8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10bf8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bf90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10bf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10bf94: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x10bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10bf98: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10bf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF9Cu;
        // 0x10bfa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BFA4u;
}
