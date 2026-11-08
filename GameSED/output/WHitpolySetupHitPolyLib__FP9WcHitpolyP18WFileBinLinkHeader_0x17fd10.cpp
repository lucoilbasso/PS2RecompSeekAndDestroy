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

// Function: WHitpolySetupHitPolyLib__FP9WcHitpolyP18WFileBinLinkHeader
// Address: 0x17fd10 - 0x17ff3c
void WHitpolySetupHitPolyLib__FP9WcHitpolyP18WFileBinLinkHeader_0x17fd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySetupHitPolyLib__FP9WcHitpolyP18WFileBinLinkHeader_0x17fd10");
#endif

    switch (ctx->pc) {
        case 0x17fd58u: goto label_17fd58;
        case 0x17fd8cu: goto label_17fd8c;
        case 0x17fdb0u: goto label_17fdb0;
        case 0x17fe18u: goto label_17fe18;
        case 0x17fe58u: goto label_17fe58;
        default: break;
    }

    ctx->pc = 0x17fd10u;

    // 0x17fd10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17fd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17fd14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17fd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fd18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17fd20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17fd20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17fd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17fd28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17fd28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17fd30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17fd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17fd34: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17fd38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17fd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17fd3c: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x17fd3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17fd40: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x17fd40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17fd44: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x17FD44u;
    {
        const bool branch_taken_0x17fd44 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD44u;
        // 0x17fd48: 0xa6130022  sh          $s3, 0x22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd44) {
            ctx->pc = 0x17FD74u;
            goto label_17fd74;
        }
    }
    ctx->pc = 0x17FD4Cu;
    // 0x17fd4c: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x17fd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x17fd50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd54: 0x0  nop
    ctx->pc = 0x17fd54u;
    // NOP
label_17fd58:
    // 0x17fd58: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17fd5c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x17fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x17fd60: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17fd64: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x17fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17fd68: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x17fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x17fd6c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FD6Cu;
    {
        const bool branch_taken_0x17fd6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD6Cu;
        // 0x17fd70: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd6c) {
            ctx->pc = 0x17FD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fd58;
        }
    }
    ctx->pc = 0x17FD74u;
label_17fd74:
    // 0x17fd74: 0x132980  sll         $a1, $s3, 6
    ctx->pc = 0x17fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x17fd78: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FD78u;
    {
        const bool branch_taken_0x17fd78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD78u;
        // 0x17fd7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd78) {
            ctx->pc = 0x17FD84u;
            goto label_17fd84;
        }
    }
    ctx->pc = 0x17FD80u;
    // 0x17fd80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17fd84:
    // 0x17fd84: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17FD84u;
    SET_GPR_U32(ctx, 31, 0x17FD8Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17FD84u, 0x17FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD8Cu;
label_17fd8c:
    // 0x17fd8c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x17fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17fd90: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17fd94: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x17fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x17fd98: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x17fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fd9c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FD9Cu;
    {
        const bool branch_taken_0x17fd9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD9Cu;
        // 0x17fda0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd9c) {
            ctx->pc = 0x17FDA8u;
            goto label_17fda8;
        }
    }
    ctx->pc = 0x17FDA4u;
    // 0x17fda4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17fda8:
    // 0x17fda8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17FDA8u;
    SET_GPR_U32(ctx, 31, 0x17FDB0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17FDA8u, 0x17FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDB0u;
label_17fdb0:
    // 0x17fdb0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x17fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17fdb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FDB4u;
    {
        const bool branch_taken_0x17fdb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDB4u;
        // 0x17fdb8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdb4) {
            ctx->pc = 0x17FDC4u;
            goto label_17fdc4;
        }
    }
    ctx->pc = 0x17FDBCu;
    // 0x17fdbc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17FDBCu;
    {
        const bool branch_taken_0x17fdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fdbc) {
            ctx->pc = 0x17FDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FDBCu;
            // 0x17fdc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FE00u;
            goto label_17fe00;
        }
    }
    ctx->pc = 0x17FDC4u;
label_17fdc4:
    // 0x17fdc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17fdc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fdcc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17fdd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17fdd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17fdd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17fdd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fdd8: 0x24a57d78  addiu       $a1, $a1, 0x7D78
    ctx->pc = 0x17fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32120));
    // 0x17fddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17fddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fde0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17fde4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17fde4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fde8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17fde8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fdec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17fdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fdf0: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x17fdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fdf4: 0x8068186  j           func_1A0618
    ctx->pc = 0x17FDF4u;
    ctx->pc = 0x17FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDF4u;
    // 0x17fdf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x17FDFCu;
    // 0x17fdfc: 0x0  nop
    ctx->pc = 0x17fdfcu;
    // NOP
