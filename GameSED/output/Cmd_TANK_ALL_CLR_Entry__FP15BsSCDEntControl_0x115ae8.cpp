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

// Function: Cmd_TANK_ALL_CLR_Entry__FP15BsSCDEntControl
// Address: 0x115ae8 - 0x115c18
void Cmd_TANK_ALL_CLR_Entry__FP15BsSCDEntControl_0x115ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_ALL_CLR_Entry__FP15BsSCDEntControl_0x115ae8");
#endif

    switch (ctx->pc) {
        case 0x115b0cu: goto label_115b0c;
        case 0x115b28u: goto label_115b28;
        case 0x115b60u: goto label_115b60;
        case 0x115b80u: goto label_115b80;
        case 0x115bb8u: goto label_115bb8;
        case 0x115bc8u: goto label_115bc8;
        default: break;
    }

    ctx->pc = 0x115ae8u;

    // 0x115ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115aec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x115aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x115af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115af4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115af8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x115af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x115afc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x115afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x115b00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x115b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x115b04: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115B04u;
    SET_GPR_U32(ctx, 31, 0x115B0Cu);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115B04u, 0x115B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B0Cu;
label_115b0c:
    // 0x115b0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b10: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115b14: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x115b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115b18: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x115b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x115b1c: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115b20: 0x2421d524  addiu       $at, $at, -0x2ADC
    ctx->pc = 0x115b20u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294956324));
    // 0x115b24: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x115b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_115b28:
    // 0x115b28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x115b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x115b2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x115b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x115b30: 0x0  nop
    ctx->pc = 0x115b30u;
    // NOP
    // 0x115b34: 0x0  nop
    ctx->pc = 0x115b34u;
    // NOP
    // 0x115b38: 0x0  nop
    ctx->pc = 0x115b38u;
    // NOP
    // 0x115b3c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115B3Cu;
    {
        const bool branch_taken_0x115b3c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x115B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B3Cu;
        // 0x115b40: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b3c) {
            ctx->pc = 0x115B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115b28;
        }
    }
    ctx->pc = 0x115B44u;
    // 0x115b44: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115b48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x115b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115b4c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x115b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115b50: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x115b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115b54: 0x3c13001f  lui         $s3, 0x1F
    ctx->pc = 0x115b54u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31 << 16));
    // 0x115b58: 0x2673c540  addiu       $s3, $s3, -0x3AC0
    ctx->pc = 0x115b58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952256));
    // 0x115b5c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x115b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_115b60:
    // 0x115b60: 0x118600  sll         $s0, $s1, 24
    ctx->pc = 0x115b60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x115b64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x115b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x115b68: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x115b68u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x115b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b74: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x115b74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x115b78: 0xc045360  jal         func_114D80
    ctx->pc = 0x115B78u;
    SET_GPR_U32(ctx, 31, 0x115B80u);
    ctx->pc = 0x115B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B78u;
    // 0x115b7c: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115B78u, 0x115B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B80u;
label_115b80:
    // 0x115b80: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x115b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x115b84: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x115b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x115b88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x115B88u;
    {
        const bool branch_taken_0x115b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B88u;
        // 0x115b8c: 0xa6140ff0  sh          $s4, 0xFF0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4080), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b88) {
            ctx->pc = 0x115B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115b60;
        }
    }
    ctx->pc = 0x115B90u;
    // 0x115b90: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115b94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b98: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x115b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115b9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x115b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115ba0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115ba4: 0x2421c540  addiu       $at, $at, -0x3AC0
    ctx->pc = 0x115ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294952256));
    // 0x115ba8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x115ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x115bac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115bb0: 0x24441008  addiu       $a0, $v0, 0x1008
    ctx->pc = 0x115bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4104));
    // 0x115bb4: 0x0  nop
    ctx->pc = 0x115bb4u;
    // NOP
label_115bb8:
    // 0x115bb8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x115bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x115bbc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x115bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x115bc0: 0x24a211d6  addiu       $v0, $a1, 0x11D6
    ctx->pc = 0x115bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4566));
    // 0x115bc4: 0x0  nop
    ctx->pc = 0x115bc4u;
    // NOP
label_115bc8:
    // 0x115bc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x115bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x115bcc: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x115bccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x115bd0: 0x0  nop
    ctx->pc = 0x115bd0u;
    // NOP
    // 0x115bd4: 0x0  nop
    ctx->pc = 0x115bd4u;
    // NOP
    // 0x115bd8: 0x0  nop
    ctx->pc = 0x115bd8u;
    // NOP
    // 0x115bdc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115BDCu;
    {
        const bool branch_taken_0x115bdc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x115BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BDCu;
        // 0x115be0: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bdc) {
            ctx->pc = 0x115BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115bc8;
        }
    }
    ctx->pc = 0x115BE4u;
    // 0x115be4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115be8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x115be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x115bec: 0x28e2006e  slti        $v0, $a3, 0x6E
    ctx->pc = 0x115becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x115bf0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x115BF0u;
    {
        const bool branch_taken_0x115bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BF0u;
        // 0x115bf4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bf0) {
            ctx->pc = 0x115BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115bb8;
        }
    }
    ctx->pc = 0x115BF8u;
    // 0x115bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115bfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115c00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x115c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115c04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x115c04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x115c08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x115c08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115c0c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x115c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x115c10: 0x3e00008  jr          $ra
    ctx->pc = 0x115C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C10u;
        // 0x115c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C18u;
}
