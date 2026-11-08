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

// Function: ground_render_proc__FP9WcHitpolyP15WHitpolyPackageiP9FVector32
// Address: 0x13da28 - 0x13e140
void ground_render_proc__FP9WcHitpolyP15WHitpolyPackageiP9FVector32_0x13da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ground_render_proc__FP9WcHitpolyP15WHitpolyPackageiP9FVector32_0x13da28");
#endif

    switch (ctx->pc) {
        case 0x13daa0u: goto label_13daa0;
        case 0x13daa8u: goto label_13daa8;
        case 0x13daccu: goto label_13dacc;
        case 0x13db10u: goto label_13db10;
        case 0x13db18u: goto label_13db18;
        case 0x13db3cu: goto label_13db3c;
        case 0x13dc60u: goto label_13dc60;
        case 0x13dcd4u: goto label_13dcd4;
        case 0x13dce0u: goto label_13dce0;
        case 0x13dd00u: goto label_13dd00;
        case 0x13dd08u: goto label_13dd08;
        case 0x13dd30u: goto label_13dd30;
        case 0x13dda0u: goto label_13dda0;
        case 0x13dda8u: goto label_13dda8;
        case 0x13ddccu: goto label_13ddcc;
        case 0x13df90u: goto label_13df90;
        case 0x13df98u: goto label_13df98;
        case 0x13dfb8u: goto label_13dfb8;
        case 0x13dfc0u: goto label_13dfc0;
        case 0x13dfe8u: goto label_13dfe8;
        case 0x13e03cu: goto label_13e03c;
        case 0x13e064u: goto label_13e064;
        case 0x13e06cu: goto label_13e06c;
        case 0x13e080u: goto label_13e080;
        case 0x13e0b0u: goto label_13e0b0;
        case 0x13e0e0u: goto label_13e0e0;
        case 0x13e0e8u: goto label_13e0e8;
        case 0x13e0f8u: goto label_13e0f8;
        default: break;
    }

    ctx->pc = 0x13da28u;

    // 0x13da28: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x13da28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x13da2c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13da30: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x13da30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x13da34: 0x2453d650  addiu       $s3, $v0, -0x29B0
    ctx->pc = 0x13da34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x13da38: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x13da38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x13da3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13da3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da40: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x13da40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x13da44: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x13da44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da48: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x13da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x13da4c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x13da4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da50: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x13da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x13da54: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x13da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x13da58: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x13da58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x13da5c: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x13da5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x13da60: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x13da60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x13da64: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x13da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x13da68: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x13da68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x13da6c: 0x8fd50014  lw          $s5, 0x14($fp)
    ctx->pc = 0x13da6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x13da70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13DA70u;
    {
        const bool branch_taken_0x13da70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA70u;
        // 0x13da74: 0x8fd60018  lw          $s6, 0x18($fp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da70) {
            ctx->pc = 0x13DA98u;
            goto label_13da98;
        }
    }
    ctx->pc = 0x13DA78u;
    // 0x13da78: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x13da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x13da7c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13da80: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13da80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13da84: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13da84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13da88: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x13da88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13da8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13DA8Cu;
    {
        const bool branch_taken_0x13da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA8Cu;
        // 0x13da90: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da8c) {
            ctx->pc = 0x13DACCu;
            goto label_13dacc;
        }
    }
    ctx->pc = 0x13DA94u;
    // 0x13da94: 0x0  nop
    ctx->pc = 0x13da94u;
    // NOP
label_13da98:
    // 0x13da98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DA98u;
    SET_GPR_U32(ctx, 31, 0x13DAA0u);
    ctx->pc = 0x13DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA98u;
    // 0x13da9c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DA98u, 0x13DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAA0u;
label_13daa0:
    // 0x13daa0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DAA0u;
    SET_GPR_U32(ctx, 31, 0x13DAA8u);
    ctx->pc = 0x13DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAA0u;
    // 0x13daa4: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DAA0u, 0x13DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAA8u;
