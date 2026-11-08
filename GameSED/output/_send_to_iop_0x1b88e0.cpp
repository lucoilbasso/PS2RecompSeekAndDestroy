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

// Function: _send_to_iop
// Address: 0x1b88e0 - 0x1b89f4
void _send_to_iop_0x1b88e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_send_to_iop_0x1b88e0");
#endif

    switch (ctx->pc) {
        case 0x1b8938u: goto label_1b8938;
        case 0x1b8984u: goto label_1b8984;
        case 0x1b89a4u: goto label_1b89a4;
        case 0x1b89c8u: goto label_1b89c8;
        default: break;
    }

    ctx->pc = 0x1b88e0u;

    // 0x1b88e0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1b88e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1b88e4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1b88e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b88e8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1b88e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1b88ec: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1b88ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1b88f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b88f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b88f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88f8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1b88f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b88fc: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x1b88fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b8900: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1b8900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b8904: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x1b8904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x1b8908: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x1b8908u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x1b890c: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1b890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x1b8910: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1b8910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x1b8914: 0x2662d410  addiu       $v0, $s3, -0x2BF0
    ctx->pc = 0x1b8914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956048));
    // 0x1b8918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b891c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8920: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1b8920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8924: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1b8924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b8928: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8928u;
    {
        const bool branch_taken_0x1b8928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8928u;
        // 0x1b892c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8928) {
            ctx->pc = 0x1B8940u;
            goto label_1b8940;
        }
    }
    ctx->pc = 0x1B8930u;
    // 0x1b8930: 0xc06be00  jal         func_1AF800
    ctx->pc = 0x1B8930u;
    SET_GPR_U32(ctx, 31, 0x1B8938u);
    ctx->pc = 0x1AF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF800u, 0x1B8930u, 0x1B8938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8938u;
label_1b8938:
    // 0x1b8938: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B8938u;
    {
        const bool branch_taken_0x1b8938 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8938u;
        // 0x1b893c: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8938) {
            ctx->pc = 0x1B89B4u;
            goto label_1b89b4;
        }
    }
    ctx->pc = 0x1B8940u;
label_1b8940:
    // 0x1b8940: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1b8940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b8944: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1b8944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b8948: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x1b8948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1b894c: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x1b894cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b8950: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1b8950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b8954: 0x2673d410  addiu       $s3, $s3, -0x2BF0
    ctx->pc = 0x1b8954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956048));
    // 0x1b8958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b895c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1b895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b8960: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b8960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b8964: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x1b8964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1b8968: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1b8968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1b896c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1b896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1b8970: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b8970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b8974: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1b8974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b8978: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1b8978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1b897c: 0xc06bf56  jal         func_1AFD58
    ctx->pc = 0x1B897Cu;
    SET_GPR_U32(ctx, 31, 0x1B8984u);
    ctx->pc = 0x1B8980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B897Cu;
    // 0x1b8980: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD58u, 0x1B897Cu, 0x1B8984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8984u;
label_1b8984:
    // 0x1b8984: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1b8984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b8988: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1b8988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1b898c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1b898cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1b8990: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8994: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1b8994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1b8998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b899c: 0xc06be08  jal         func_1AF820
    ctx->pc = 0x1B899Cu;
    SET_GPR_U32(ctx, 31, 0x1B89A4u);
    ctx->pc = 0x1B89A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B899Cu;
    // 0x1b89a0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF820u, 0x1B899Cu, 0x1B89A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89A4u;
label_1b89a4:
    // 0x1b89a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b89a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89a8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B89A8u;
    {
        const bool branch_taken_0x1b89a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89A8u;
        // 0x1b89ac: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89a8) {
            ctx->pc = 0x1B89D0u;
            goto label_1b89d0;
        }
    }
    ctx->pc = 0x1B89B0u;
    // 0x1b89b0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1b89b4:
    // 0x1b89b4: 0x8c43c024  lw          $v1, -0x3FDC($v0)
    ctx->pc = 0x1b89b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950948)));
    // 0x1b89b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B89B8u;
    {
        const bool branch_taken_0x1b89b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89B8u;
        // 0x1b89bc: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89b8) {
            ctx->pc = 0x1B89C8u;
            goto label_1b89c8;
        }
    }
    ctx->pc = 0x1B89C0u;
    // 0x1b89c0: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1B89C0u;
    SET_GPR_U32(ctx, 31, 0x1B89C8u);
    ctx->pc = 0x1B89C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B89C0u;
    // 0x1b89c4: 0x2484ad80  addiu       $a0, $a0, -0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1B89C0u, 0x1B89C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89C8u;
label_1b89c8:
    // 0x1b89c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B89C8u;
    {
        const bool branch_taken_0x1b89c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89C8u;
        // 0x1b89cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89c8) {
            ctx->pc = 0x1B89D8u;
            goto label_1b89d8;
        }
    }
    ctx->pc = 0x1B89D0u;
label_1b89d0:
    // 0x1b89d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b89d4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1b89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1b89d8:
    // 0x1b89d8: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1b89d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b89dc: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x1b89dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b89e0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1b89e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b89e4: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1b89e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b89e8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1b89e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b89ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B89ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89ECu;
        // 0x1b89f0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B89ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B89F4u;
}