label_17fe00:
    // 0x17fe00: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17fe00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe04: 0x1a600043  blez        $s3, . + 4 + (0x43 << 2)
    ctx->pc = 0x17FE04u;
    {
        const bool branch_taken_0x17fe04 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE04u;
        // 0x17fe08: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe04) {
            ctx->pc = 0x17FF14u;
            goto label_17ff14;
        }
    }
    ctx->pc = 0x17FE0Cu;
    // 0x17fe0c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x17fe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x17fe10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17fe10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17fe14: 0x0  nop
    ctx->pc = 0x17fe14u;
    // NOP
label_17fe18:
    // 0x17fe18: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x17fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x17fe1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe20: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x17fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17fe24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x17fe24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17fe2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17fe2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17fe34: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x17fe34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17fe38: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x17fe38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17fe3c: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x17fe3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17fe40: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x17fe40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17fe44: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x17fe44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x17fe48: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x17fe48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x17fe4c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x17fe4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17fe50: 0xc05ffd0  jal         func_17FF40
    ctx->pc = 0x17FE50u;
    SET_GPR_U32(ctx, 31, 0x17FE58u);
    ctx->pc = 0x17FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE50u;
    // 0x17fe54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FF40u, 0x17FE50u, 0x17FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE58u;
label_17fe58:
    // 0x17fe58: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x17fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17fe5c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x17fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x17fe60: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x17fe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17fe64: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x17fe64u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x17fe68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe6c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x17fe6cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x17fe70: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x17fe70u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x17fe74: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x17fe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fe78: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x17fe78u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x17fe7c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x17fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe80: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x17fe80u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x17fe84: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x17fe84u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x17fe88: 0x460110e8  max.s       $f3, $f2, $f1
    ctx->pc = 0x17fe88u;
    ctx->f[3] = std::max(ctx->f[2], ctx->f[1]);
    // 0x17fe8c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x17fe8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17fe90: 0xc7848554  lwc1        $f4, -0x7AAC($gp)
    ctx->pc = 0x17fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17fe94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x17fe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x17fe98: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FE98u;
    {
        const bool branch_taken_0x17fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe98) {
            ctx->pc = 0x17FE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FE98u;
            // 0x17fe9c: 0xc4810004  lwc1        $f1, 0x4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FEA8u;
            goto label_17fea8;
        }
    }
    ctx->pc = 0x17FEA0u;
    // 0x17fea0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17FEA0u;
    {
        const bool branch_taken_0x17fea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEA0u;
        // 0x17fea4: 0x46141802  mul.s       $f0, $f3, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fea0) {
            ctx->pc = 0x17FEF0u;
            goto label_17fef0;
        }
    }
    ctx->pc = 0x17FEA8u;
label_17fea8:
    // 0x17fea8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x17fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17feac: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x17feacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x17feb0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x17feb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x17feb4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17feb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17feb8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17FEB8u;
    {
        const bool branch_taken_0x17feb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17feb8) {
            ctx->pc = 0x17FED8u;
            goto label_17fed8;
        }
    }
    ctx->pc = 0x17FEC0u;
    // 0x17fec0: 0x46141842  mul.s       $f1, $f3, $f20
    ctx->pc = 0x17fec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x17fec4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x17fec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x17fec8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x17fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fecc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17feccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17fed0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17FED0u;
    {
        const bool branch_taken_0x17fed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FED0u;
        // 0x17fed4: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fed0) {
            ctx->pc = 0x17FEF4u;
            goto label_17fef4;
        }
    }
    ctx->pc = 0x17FED8u;
label_17fed8:
    // 0x17fed8: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x17fed8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x17fedc: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x17fedcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x17fee0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x17fee0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x17fee4: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x17fee4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x17fee8: 0xc7818558  lwc1        $f1, -0x7AA8($gp)
    ctx->pc = 0x17fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17feec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17feecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17fef0:
    // 0x17fef0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x17fef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_17fef4:
    // 0x17fef4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17fef8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17fef8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17fefc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17ff00: 0x2b3182a  slt         $v1, $s5, $s3
    ctx->pc = 0x17ff00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x17ff04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17ff08: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x17ff08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17ff0c: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x17FF0Cu;
    {
        const bool branch_taken_0x17ff0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF0Cu;
        // 0x17ff10: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff0c) {
            ctx->pc = 0x17FE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fe18;
        }
    }
    ctx->pc = 0x17FF14u;
label_17ff14:
    // 0x17ff14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ff14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ff18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ff18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ff1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ff1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ff20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ff20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ff24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ff24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ff28: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17ff28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ff2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17ff2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ff30: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x17ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ff34: 0x3e00008  jr          $ra
    ctx->pc = 0x17FF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF34u;
        // 0x17ff38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FF3Cu;
}