label_13daa8:
    // 0x13daa8: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x13daa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13daac: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x13daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13dab0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x13dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13dab4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x13dab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13dab8: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13dabc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13dabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13dac0: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x13dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x13dac4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13DAC4u;
    SET_GPR_U32(ctx, 31, 0x13DACCu);
    ctx->pc = 0x13DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAC4u;
    // 0x13dac8: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13DAC4u, 0x13DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DACCu;
label_13dacc:
    // 0x13dacc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13dad0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x13dad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dad4: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x13dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x13dad8: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x13dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x13dadc: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x13dadcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13dae0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x13dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x13dae4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13DAE4u;
    {
        const bool branch_taken_0x13dae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAE4u;
        // 0x13dae8: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dae4) {
            ctx->pc = 0x13DB08u;
            goto label_13db08;
        }
    }
    ctx->pc = 0x13DAECu;
    // 0x13daec: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x13daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x13daf0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13daf4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13daf8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13daf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13dafc: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x13dafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13db00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13DB00u;
    {
        const bool branch_taken_0x13db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB00u;
        // 0x13db04: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db00) {
            ctx->pc = 0x13DB3Cu;
            goto label_13db3c;
        }
    }
    ctx->pc = 0x13DB08u;
label_13db08:
    // 0x13db08: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DB08u;
    SET_GPR_U32(ctx, 31, 0x13DB10u);
    ctx->pc = 0x13DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB08u;
    // 0x13db0c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DB08u, 0x13DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB10u;
label_13db10:
    // 0x13db10: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DB10u;
    SET_GPR_U32(ctx, 31, 0x13DB18u);
    ctx->pc = 0x13DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB10u;
    // 0x13db14: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DB10u, 0x13DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB18u;
label_13db18:
    // 0x13db18: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x13db18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13db1c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x13db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13db20: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x13db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13db24: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x13db24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13db28: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13db2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13db2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13db30: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x13db30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x13db34: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13DB34u;
    SET_GPR_U32(ctx, 31, 0x13DB3Cu);
    ctx->pc = 0x13DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB34u;
    // 0x13db38: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13DB34u, 0x13DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB3Cu;
label_13db3c:
    // 0x13db3c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x13db3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db40: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13db40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13db44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13db44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db48: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13db48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13db4c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x13db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13db50: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x13db50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13db54: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x13db54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x13db58: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x13db58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x13db5c: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x13db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x13db60: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x13db60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x13db64: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x13db64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x13db68: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x13db68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x13db6c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x13db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x13db70: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x13db70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x13db74: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x13db74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    // 0x13db78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13db78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db7c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13db7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13db80: 0x90e2c478  lbu         $v0, -0x3B88($a3)
    ctx->pc = 0x13db80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x1FC478u));
    // 0x13db84: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x13db84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13db88: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x13db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x13db8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13db8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13db90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13db90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13db94: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x13db94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x13db98: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x13db98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13db9c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x13db9cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x13dba0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x13dba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13dba4: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x13dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x13dba8: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x13dba8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x13dbac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x13dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x13dbb0: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x13dbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x13dbb4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13dbb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13dbb8: 0x2491023  subu        $v0, $s2, $t1
    ctx->pc = 0x13dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x13dbbc: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x13dbbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13dbc0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13dbc4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x13dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13dbc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13dbcc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x13dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13dbd0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13dbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13dbd4: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x13dbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x13dbd8: 0x34e7c000  ori         $a3, $a3, 0xC000
    ctx->pc = 0x13dbd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)49152);
    // 0x13dbdc: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x13dbdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x13dbe0: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x13dbe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x13dbe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13dbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13dbe8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x13dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x13dbec: 0x2408444e  addiu       $t0, $zero, 0x444E
    ctx->pc = 0x13dbecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17486));
    // 0x13dbf0: 0xfd2a0008  sd          $t2, 0x8($t1)
    ctx->pc = 0x13dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 10));
    // 0x13dbf4: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x13dbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x13dbf8: 0x2484ebb0  addiu       $a0, $a0, -0x1450
    ctx->pc = 0x13dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962096));
    // 0x13dbfc: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x13dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
    // 0x13dc00: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x13dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x13dc04: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x13dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x13dc08: 0xffa80058  sd          $t0, 0x58($sp)
    ctx->pc = 0x13dc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 8));
    // 0x13dc0c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x13dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x13dc10: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x13dc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x13dc14: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x13dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x13dc18: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x13dc18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13dc1c: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x13dc1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13dc20: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x13dc20u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13dc24: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x13dc24u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13dc28: 0xd8d20000  lqc2        $vf18, 0x0($a2)
    ctx->pc = 0x13dc28u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13dc2c: 0xd8b30000  lqc2        $vf19, 0x0($a1)
    ctx->pc = 0x13dc2cu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13dc30: 0xd8740000  lqc2        $vf20, 0x0($v1)
    ctx->pc = 0x13dc30u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(FAST_READ128(0x21EC70u));
    // 0x13dc34: 0xd8750010  lqc2        $vf21, 0x10($v1)
    ctx->pc = 0x13dc34u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(FAST_READ128(0x21EC80u));
    // 0x13dc38: 0xd8760020  lqc2        $vf22, 0x20($v1)
    ctx->pc = 0x13dc38u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(FAST_READ128(0x21EC90u));
    // 0x13dc3c: 0xd8770030  lqc2        $vf23, 0x30($v1)
    ctx->pc = 0x13dc3cu;
    ctx->vu0_vf[23] = _mm_castsi128_ps(FAST_READ128(0x21ECA0u));
    // 0x13dc40: 0x97c20002  lhu         $v0, 0x2($fp)
    ctx->pc = 0x13dc40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x13dc44: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x13DC44u;
    {
        const bool branch_taken_0x13dc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC44u;
        // 0x13dc48: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc44) {
            ctx->pc = 0x13DF30u;
            goto label_13df30;
        }
    }
    ctx->pc = 0x13DC4Cu;
    // 0x13dc4c: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x13dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x13dc50: 0xafb100d8  sw          $s1, 0xD8($sp)
    ctx->pc = 0x13dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 17));
    // 0x13dc54: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x13dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x13dc58: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x13dc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc5c: 0x0  nop
    ctx->pc = 0x13dc5cu;
    // NOP
