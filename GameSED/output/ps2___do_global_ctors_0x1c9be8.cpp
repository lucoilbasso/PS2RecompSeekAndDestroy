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

// Function: __do_global_ctors
// Address: 0x1c9be8 - 0x1c9ca8
void ps2___do_global_ctors_0x1c9be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x1c9be8");
#endif

    switch (ctx->pc) {
        case 0x1c9be8u: goto label_1c9be8;
        case 0x1c9becu: goto label_1c9bec;
        case 0x1c9bf0u: goto label_1c9bf0;
        case 0x1c9bf4u: goto label_1c9bf4;
        case 0x1c9bf8u: goto label_1c9bf8;
        case 0x1c9bfcu: goto label_1c9bfc;
        case 0x1c9c00u: goto label_1c9c00;
        case 0x1c9c04u: goto label_1c9c04;
        case 0x1c9c08u: goto label_1c9c08;
        case 0x1c9c0cu: goto label_1c9c0c;
        case 0x1c9c10u: goto label_1c9c10;
        case 0x1c9c14u: goto label_1c9c14;
        case 0x1c9c18u: goto label_1c9c18;
        case 0x1c9c1cu: goto label_1c9c1c;
        case 0x1c9c20u: goto label_1c9c20;
        case 0x1c9c24u: goto label_1c9c24;
        case 0x1c9c28u: goto label_1c9c28;
        case 0x1c9c2cu: goto label_1c9c2c;
        case 0x1c9c30u: goto label_1c9c30;
        case 0x1c9c34u: goto label_1c9c34;
        case 0x1c9c38u: goto label_1c9c38;
        case 0x1c9c3cu: goto label_1c9c3c;
        case 0x1c9c40u: goto label_1c9c40;
        case 0x1c9c44u: goto label_1c9c44;
        case 0x1c9c48u: goto label_1c9c48;
        case 0x1c9c4cu: goto label_1c9c4c;
        case 0x1c9c50u: goto label_1c9c50;
        case 0x1c9c54u: goto label_1c9c54;
        case 0x1c9c58u: goto label_1c9c58;
        case 0x1c9c5cu: goto label_1c9c5c;
        case 0x1c9c60u: goto label_1c9c60;
        case 0x1c9c64u: goto label_1c9c64;
        case 0x1c9c68u: goto label_1c9c68;
        case 0x1c9c6cu: goto label_1c9c6c;
        case 0x1c9c70u: goto label_1c9c70;
        case 0x1c9c74u: goto label_1c9c74;
        case 0x1c9c78u: goto label_1c9c78;
        case 0x1c9c7cu: goto label_1c9c7c;
        case 0x1c9c80u: goto label_1c9c80;
        case 0x1c9c84u: goto label_1c9c84;
        case 0x1c9c88u: goto label_1c9c88;
        case 0x1c9c8cu: goto label_1c9c8c;
        case 0x1c9c90u: goto label_1c9c90;
        case 0x1c9c94u: goto label_1c9c94;
        case 0x1c9c98u: goto label_1c9c98;
        case 0x1c9c9cu: goto label_1c9c9c;
        case 0x1c9ca0u: goto label_1c9ca0;
        case 0x1c9ca4u: goto label_1c9ca4;
        default: break;
    }

    ctx->pc = 0x1c9be8u;

label_1c9be8:
    // 0x1c9be8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1c9be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1c9bec:
    // 0x1c9bec: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1c9becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_1c9bf0:
    // 0x1c9bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c9bf4:
    // 0x1c9bf4: 0x24840db8  addiu       $a0, $a0, 0xDB8
    ctx->pc = 0x1c9bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3512));
label_1c9bf8:
    // 0x1c9bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c9bfc:
    // 0x1c9bfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c9c00:
    // 0x1c9c00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c9c04:
    // 0x1c9c04: 0xc072b7a  jal         func_1CADE8
label_1c9c08:
    if (ctx->pc == 0x1C9C08u) {
        ctx->pc = 0x1C9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C04u;
        // 0x1c9c08: 0x24a50440  addiu       $a1, $a1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C0Cu;
        goto label_1c9c0c;
    }
    ctx->pc = 0x1C9C04u;
    SET_GPR_U32(ctx, 31, 0x1C9C0Cu);
    ctx->pc = 0x1C9C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9C04u;
    // 0x1c9c08: 0x24a50440  addiu       $a1, $a1, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADE8u, 0x1C9C04u, 0x1C9C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C0Cu;
label_1c9c0c:
    // 0x1c9c0c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1c9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1c9c10:
    // 0x1c9c10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c9c14:
    // 0x1c9c14: 0x2445ab50  addiu       $a1, $v0, -0x54B0
    ctx->pc = 0x1c9c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945616));
label_1c9c18:
    // 0x1c9c18: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1c9c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c9c1c:
    // 0x1c9c1c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_1c9c20:
    if (ctx->pc == 0x1C9C20u) {
        ctx->pc = 0x1C9C24u;
        goto label_1c9c24;
    }
    ctx->pc = 0x1C9C1Cu;
    {
        const bool branch_taken_0x1c9c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9c1c) {
            ctx->pc = 0x1C9C58u;
            goto label_1c9c58;
        }
    }
    ctx->pc = 0x1C9C24u;
