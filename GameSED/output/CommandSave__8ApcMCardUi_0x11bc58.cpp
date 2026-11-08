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

// Function: CommandSave__8ApcMCardUi
// Address: 0x11bc58 - 0x11bd90
void CommandSave__8ApcMCardUi_0x11bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandSave__8ApcMCardUi_0x11bc58");
#endif

    switch (ctx->pc) {
        case 0x11bc80u: goto label_11bc80;
        case 0x11bc94u: goto label_11bc94;
        case 0x11bd6cu: goto label_11bd6c;
        case 0x11bd78u: goto label_11bd78;
        default: break;
    }

    ctx->pc = 0x11bc58u;

    // 0x11bc58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11bc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11bc5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bc60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11bc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11bc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11bc68: 0x3411dec8  ori         $s1, $zero, 0xDEC8
    ctx->pc = 0x11bc68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57032);
    // 0x11bc6c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x11bc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x11bc70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11bc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11bc74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11bc78: 0xc046f9c  jal         func_11BE70
    ctx->pc = 0x11BC78u;
    SET_GPR_U32(ctx, 31, 0x11BC80u);
    ctx->pc = 0x11BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BE70u, 0x11BC78u, 0x11BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC80u;
label_11bc80:
    // 0x11bc80: 0x340bde00  ori         $t3, $zero, 0xDE00
    ctx->pc = 0x11bc80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56832);
    // 0x11bc84: 0x1705821  addu        $t3, $t3, $s0
    ctx->pc = 0x11bc84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x11bc88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc8c: 0xc046f64  jal         func_11BD90
    ctx->pc = 0x11BC8Cu;
    SET_GPR_U32(ctx, 31, 0x11BC94u);
    ctx->pc = 0x11BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC8Cu;
    // 0x11bc90: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BD90u, 0x11BC8Cu, 0x11BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC94u;
label_11bc94:
    // 0x11bc94: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x11bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x11bc98: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11bc9c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x11bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x11bca0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x11bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11bca4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x11bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x11bca8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x11bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x11bcac: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x11bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x11bcb0: 0x340bde14  ori         $t3, $zero, 0xDE14
    ctx->pc = 0x11bcb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56852);
    // 0x11bcb4: 0x1705821  addu        $t3, $t3, $s0
    ctx->pc = 0x11bcb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x11bcb8: 0x8ca236d0  lw          $v0, 0x36D0($a1)
    ctx->pc = 0x11bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1F36D0u));
    // 0x11bcbc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11bcc0: 0x248447d0  addiu       $a0, $a0, 0x47D0
    ctx->pc = 0x11bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
    // 0x11bcc4: 0x246347e0  addiu       $v1, $v1, 0x47E0
    ctx->pc = 0x11bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18400));
    // 0x11bcc8: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x11bcc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11bccc: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x11bcccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x11bcd0: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x11bcd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11bcd4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11bcd8: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x11bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x11bcdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11bcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bce0: 0xad680010  sw          $t0, 0x10($t3)
    ctx->pc = 0x11bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 8));
    // 0x11bce4: 0x24c637e0  addiu       $a2, $a2, 0x37E0
    ctx->pc = 0x11bce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14304));
    // 0x11bce8: 0xad630004  sw          $v1, 0x4($t3)
    ctx->pc = 0x11bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
    // 0x11bcec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bcf0: 0xad670008  sw          $a3, 0x8($t3)
    ctx->pc = 0x11bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 7));
    // 0x11bcf4: 0x34079800  ori         $a3, $zero, 0x9800
    ctx->pc = 0x11bcf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x11bcf8: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x11bcf8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11bcfc: 0x24093800  addiu       $t1, $zero, 0x3800
    ctx->pc = 0x11bcfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14336));
    // 0x11bd00: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x11bd00u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11bd04: 0x24a547f0  addiu       $a1, $a1, 0x47F0
    ctx->pc = 0x11bd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18416));
    // 0x11bd08: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x11bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x11bd0c: 0x340bde28  ori         $t3, $zero, 0xDE28
    ctx->pc = 0x11bd0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56872);
    // 0x11bd10: 0x1705821  addu        $t3, $t3, $s0
    ctx->pc = 0x11bd10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x11bd14: 0xad660008  sw          $a2, 0x8($t3)
    ctx->pc = 0x11bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 6));
    // 0x11bd18: 0x260a4600  addiu       $t2, $s0, 0x4600
    ctx->pc = 0x11bd18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x11bd1c: 0xad690010  sw          $t1, 0x10($t3)
    ctx->pc = 0x11bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 9));
    // 0x11bd20: 0x244247c0  addiu       $v0, $v0, 0x47C0
    ctx->pc = 0x11bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18368));
    // 0x11bd24: 0xad650004  sw          $a1, 0x4($t3)
    ctx->pc = 0x11bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
    // 0x11bd28: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x11bd28u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11bd2c: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x11bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x11bd30: 0x340bde3c  ori         $t3, $zero, 0xDE3C
    ctx->pc = 0x11bd30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56892);
    // 0x11bd34: 0x1705821  addu        $t3, $t3, $s0
    ctx->pc = 0x11bd34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x11bd38: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x11bd38u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x11bd3c: 0xad620004  sw          $v0, 0x4($t3)
    ctx->pc = 0x11bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
    // 0x11bd40: 0xad6a0008  sw          $t2, 0x8($t3)
    ctx->pc = 0x11bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 10));
    // 0x11bd44: 0xad670010  sw          $a3, 0x10($t3)
    ctx->pc = 0x11bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 7));
    // 0x11bd48: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x11bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x11bd4c: 0x340bde50  ori         $t3, $zero, 0xDE50
    ctx->pc = 0x11bd4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56912);
    // 0x11bd50: 0x1705821  addu        $t3, $t3, $s0
    ctx->pc = 0x11bd50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x11bd54: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x11bd54u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11bd58: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x11bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x11bd5c: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x11bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x11bd60: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x11bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x11bd64: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x11BD64u;
    SET_GPR_U32(ctx, 31, 0x11BD6Cu);
    ctx->pc = 0x11BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD64u;
    // 0x11bd68: 0xad600010  sw          $zero, 0x10($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x11BD64u, 0x11BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD6Cu;
label_11bd6c:
    // 0x11bd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd70: 0xc05e61c  jal         func_179870
    ctx->pc = 0x11BD70u;
    SET_GPR_U32(ctx, 31, 0x11BD78u);
    ctx->pc = 0x11BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD70u;
    // 0x11bd74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179870u, 0x11BD70u, 0x11BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD78u;
label_11bd78:
    // 0x11bd78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bd78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bd7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11bd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11bd80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11bd80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bd84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11bd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bd88: 0x3e00008  jr          $ra
    ctx->pc = 0x11BD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD88u;
        // 0x11bd8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BD90u;
}