label_13dc60:
    // 0x13dc60: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc64: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x13dc64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13dc68: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x13dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13dc6c: 0x2471823  subu        $v1, $s2, $a3
    ctx->pc = 0x13dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x13dc70: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x13dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x13dc74: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x13dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x13dc78: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x13dc78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13dc7c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x13dc7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x13dc80: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x13DC80u;
    {
        const bool branch_taken_0x13dc80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC80u;
        // 0x13dc84: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc80) {
            ctx->pc = 0x13DDE8u;
            goto label_13dde8;
        }
    }
    ctx->pc = 0x13DC88u;
    // 0x13dc88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13dc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc8c: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x13dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x13dc90: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x13dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x13dc94: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dc98: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x13dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x13dc9c: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x13dc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x13dca0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x13dca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13dca4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13dca8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13dca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dcac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13dcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13dcb0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x13dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x13dcb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13dcb8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x13dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x13dcbc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13dcc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13dcc4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x13dcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13dcc8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x13dccc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DCCCu;
    SET_GPR_U32(ctx, 31, 0x13DCD4u);
    ctx->pc = 0x13DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DCCCu;
    // 0x13dcd0: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DCCCu, 0x13DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCD4u;
label_13dcd4:
    // 0x13dcd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13dcd8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13dcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13dcdc: 0x0  nop
    ctx->pc = 0x13dcdcu;
    // NOP
label_13dce0:
    // 0x13dce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dce4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13dce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13dce8: 0x0  nop
    ctx->pc = 0x13dce8u;
    // NOP
    // 0x13dcec: 0x0  nop
    ctx->pc = 0x13dcecu;
    // NOP
    // 0x13dcf0: 0x0  nop
    ctx->pc = 0x13dcf0u;
    // NOP
    // 0x13dcf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13DCF4u;
    {
        const bool branch_taken_0x13dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dcf4) {
            ctx->pc = 0x13DCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dce0;
        }
    }
    ctx->pc = 0x13DCFCu;
    // 0x13dcfc: 0x0  nop
    ctx->pc = 0x13dcfcu;
    // NOP
