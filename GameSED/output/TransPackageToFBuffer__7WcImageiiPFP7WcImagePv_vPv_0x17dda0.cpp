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

// Function: TransPackageToFBuffer__7WcImageiiPFP7WcImagePv_vPv
// Address: 0x17dda0 - 0x17def8
void TransPackageToFBuffer__7WcImageiiPFP7WcImagePv_vPv_0x17dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransPackageToFBuffer__7WcImageiiPFP7WcImagePv_vPv_0x17dda0");
#endif

    switch (ctx->pc) {
        case 0x17deacu: goto label_17deac;
        case 0x17deccu: goto label_17decc;
        case 0x17dedcu: goto label_17dedc;
        default: break;
    }

    ctx->pc = 0x17dda0u;

    // 0x17dda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17dda4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x17dda4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dda8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17ddac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17ddacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddb0: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x17ddb0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ddb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ddb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ddbc: 0x1a0882d  daddu       $s1, $t5, $zero
    ctx->pc = 0x17ddbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17ddc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17ddc4: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x17ddc4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ddcc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x17ddccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddd0: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x17DDD0u;
    {
        const bool branch_taken_0x17ddd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDD0u;
        // 0x17ddd4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddd0) {
            ctx->pc = 0x17DE60u;
            goto label_17de60;
        }
    }
    ctx->pc = 0x17DDD8u;
    // 0x17ddd8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17dddc: 0x8da30028  lw          $v1, 0x28($t5)
    ctx->pc = 0x17dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 40)));
    // 0x17dde0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17dde4: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x17dde4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17dde8: 0xc63bc  dsll32      $t4, $t4, 14
    ctx->pc = 0x17dde8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 14));
    // 0x17ddec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ddf0: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x17ddf0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17ddf4: 0xb5cf8  dsll        $t3, $t3, 19
    ctx->pc = 0x17ddf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 19);
    // 0x17ddf8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x17ddfc: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x17ddfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x17de00: 0x946a0018  lhu         $t2, 0x18($v1)
    ctx->pc = 0x17de00u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x17de04: 0x94670004  lhu         $a3, 0x4($v1)
    ctx->pc = 0x17de04u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17de08: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x17de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x17de0c: 0x94660002  lhu         $a2, 0x2($v1)
    ctx->pc = 0x17de0cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17de10: 0xa56b8  dsll        $t2, $t2, 26
    ctx->pc = 0x17de10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 26);
    // 0x17de14: 0x9469001a  lhu         $t1, 0x1A($v1)
    ctx->pc = 0x17de14u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x17de18: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x17de18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x17de1c: 0x9468000c  lhu         $t0, 0xC($v1)
    ctx->pc = 0x17de1cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17de20: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x17de20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x17de24: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x17de24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17de28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17de28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17de2c: 0x94fb8  dsll        $t1, $t1, 30
    ctx->pc = 0x17de2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 30);
    // 0x17de30: 0x844fc  dsll32      $t0, $t0, 19
    ctx->pc = 0x17de30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 19));
    // 0x17de34: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x17de34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x17de38: 0x9466002e  lhu         $a2, 0x2E($v1)
    ctx->pc = 0x17de38u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x17de3c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x17de3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x17de40: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x17de40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x17de44: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x17de44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x17de48: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x17de48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x17de4c: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x17de4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x17de50: 0xce3021  addu        $a2, $a2, $t6
    ctx->pc = 0x17de50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x17de54: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x17de54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17de58: 0xa4660008  sh          $a2, 0x8($v1)
    ctx->pc = 0x17de58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x17de5c: 0xfc620038  sd          $v0, 0x38($v1)
    ctx->pc = 0x17de5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 2));
label_17de60:
    // 0x17de60: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DE60u;
    {
        const bool branch_taken_0x17de60 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE60u;
        // 0x17de64: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de60) {
            ctx->pc = 0x17DE88u;
            goto label_17de88;
        }
    }
    ctx->pc = 0x17DE68u;
    // 0x17de68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17de68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17de6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17de6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17de70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17de70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17de74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17de74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17de78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17de78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17de7c: 0x805f72a  j           func_17DCA8
    ctx->pc = 0x17DE7Cu;
    ctx->pc = 0x17DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE7Cu;
    // 0x17de80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DCA8u;
    WImageTransPackageProc__FP7WcImagei_0x17dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x17DE84u;
    // 0x17de84: 0x0  nop
    ctx->pc = 0x17de84u;
    // NOP
label_17de88:
    // 0x17de88: 0xadaf0038  sw          $t7, 0x38($t5)
    ctx->pc = 0x17de88u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 15));
    // 0x17de8c: 0xadb0003c  sw          $s0, 0x3C($t5)
    ctx->pc = 0x17de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 16));
    // 0x17de90: 0x2453e768  addiu       $s3, $v0, -0x1898
    ctx->pc = 0x17de90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961000));
    // 0x17de94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17de94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de98: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE98u;
    {
        const bool branch_taken_0x17de98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE98u;
        // 0x17de9c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de98) {
            ctx->pc = 0x17DEA4u;
            goto label_17dea4;
        }
    }
    ctx->pc = 0x17DEA0u;
    // 0x17dea0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17dea4:
    // 0x17dea4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17DEA4u;
    SET_GPR_U32(ctx, 31, 0x17DEACu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17DEA4u, 0x17DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DEACu;
label_17deac:
    // 0x17deac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17deacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17deb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17deb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deb8: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x17deb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17debc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17debcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dec0: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x17dec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17dec4: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x17DEC4u;
    SET_GPR_U32(ctx, 31, 0x17DECCu);
    ctx->pc = 0x17DEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DEC4u;
    // 0x17dec8: 0x240903f8  addiu       $t1, $zero, 0x3F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x17DEC4u, 0x17DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DECCu;
label_17decc:
    // 0x17decc: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x17deccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x17ded0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ded4: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x17DED4u;
    SET_GPR_U32(ctx, 31, 0x17DEDCu);
    ctx->pc = 0x17DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DED4u;
    // 0x17ded8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x17DED4u, 0x17DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DEDCu;
label_17dedc:
    // 0x17dedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17dedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17dee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17dee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17dee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dee8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17dee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17deec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17deecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17def0: 0x3e00008  jr          $ra
    ctx->pc = 0x17DEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEF0u;
        // 0x17def4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DEF8u;
}