label_1c9c24:
    // 0x1c9c24: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1c9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c9c28:
    // 0x1c9c28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1c9c2c:
    if (ctx->pc == 0x1C9C2Cu) {
        ctx->pc = 0x1C9C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C28u;
        // 0x1c9c2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C30u;
        goto label_1c9c30;
    }
    ctx->pc = 0x1C9C28u;
    {
        const bool branch_taken_0x1c9c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C28u;
        // 0x1c9c2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c28) {
            ctx->pc = 0x1C9C58u;
            goto label_1c9c58;
        }
    }
    ctx->pc = 0x1C9C30u;
label_1c9c30:
    // 0x1c9c30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c9c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c9c34:
    // 0x1c9c34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c9c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c9c38:
    // 0x1c9c38: 0x64a50004  daddiu      $a1, $a1, 0x4
    ctx->pc = 0x1c9c38u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4);
label_1c9c3c:
    // 0x1c9c3c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1c9c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_1c9c40:
    // 0x1c9c40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c9c40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1c9c44:
    // 0x1c9c44: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1c9c48:
    // 0x1c9c48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9c4c:
    // 0x1c9c4c: 0x0  nop
    ctx->pc = 0x1c9c4cu;
    // NOP
label_1c9c50:
    // 0x1c9c50: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1c9c54:
    if (ctx->pc == 0x1C9C54u) {
        ctx->pc = 0x1C9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C50u;
        // 0x1c9c54: 0x64840001  daddiu      $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C58u;
        goto label_1c9c58;
    }
    ctx->pc = 0x1C9C50u;
    {
        const bool branch_taken_0x1c9c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C50u;
        // 0x1c9c54: 0x64840001  daddiu      $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c50) {
            ctx->pc = 0x1C9C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9c38;
        }
    }
    ctx->pc = 0x1C9C58u;
label_1c9c58:
    // 0x1c9c58: 0x4803c  dsll32      $s0, $a0, 0
    ctx->pc = 0x1c9c58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 0));
label_1c9c5c:
    // 0x1c9c5c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1c9c5cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_1c9c60:
    // 0x1c9c60: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1c9c64:
    if (ctx->pc == 0x1C9C64u) {
        ctx->pc = 0x1C9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C60u;
        // 0x1c9c64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C68u;
        goto label_1c9c68;
    }
    ctx->pc = 0x1C9C60u;
    {
        const bool branch_taken_0x1c9c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C60u;
        // 0x1c9c64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c60) {
            ctx->pc = 0x1C9C8Cu;
            goto label_1c9c8c;
        }
    }
    ctx->pc = 0x1C9C68u;
label_1c9c68:
    // 0x1c9c68: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x1c9c68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
label_1c9c6c:
    // 0x1c9c6c: 0x2631ab50  addiu       $s1, $s1, -0x54B0
    ctx->pc = 0x1c9c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945616));
label_1c9c70:
    // 0x1c9c70: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1c9c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1c9c74:
    // 0x1c9c74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c9c78:
    // 0x1c9c78: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1c9c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_1c9c7c:
    // 0x1c9c7c: 0x40f809  jalr        $v0
label_1c9c80:
    if (ctx->pc == 0x1C9C80u) {
        ctx->pc = 0x1C9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C7Cu;
        // 0x1c9c80: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C84u;
        goto label_1c9c84;
    }
    ctx->pc = 0x1C9C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9C84u);
        ctx->pc = 0x1C9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C7Cu;
        // 0x1c9c80: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9C7Cu, 0x1C9C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9C84u;
label_1c9c84:
    // 0x1c9c84: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
label_1c9c88:
    if (ctx->pc == 0x1C9C88u) {
        ctx->pc = 0x1C9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C84u;
        // 0x1c9c88: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C8Cu;
        goto label_1c9c8c;
    }
    ctx->pc = 0x1C9C84u;
    {
        const bool branch_taken_0x1c9c84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c84) {
            ctx->pc = 0x1C9C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9C84u;
            // 0x1c9c88: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9c78;
        }
    }
    ctx->pc = 0x1C9C8Cu;
label_1c9c8c:
    // 0x1c9c8c: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1c9c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
label_1c9c90:
    // 0x1c9c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9c94:
    // 0x1c9c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c9c98:
    // 0x1c9c98: 0x24849b58  addiu       $a0, $a0, -0x64A8
    ctx->pc = 0x1c9c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941528));
label_1c9c9c:
    // 0x1c9c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9ca0:
    // 0x1c9ca0: 0x8073d20  j           func_1CF480
label_1c9ca4:
    if (ctx->pc == 0x1C9CA4u) {
        ctx->pc = 0x1C9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CA0u;
        // 0x1c9ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9CA8u;
        goto label_fallthrough_0x1c9ca0;
    }
    ctx->pc = 0x1C9CA0u;
    ctx->pc = 0x1C9CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CA0u;
    // 0x1c9ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF480u;
    atexit_0x1cf480(rdram, ctx, runtime); return;
label_fallthrough_0x1c9ca0:
    ctx->pc = 0x1C9CA8u;
}