label_13dd00:
    // 0x13dd00: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13DD00u;
    SET_GPR_U32(ctx, 31, 0x13DD08u);
    ctx->pc = 0x13DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD00u;
    // 0x13dd04: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13DD00u, 0x13DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD08u;
label_13dd08:
    // 0x13dd08: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13dd0c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13DD0Cu;
    {
        const bool branch_taken_0x13dd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD0Cu;
        // 0x13dd10: 0x14102b  sltu        $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd0c) {
            ctx->pc = 0x13DD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dd00;
        }
    }
    ctx->pc = 0x13DD14u;
    // 0x13dd14: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x13dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13dd18: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DD18u;
    {
        const bool branch_taken_0x13dd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD18u;
        // 0x13dd1c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd18) {
            ctx->pc = 0x13DD30u;
            goto label_13dd30;
        }
    }
    ctx->pc = 0x13DD20u;
    // 0x13dd20: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x13dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x13dd24: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x13dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x13dd28: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13DD28u;
    SET_GPR_U32(ctx, 31, 0x13DD30u);
    ctx->pc = 0x13DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD28u;
    // 0x13dd2c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13DD28u, 0x13DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD30u;
label_13dd30:
    // 0x13dd30: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x13dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13dd34: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13dd38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13dd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13dd3c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13dd40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13dd44: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x13dd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x13dd48: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13dd4c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x13dd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13dd50: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x13dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x13dd54: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x13dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13dd58: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x13dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x13dd5c: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13dd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13dd60: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x13dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x13dd64: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x13dd64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x13dd68: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x13dd6c: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x13dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13dd70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13DD70u;
    {
        const bool branch_taken_0x13dd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dd70) {
            ctx->pc = 0x13DD98u;
            goto label_13dd98;
        }
    }
    ctx->pc = 0x13DD78u;
    // 0x13dd78: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x13dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x13dd7c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13dd80: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13dd84: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13dd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13dd88: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x13dd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13dd8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13DD8Cu;
    {
        const bool branch_taken_0x13dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD8Cu;
        // 0x13dd90: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd8c) {
            ctx->pc = 0x13DDCCu;
            goto label_13ddcc;
        }
    }
    ctx->pc = 0x13DD94u;
    // 0x13dd94: 0x0  nop
    ctx->pc = 0x13dd94u;
    // NOP
label_13dd98:
    // 0x13dd98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DD98u;
    SET_GPR_U32(ctx, 31, 0x13DDA0u);
    ctx->pc = 0x13DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD98u;
    // 0x13dd9c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DD98u, 0x13DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDA0u;
label_13dda0:
    // 0x13dda0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DDA0u;
    SET_GPR_U32(ctx, 31, 0x13DDA8u);
    ctx->pc = 0x13DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDA0u;
    // 0x13dda4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DDA0u, 0x13DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDA8u;
label_13dda8:
    // 0x13dda8: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x13dda8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x13ddac: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x13ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x13ddb0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x13ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13ddb4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x13ddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13ddb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ddbc: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x13ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x13ddc0: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x13ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    // 0x13ddc4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13DDC4u;
    SET_GPR_U32(ctx, 31, 0x13DDCCu);
    ctx->pc = 0x13DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDC4u;
    // 0x13ddc8: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13DDC4u, 0x13DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDCCu;
label_13ddcc:
    // 0x13ddcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ddd0: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x13ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x13ddd4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x13ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x13ddd8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13dddc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13DDDCu;
    {
        const bool branch_taken_0x13dddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDDCu;
        // 0x13dde0: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dddc) {
            ctx->pc = 0x13DDECu;
            goto label_13ddec;
        }
    }
    ctx->pc = 0x13DDE4u;
    // 0x13dde4: 0x0  nop
    ctx->pc = 0x13dde4u;
    // NOP
