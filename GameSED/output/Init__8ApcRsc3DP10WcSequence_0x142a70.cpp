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

// Function: Init__8ApcRsc3DP10WcSequence
// Address: 0x142a70 - 0x142bbc
void Init__8ApcRsc3DP10WcSequence_0x142a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8ApcRsc3DP10WcSequence_0x142a70");
#endif

    switch (ctx->pc) {
        case 0x142ab0u: goto label_142ab0;
        case 0x142b90u: goto label_142b90;
        case 0x142b98u: goto label_142b98;
        case 0x142ba8u: goto label_142ba8;
        default: break;
    }

    ctx->pc = 0x142a70u;

    // 0x142a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142a74: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x142a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x142a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142a84: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x142a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142a8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x142a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142a90: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x142a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x142a94: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x142a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x142a98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x142a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x142a9c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x142a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x142aa0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x142aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x142aa4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x142aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x142aa8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x142aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x142aac: 0x26020034  addiu       $v0, $s0, 0x34
    ctx->pc = 0x142aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_142ab0:
    // 0x142ab0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x142ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x142ab4: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x142ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
    // 0x142ab8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x142ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x142abc: 0x0  nop
    ctx->pc = 0x142abcu;
    // NOP
    // 0x142ac0: 0x0  nop
    ctx->pc = 0x142ac0u;
    // NOP
    // 0x142ac4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x142AC4u;
    {
        const bool branch_taken_0x142ac4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x142AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AC4u;
        // 0x142ac8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ac4) {
            ctx->pc = 0x142AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142ab0;
        }
    }
    ctx->pc = 0x142ACCu;
    // 0x142acc: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x142accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x142ad0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x142ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x142ad4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x142ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x142ad8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x142ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x142adc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x142adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x142ae0: 0x26070220  addiu       $a3, $s0, 0x220
    ctx->pc = 0x142ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x142ae4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x142ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x142ae8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x142ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x142aec: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x142aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x142af0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x142af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x142af4: 0xae0002f8  sw          $zero, 0x2F8($s0)
    ctx->pc = 0x142af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
    // 0x142af8: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x142af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x142afc: 0xae040210  sw          $a0, 0x210($s0)
    ctx->pc = 0x142afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 4));
    // 0x142b00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x142b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x142b04: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x142b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x142b08: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x142b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
    // 0x142b0c: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x142b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
    // 0x142b10: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x142b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x142b14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142b18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x142b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x142b1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142b1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142b20: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x142b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x142b24: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x142b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x142b28: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x142b28u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x142b2c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x142b2cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x142b30: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x142b30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x142b34: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x142b34u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x142b38: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x142b38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x142b3c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x142b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x142b40: 0x24c6fcb0  addiu       $a2, $a2, -0x350
    ctx->pc = 0x142b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966448));
    // 0x142b44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x142b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142b48: 0x8cc20450  lw          $v0, 0x450($a2)
    ctx->pc = 0x142b48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x240100u));
    // 0x142b4c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x142B4Cu;
    {
        const bool branch_taken_0x142b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x142B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B4Cu;
        // 0x142b50: 0xae040230  sw          $a0, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b4c) {
            ctx->pc = 0x142B78u;
            goto label_142b78;
        }
    }
    ctx->pc = 0x142B54u;
    // 0x142b54: 0x8cc30480  lw          $v1, 0x480($a2)
    ctx->pc = 0x142b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
    // 0x142b58: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x142b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x142b5c: 0xac83362c  sw          $v1, 0x362C($a0)
    ctx->pc = 0x142b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13868), GPR_U32(ctx, 3));
    // 0x142b60: 0x8cc20480  lw          $v0, 0x480($a2)
    ctx->pc = 0x142b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
    // 0x142b64: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x142b64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x142b68: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x142b68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x142b6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x142B6Cu;
    {
        const bool branch_taken_0x142b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B6Cu;
        // 0x142b70: 0xac823628  sw          $v0, 0x3628($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 13864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b6c) {
            ctx->pc = 0x142B88u;
            goto label_142b88;
        }
    }
    ctx->pc = 0x142B74u;
    // 0x142b74: 0x0  nop
    ctx->pc = 0x142b74u;
    // NOP
label_142b78:
    // 0x142b78: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x142b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x142b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142b80: 0xac62362c  sw          $v0, 0x362C($v1)
    ctx->pc = 0x142b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13868), GPR_U32(ctx, 2));
    // 0x142b84: 0xac603628  sw          $zero, 0x3628($v1)
    ctx->pc = 0x142b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13864), GPR_U32(ctx, 0));
label_142b88:
    // 0x142b88: 0xc050d2e  jal         func_1434B8
    ctx->pc = 0x142B88u;
    SET_GPR_U32(ctx, 31, 0x142B90u);
    ctx->pc = 0x142B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B88u;
    // 0x142b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434B8u, 0x142B88u, 0x142B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B90u;
label_142b90:
    // 0x142b90: 0xc055c04  jal         func_157010
    ctx->pc = 0x142B90u;
    SET_GPR_U32(ctx, 31, 0x142B98u);
    ctx->pc = 0x142B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B90u;
    // 0x142b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157010u, 0x142B90u, 0x142B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B98u;
label_142b98:
    // 0x142b98: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x142b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x142b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ba0: 0xc068584  jal         func_1A1610
    ctx->pc = 0x142BA0u;
    SET_GPR_U32(ctx, 31, 0x142BA8u);
    ctx->pc = 0x142BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BA0u;
    // 0x142ba4: 0x24840fa0  addiu       $a0, $a0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x142BA0u, 0x142BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BA8u;
label_142ba8:
    // 0x142ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x142BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BB4u;
        // 0x142bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142BBCu;
}
