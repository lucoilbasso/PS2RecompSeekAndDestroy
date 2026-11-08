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

// Function: GameDrSetup__9ApcGameDr
// Address: 0x11aec8 - 0x11af80
void GameDrSetup__9ApcGameDr_0x11aec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GameDrSetup__9ApcGameDr_0x11aec8");
#endif

    switch (ctx->pc) {
        case 0x11aec8u: goto label_11aec8;
        case 0x11aeccu: goto label_11aecc;
        case 0x11aed0u: goto label_11aed0;
        case 0x11aed4u: goto label_11aed4;
        case 0x11aed8u: goto label_11aed8;
        case 0x11aedcu: goto label_11aedc;
        case 0x11aee0u: goto label_11aee0;
        case 0x11aee4u: goto label_11aee4;
        case 0x11aee8u: goto label_11aee8;
        case 0x11aeecu: goto label_11aeec;
        case 0x11aef0u: goto label_11aef0;
        case 0x11aef4u: goto label_11aef4;
        case 0x11aef8u: goto label_11aef8;
        case 0x11aefcu: goto label_11aefc;
        case 0x11af00u: goto label_11af00;
        case 0x11af04u: goto label_11af04;
        case 0x11af08u: goto label_11af08;
        case 0x11af0cu: goto label_11af0c;
        case 0x11af10u: goto label_11af10;
        case 0x11af14u: goto label_11af14;
        case 0x11af18u: goto label_11af18;
        case 0x11af1cu: goto label_11af1c;
        case 0x11af20u: goto label_11af20;
        case 0x11af24u: goto label_11af24;
        case 0x11af28u: goto label_11af28;
        case 0x11af2cu: goto label_11af2c;
        case 0x11af30u: goto label_11af30;
        case 0x11af34u: goto label_11af34;
        case 0x11af38u: goto label_11af38;
        case 0x11af3cu: goto label_11af3c;
        case 0x11af40u: goto label_11af40;
        case 0x11af44u: goto label_11af44;
        case 0x11af48u: goto label_11af48;
        case 0x11af4cu: goto label_11af4c;
        case 0x11af50u: goto label_11af50;
        case 0x11af54u: goto label_11af54;
        case 0x11af58u: goto label_11af58;
        case 0x11af5cu: goto label_11af5c;
        case 0x11af60u: goto label_11af60;
        case 0x11af64u: goto label_11af64;
        case 0x11af68u: goto label_11af68;
        case 0x11af6cu: goto label_11af6c;
        case 0x11af70u: goto label_11af70;
        case 0x11af74u: goto label_11af74;
        case 0x11af78u: goto label_11af78;
        case 0x11af7cu: goto label_11af7c;
        default: break;
    }

    ctx->pc = 0x11aec8u;

label_11aec8:
    // 0x11aec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11aec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11aecc:
    // 0x11aecc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_11aed0:
    // 0x11aed0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_11aed4:
    // 0x11aed4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11aed8:
    // 0x11aed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11aedc:
    // 0x11aedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11aedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11aee0:
    // 0x11aee0: 0x24423630  addiu       $v0, $v0, 0x3630
    ctx->pc = 0x11aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13872));
label_11aee4:
    // 0x11aee4: 0x0  nop
    ctx->pc = 0x11aee4u;
    // NOP
label_11aee8:
    // 0x11aee8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_11aeec:
    // 0x11aeec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_11aef0:
    // 0x11aef0: 0x0  nop
    ctx->pc = 0x11aef0u;
    // NOP
label_11aef4:
    // 0x11aef4: 0x0  nop
    ctx->pc = 0x11aef4u;
    // NOP
label_11aef8:
    // 0x11aef8: 0x0  nop
    ctx->pc = 0x11aef8u;
    // NOP
label_11aefc:
    // 0x11aefc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_11af00:
    if (ctx->pc == 0x11AF00u) {
        ctx->pc = 0x11AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEFCu;
        // 0x11af00: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF04u;
        goto label_11af04;
    }
    ctx->pc = 0x11AEFCu;
    {
        const bool branch_taken_0x11aefc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEFCu;
        // 0x11af00: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aefc) {
            ctx->pc = 0x11AEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11aee8;
        }
    }
    ctx->pc = 0x11AF04u;
label_11af04:
    // 0x11af04: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x11af04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_11af08:
    // 0x11af08: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x11af08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11af0c:
    // 0x11af0c: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x11af0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_11af10:
    // 0x11af10: 0x2408ff00  addiu       $t0, $zero, -0x100
    ctx->pc = 0x11af10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_11af14:
    // 0x11af14: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x11af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_11af18:
    // 0x11af18: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11af18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11af1c:
    // 0x11af1c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x11af1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_11af20:
    // 0x11af20: 0x8e060098  lw          $a2, 0x98($s0)
    ctx->pc = 0x11af20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_11af24:
    // 0x11af24: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x11af24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
label_11af28:
    // 0x11af28: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x11af28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_11af2c:
    // 0x11af2c: 0xae0440a4  sw          $a0, 0x40A4($s0)
    ctx->pc = 0x11af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16548), GPR_U32(ctx, 4));
label_11af30:
    // 0x11af30: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_11af34:
    // 0x11af34: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x11af34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_11af38:
    // 0x11af38: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x11af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_11af3c:
    // 0x11af3c: 0xaca60044  sw          $a2, 0x44($a1)
    ctx->pc = 0x11af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 6));
label_11af40:
    // 0x11af40: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x11af40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_11af44:
    // 0x11af44: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x11af44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_11af48:
    // 0x11af48: 0xacb00040  sw          $s0, 0x40($a1)
    ctx->pc = 0x11af48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 16));
label_11af4c:
    // 0x11af4c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_11af50:
    // 0x11af50: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x11af50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_11af54:
    // 0x11af54: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x11af54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_11af58:
    // 0x11af58: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x11af58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_11af5c:
    // 0x11af5c: 0xa0f809  jalr        $a1
label_11af60:
    if (ctx->pc == 0x11AF60u) {
        ctx->pc = 0x11AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF5Cu;
        // 0x11af60: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF64u;
        goto label_11af64;
    }
    ctx->pc = 0x11AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11AF64u);
        ctx->pc = 0x11AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF5Cu;
        // 0x11af60: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF5Cu, 0x11AF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11AF64u;
label_11af64:
    // 0x11af64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11af64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11af68:
    // 0x11af68: 0xc046d5a  jal         func_11B568
label_11af6c:
    if (ctx->pc == 0x11AF6Cu) {
        ctx->pc = 0x11AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF68u;
        // 0x11af6c: 0x8c85008c  lw          $a1, 0x8C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF70u;
        goto label_11af70;
    }
    ctx->pc = 0x11AF68u;
    SET_GPR_U32(ctx, 31, 0x11AF70u);
    ctx->pc = 0x11AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF68u;
    // 0x11af6c: 0x8c85008c  lw          $a1, 0x8C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B568u, 0x11AF68u, 0x11AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF70u;
label_11af70:
    // 0x11af70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11af70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11af74:
    // 0x11af74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11af74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11af78:
    // 0x11af78: 0x3e00008  jr          $ra
label_11af7c:
    if (ctx->pc == 0x11AF7Cu) {
        ctx->pc = 0x11AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF78u;
        // 0x11af7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AF80u;
        goto label_fallthrough_0x11af78;
    }
    ctx->pc = 0x11AF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF78u;
        // 0x11af7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11af78:
    ctx->pc = 0x11AF80u;
}