label_13dde8:
    // 0x13dde8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13dde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13ddec:
    // 0x13ddec: 0x96a70004  lhu         $a3, 0x4($s5)
    ctx->pc = 0x13ddecu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13ddf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13ddf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ddf4: 0x96a60006  lhu         $a2, 0x6($s5)
    ctx->pc = 0x13ddf4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x13ddf8: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x13ddf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13ddfc: 0x96a50008  lhu         $a1, 0x8($s5)
    ctx->pc = 0x13ddfcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13de00: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x13de00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x13de04: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13de08: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13de08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13de0c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13de10: 0x2c73821  addu        $a3, $s6, $a3
    ctx->pc = 0x13de10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x13de14: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x13de14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x13de18: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x13de18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x13de1c: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x13de1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x13de20: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x13de20u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13de24: 0xd8c90000  lqc2        $vf9, 0x0($a2)
    ctx->pc = 0x13de24u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13de28: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x13de28u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13de2c: 0xd9110000  lqc2        $vf17, 0x0($t0)
    ctx->pc = 0x13de2cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13de30: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x13de30u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x13de34: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13de34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de38: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13de38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de3c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13de3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de40: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x13de40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13de44: 0x4be8a1bc  vmulax.xyzw $ACC, $vf20, $vf8x
    ctx->pc = 0x13de44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de48: 0x4be8a8bd  vmadday.xyzw $ACC, $vf21, $vf8y
    ctx->pc = 0x13de48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de4c: 0x4be8b0be  vmaddaz.xyzw $ACC, $vf22, $vf8z
    ctx->pc = 0x13de4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de50: 0x4be8bbcb  vmaddw.xyzw $vf15, $vf23, $vf8w
    ctx->pc = 0x13de50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13de54: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x13de54u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13de58: 0x4af19b3c  vmove.yzw   $vf17, $vf19
    ctx->pc = 0x13de58u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x13de5c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x13de5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de60: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x13de60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de64: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x13de64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de68: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x13de68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x13de6c: 0x4bcf79ff  .word       0x4BCF79FF                   # vclipw.xyz  $vf15, $vf15w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13de6cu;
    { __m128 fs = ctx->vu0_vf[15]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13de70: 0x4a0003bf  vwaitq
    ctx->pc = 0x13de70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13de74: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x13de74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13de78: 0x4bed03bc  vdiv        $Q, $vf0w, $vf13w
    ctx->pc = 0x13de78u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13de7c: 0xfa510010  sqc2        $vf17, 0x10($s2)
    ctx->pc = 0x13de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x13de80: 0xfa520000  sqc2        $vf18, 0x0($s2)
    ctx->pc = 0x13de80u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x13de84: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x13de84u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13de88: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x13de88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de8c: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x13de8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de90: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x13de90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de94: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x13de94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x13de98: 0x4a0003bf  vwaitq
    ctx->pc = 0x13de98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13de9c: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x13de9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x13dea0: 0x4bee03bc  vdiv        $Q, $vf0w, $vf14w
    ctx->pc = 0x13dea0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13dea4: 0xfa4c0020  sqc2        $vf12, 0x20($s2)
    ctx->pc = 0x13dea4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x13dea8: 0x4bed697d  vftoi4.xyzw $vf13, $vf13
    ctx->pc = 0x13dea8u;
    { __m128 src = ctx->vu0_vf[13]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x13deac: 0x4be9a1bc  vmulax.xyzw $ACC, $vf20, $vf9x
    ctx->pc = 0x13deacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13deb0: 0x4be9a8bd  vmadday.xyzw $ACC, $vf21, $vf9y
    ctx->pc = 0x13deb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13deb4: 0x4be9b0be  vmaddaz.xyzw $ACC, $vf22, $vf9z
    ctx->pc = 0x13deb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13deb8: 0x4be9bbcb  vmaddw.xyzw $vf15, $vf23, $vf9w
    ctx->pc = 0x13deb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13debc: 0x4a0003bf  vwaitq
    ctx->pc = 0x13debcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13dec0: 0x4bc0739c  vmulq.xyz   $vf14, $vf14, $Q
    ctx->pc = 0x13dec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x13dec4: 0x4bcf79ff  .word       0x4BCF79FF                   # vclipw.xyz  $vf15, $vf15w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13dec4u;
    { __m128 fs = ctx->vu0_vf[15]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13dec8: 0xfa4d0030  sqc2        $vf13, 0x30($s2)
    ctx->pc = 0x13dec8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x13decc: 0x4bee717d  vftoi4.xyzw $vf14, $vf14
    ctx->pc = 0x13deccu;
    { __m128 src = ctx->vu0_vf[14]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x13ded0: 0x4beaa1bc  vmulax.xyzw $ACC, $vf20, $vf10x
    ctx->pc = 0x13ded0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13ded4: 0x4beaa8bd  vmadday.xyzw $ACC, $vf21, $vf10y
    ctx->pc = 0x13ded4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13ded8: 0x4beab0be  vmaddaz.xyzw $ACC, $vf22, $vf10z
    ctx->pc = 0x13ded8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13dedc: 0x4beabbcb  vmaddw.xyzw $vf15, $vf23, $vf10w
    ctx->pc = 0x13dedcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13dee0: 0xfa4e0040  sqc2        $vf14, 0x40($s2)
    ctx->pc = 0x13dee0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x13dee4: 0x4bcf79ff  .word       0x4BCF79FF                   # vclipw.xyz  $vf15, $vf15w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13dee4u;
    { __m128 fs = ctx->vu0_vf[15]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13dee8: 0x4a0002ff  vnop
    ctx->pc = 0x13dee8u;
    // NOP operation, no action needed for VU0
    // 0x13deec: 0x4a0002ff  vnop
    ctx->pc = 0x13deecu;
    // NOP operation, no action needed for VU0
    // 0x13def0: 0x4a0002ff  vnop
    ctx->pc = 0x13def0u;
    // NOP operation, no action needed for VU0
    // 0x13def4: 0x4a0002ff  vnop
    ctx->pc = 0x13def4u;
    // NOP operation, no action needed for VU0
    // 0x13def8: 0x4a0002ff  vnop
    ctx->pc = 0x13def8u;
    // NOP operation, no action needed for VU0
    // 0x13defc: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x13defcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x13df00: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13df00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13df04: 0x2063ffff  addi        $v1, $v1, -0x1
    ctx->pc = 0x13df04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x13df08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13df0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DF0Cu;
    {
        const bool branch_taken_0x13df0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df0c) {
            ctx->pc = 0x13DF1Cu;
            goto label_13df1c;
        }
    }
    ctx->pc = 0x13DF14u;
    // 0x13df14: 0x0  nop
    ctx->pc = 0x13df14u;
    // NOP
    // 0x13df18: 0x22520050  addi        $s2, $s2, 0x50
    ctx->pc = 0x13df18u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)80, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_13df1c:
    // 0x13df1c: 0x97c40002  lhu         $a0, 0x2($fp)
    ctx->pc = 0x13df1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x13df20: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x13df20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x13df24: 0x2e4202a  slt         $a0, $s7, $a0
    ctx->pc = 0x13df24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13df28: 0x1480ff4d  bnez        $a0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x13DF28u;
    {
        const bool branch_taken_0x13df28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF28u;
        // 0x13df2c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df28) {
            ctx->pc = 0x13DC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dc60;
        }
    }
    ctx->pc = 0x13DF30u;
label_13df30:
    // 0x13df30: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x13df30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13df34: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x13df34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13df38: 0x2471023  subu        $v0, $s2, $a3
    ctx->pc = 0x13df38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x13df3c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13df40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13df44: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13DF44u;
    {
        const bool branch_taken_0x13df44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF44u;
        // 0x13df48: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df44) {
            ctx->pc = 0x13E028u;
            goto label_13e028;
        }
    }
    ctx->pc = 0x13DF4Cu;
    // 0x13df4c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13df50: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13df50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13df54: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x13df54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x13df58: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x13df58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x13df5c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x13df5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13df60: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x13df60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x13df64: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13df64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13df68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13df68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13df6c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x13df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x13df70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13df74: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x13df74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x13df78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13df7c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13df80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13df80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13df84: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x13df84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x13df88: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DF88u;
    SET_GPR_U32(ctx, 31, 0x13DF90u);
    ctx->pc = 0x13DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF88u;
    // 0x13df8c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DF88u, 0x13DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF90u;
label_13df90:
    // 0x13df90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13df90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13df94: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13df94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_13df98:
    // 0x13df98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13df98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13df9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13dfa0: 0x0  nop
    ctx->pc = 0x13dfa0u;
    // NOP
    // 0x13dfa4: 0x0  nop
    ctx->pc = 0x13dfa4u;
    // NOP
    // 0x13dfa8: 0x0  nop
    ctx->pc = 0x13dfa8u;
    // NOP
    // 0x13dfac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13DFACu;
    {
        const bool branch_taken_0x13dfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dfac) {
            ctx->pc = 0x13DF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13df98;
        }
    }
    ctx->pc = 0x13DFB4u;
    // 0x13dfb4: 0x0  nop
    ctx->pc = 0x13dfb4u;
    // NOP
