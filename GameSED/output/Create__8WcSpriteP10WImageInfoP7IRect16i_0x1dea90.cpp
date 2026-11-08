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

// Function: Create__8WcSpriteP10WImageInfoP7IRect16i
// Address: 0x1dea90 - 0x1deb68
void Create__8WcSpriteP10WImageInfoP7IRect16i_0x1dea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__8WcSpriteP10WImageInfoP7IRect16i_0x1dea90");
#endif

    switch (ctx->pc) {
        case 0x1deabcu: goto label_1deabc;
        case 0x1deac4u: goto label_1deac4;
        case 0x1deadcu: goto label_1deadc;
        case 0x1deb34u: goto label_1deb34;
        case 0x1deb48u: goto label_1deb48;
        default: break;
    }

    ctx->pc = 0x1dea90u;

    // 0x1dea90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dea94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dea98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dea98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea9c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x1dea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1deaa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1deaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1deaa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1deaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1deaa8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1deaa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deaac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1deaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1deab0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1deab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1deab4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DEAB4u;
    SET_GPR_U32(ctx, 31, 0x1DEABCu);
    ctx->pc = 0x1DEAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAB4u;
    // 0x1deab8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DEAB4u, 0x1DEABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEABCu;
label_1deabc:
    // 0x1deabc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DEABCu;
    SET_GPR_U32(ctx, 31, 0x1DEAC4u);
    ctx->pc = 0x1DEAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEABCu;
    // 0x1deac0: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DEABCu, 0x1DEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAC4u;
label_1deac4:
    // 0x1deac4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1deac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deac8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1deac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1deacc: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x1deaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x1dead0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dead4: 0xc061258  jal         func_184960
    ctx->pc = 0x1DEAD4u;
    SET_GPR_U32(ctx, 31, 0x1DEADCu);
    ctx->pc = 0x1DEAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAD4u;
    // 0x1dead8: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DEAD4u, 0x1DEADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEADCu;
label_1deadc:
    // 0x1deadc: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1deadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1deae0: 0x26470150  addiu       $a3, $s2, 0x150
    ctx->pc = 0x1deae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x1deae4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1deae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1deae8: 0xa6400200  sh          $zero, 0x200($s2)
    ctx->pc = 0x1deae8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 512), (uint16_t)GPR_U32(ctx, 0));
    // 0x1deaec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1deaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1deaf0: 0xa6400202  sh          $zero, 0x202($s2)
    ctx->pc = 0x1deaf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 514), (uint16_t)GPR_U32(ctx, 0));
    // 0x1deaf4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1deaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1deaf8: 0xae400208  sw          $zero, 0x208($s2)
    ctx->pc = 0x1deaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
    // 0x1deafc: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1deafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1deb00: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x1deb00u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1deb04: 0x90a3ed90  lbu         $v1, -0x1270($a1)
    ctx->pc = 0x1deb04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x21ED90u));
    // 0x1deb08: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x1deb08u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1deb0c: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x1deb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1deb10: 0x8c82d630  lw          $v0, -0x29D0($a0)
    ctx->pc = 0x1deb10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1deb14: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x1deb14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
    // 0x1deb18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1deb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1deb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1deb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb24: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEB24u;
    {
        const bool branch_taken_0x1deb24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB24u;
        // 0x1deb28: 0xa4e0000c  sh          $zero, 0xC($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb24) {
            ctx->pc = 0x1DEB34u;
            goto label_1deb34;
        }
    }
    ctx->pc = 0x1DEB2Cu;
    // 0x1deb2c: 0xc06287e  jal         func_18A1F8
    ctx->pc = 0x1DEB2Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB34u);
    ctx->pc = 0x18A1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1F8u, 0x1DEB2Cu, 0x1DEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB34u;
label_1deb34:
    // 0x1deb34: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DEB34u;
    {
        const bool branch_taken_0x1deb34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deb34) {
            ctx->pc = 0x1DEB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEB34u;
            // 0x1deb38: 0xae53012c  sw          $s3, 0x12C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEB3Cu;
            goto label_1deb3c;
        }
    }
    ctx->pc = 0x1DEB3Cu;
label_1deb3c:
    // 0x1deb3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1deb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb40: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DEB40u;
    SET_GPR_U32(ctx, 31, 0x1DEB48u);
    ctx->pc = 0x1DEB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB40u;
    // 0x1deb44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DEB40u, 0x1DEB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB48u;
label_1deb48:
    // 0x1deb48: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1deb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1deb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1deb50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1deb54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1deb54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1deb58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1deb5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1deb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1deb60: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB60u;
        // 0x1deb64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB68u;
}