label_13dfb8:
    // 0x13dfb8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13DFB8u;
    SET_GPR_U32(ctx, 31, 0x13DFC0u);
    ctx->pc = 0x13DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFB8u;
    // 0x13dfbc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13DFB8u, 0x13DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFC0u;
label_13dfc0:
    // 0x13dfc0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13dfc4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13DFC4u;
    {
        const bool branch_taken_0x13dfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFC4u;
        // 0x13dfc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfc4) {
            ctx->pc = 0x13DFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dfb8;
        }
    }
    ctx->pc = 0x13DFCCu;
    // 0x13dfcc: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x13dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13dfd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13dfd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13dfd4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DFD4u;
    {
        const bool branch_taken_0x13dfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFD4u;
        // 0x13dfd8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfd4) {
            ctx->pc = 0x13DFE8u;
            goto label_13dfe8;
        }
    }
    ctx->pc = 0x13DFDCu;
    // 0x13dfdc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x13dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x13dfe0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13DFE0u;
    SET_GPR_U32(ctx, 31, 0x13DFE8u);
    ctx->pc = 0x13DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFE0u;
    // 0x13dfe4: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13DFE0u, 0x13DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFE8u;
label_13dfe8:
    // 0x13dfe8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x13dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13dfec: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13dff0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13dff4: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x13dff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13dff8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13dffc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x13dffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x13e000: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x13e000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x13e004: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x13e004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x13e008: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x13e008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13e00c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13e00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13e010: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13e010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13e014: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x13e014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x13e018: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x13e018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x13e01c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13E01Cu;
    {
        const bool branch_taken_0x13e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E01Cu;
        // 0x13e020: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e01c) {
            ctx->pc = 0x13E09Cu;
            goto label_13e09c;
        }
    }
    ctx->pc = 0x13E024u;
    // 0x13e024: 0x0  nop
    ctx->pc = 0x13e024u;
    // NOP
label_13e028:
    // 0x13e028: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x13e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x13e02c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13E02Cu;
    {
        const bool branch_taken_0x13e02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E02Cu;
        // 0x13e030: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e02c) {
            ctx->pc = 0x13E078u;
            goto label_13e078;
        }
    }
    ctx->pc = 0x13E034u;
    // 0x13e034: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E034u;
    SET_GPR_U32(ctx, 31, 0x13E03Cu);
    ctx->pc = 0x13E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E034u;
    // 0x13e038: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E034u, 0x13E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E03Cu;
label_13e03c:
    // 0x13e03c: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x13e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13e040: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x13e040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13e044: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x13e044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13e048: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x13e048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x13e04c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13e04cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13e050: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13e050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13e054: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13e054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13e058: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x13e058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x13e05c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E05Cu;
    SET_GPR_U32(ctx, 31, 0x13E064u);
    ctx->pc = 0x13E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E05Cu;
    // 0x13e060: 0xae70008c  sw          $s0, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E05Cu, 0x13E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E064u;
label_13e064:
    // 0x13e064: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E064u;
    SET_GPR_U32(ctx, 31, 0x13E06Cu);
    ctx->pc = 0x13E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E064u;
    // 0x13e068: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E064u, 0x13E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E06Cu;
label_13e06c:
    // 0x13e06c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13E06Cu;
    {
        const bool branch_taken_0x13e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E06Cu;
        // 0x13e070: 0x8e620094  lw          $v0, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e06c) {
            ctx->pc = 0x13E0A0u;
            goto label_13e0a0;
        }
    }
    ctx->pc = 0x13E074u;
    // 0x13e074: 0x0  nop
    ctx->pc = 0x13e074u;
    // NOP
label_13e078:
    // 0x13e078: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13e078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13e07c: 0x0  nop
    ctx->pc = 0x13e07cu;
    // NOP
label_13e080:
    // 0x13e080: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e084: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13e084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13e088: 0x0  nop
    ctx->pc = 0x13e088u;
    // NOP
    // 0x13e08c: 0x0  nop
    ctx->pc = 0x13e08cu;
    // NOP
    // 0x13e090: 0x0  nop
    ctx->pc = 0x13e090u;
    // NOP
    // 0x13e094: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13E094u;
    {
        const bool branch_taken_0x13e094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e094) {
            ctx->pc = 0x13E080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e080;
        }
    }
    ctx->pc = 0x13E09Cu;
label_13e09c:
    // 0x13e09c: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x13e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_13e0a0:
    // 0x13e0a0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13E0A0u;
    {
        const bool branch_taken_0x13e0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e0a0) {
            ctx->pc = 0x13E0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E0A0u;
            // 0x13e0a4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E0F0u;
            goto label_13e0f0;
        }
    }
    ctx->pc = 0x13E0A8u;
    // 0x13e0a8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E0A8u;
    SET_GPR_U32(ctx, 31, 0x13E0B0u);
    ctx->pc = 0x13E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0A8u;
    // 0x13e0ac: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E0A8u, 0x13E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0B0u;
label_13e0b0:
    // 0x13e0b0: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x13e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13e0b4: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x13e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x13e0b8: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x13e0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13e0bc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x13e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x13e0c0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x13e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x13e0c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13e0c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13e0c8: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13e0cc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13e0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13e0d0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x13e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x13e0d4: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x13e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x13e0d8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E0D8u;
    SET_GPR_U32(ctx, 31, 0x13E0E0u);
    ctx->pc = 0x13E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0D8u;
    // 0x13e0dc: 0xae62008c  sw          $v0, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E0D8u, 0x13E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0E0u;
label_13e0e0:
    // 0x13e0e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E0E0u;
    SET_GPR_U32(ctx, 31, 0x13E0E8u);
    ctx->pc = 0x13E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E0E0u;
    // 0x13e0e4: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E0E0u, 0x13E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0E8u;
label_13e0e8:
    // 0x13e0e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13E0E8u;
    {
        const bool branch_taken_0x13e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0E8u;
        // 0x13e0ec: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0e8) {
            ctx->pc = 0x13E114u;
            goto label_13e114;
        }
    }
    ctx->pc = 0x13E0F0u;
label_13e0f0:
    // 0x13e0f0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13e0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13e0f4: 0x0  nop
    ctx->pc = 0x13e0f4u;
    // NOP
label_13e0f8:
    // 0x13e0f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e0fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13e0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13e100: 0x0  nop
    ctx->pc = 0x13e100u;
    // NOP
    // 0x13e104: 0x0  nop
    ctx->pc = 0x13e104u;
    // NOP
    // 0x13e108: 0x0  nop
    ctx->pc = 0x13e108u;
    // NOP
    // 0x13e10c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13E10Cu;
    {
        const bool branch_taken_0x13e10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E10Cu;
        // 0x13e110: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e10c) {
            ctx->pc = 0x13E0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e0f8;
        }
    }
    ctx->pc = 0x13E114u;
label_13e114:
    // 0x13e114: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x13e114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13e118: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x13e118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13e11c: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x13e11cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x13e120: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x13e120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13e124: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x13e124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x13e128: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x13e128u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13e12c: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x13e12cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13e130: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x13e130u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13e134: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x13e134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x13e138: 0x3e00008  jr          $ra
    ctx->pc = 0x13E138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E138u;
        // 0x13e13c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E140u;
}
