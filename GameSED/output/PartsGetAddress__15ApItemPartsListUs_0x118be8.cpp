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

// Function: PartsGetAddress__15ApItemPartsListUs
// Address: 0x118be8 - 0x118ca4
void PartsGetAddress__15ApItemPartsListUs_0x118be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsGetAddress__15ApItemPartsListUs_0x118be8");
#endif

    switch (ctx->pc) {
        case 0x118c14u: goto label_118c14;
        default: break;
    }

    ctx->pc = 0x118be8u;

    // 0x118be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118bf0: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x118bf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x118bf4: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x118bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x118bf8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x118bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x118bfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x118c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118c0c: 0xc045360  jal         func_114D80
    ctx->pc = 0x118C0Cu;
    SET_GPR_U32(ctx, 31, 0x118C14u);
    ctx->pc = 0x118C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C0Cu;
    // 0x118c10: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x118C0Cu, 0x118C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C14u;
label_118c14:
    // 0x118c14: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x118c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x118c18: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x118C18u;
    {
        const bool branch_taken_0x118c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C18u;
        // 0x118c1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c18) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C20u;
    // 0x118c20: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x118c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118c24: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x118c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x118c28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118c2c: 0x8c634720  lw          $v1, 0x4720($v1)
    ctx->pc = 0x118c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18208)));
    // 0x118c30: 0x600008  jr          $v1
    ctx->pc = 0x118C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118C38u: goto label_118c38;
            case 0x118C40u: goto label_118c40;
            case 0x118C48u: goto label_118c48;
            case 0x118C50u: goto label_118c50;
            case 0x118C58u: goto label_118c58;
            case 0x118C60u: goto label_118c60;
            case 0x118C68u: goto label_118c68;
            case 0x118C70u: goto label_118c70;
            case 0x118C78u: goto label_118c78;
            case 0x118C80u: goto label_118c80;
            case 0x118C88u: goto label_118c88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118C38u;
label_118c38:
    // 0x118c38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x118C38u;
    {
        const bool branch_taken_0x118c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C38u;
        // 0x118c3c: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c38) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C40u;
label_118c40:
    // 0x118c40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x118C40u;
    {
        const bool branch_taken_0x118c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C40u;
        // 0x118c44: 0x2623004c  addiu       $v1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c40) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C48u;
label_118c48:
    // 0x118c48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x118C48u;
    {
        const bool branch_taken_0x118c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C48u;
        // 0x118c4c: 0x2623007c  addiu       $v1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c48) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C50u;
label_118c50:
    // 0x118c50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x118C50u;
    {
        const bool branch_taken_0x118c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C50u;
        // 0x118c54: 0x262300c0  addiu       $v1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c50) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C58u;
label_118c58:
    // 0x118c58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x118C58u;
    {
        const bool branch_taken_0x118c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C58u;
        // 0x118c5c: 0x262300e8  addiu       $v1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c58) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C60u;
label_118c60:
    // 0x118c60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118C60u;
    {
        const bool branch_taken_0x118c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C60u;
        // 0x118c64: 0x2623011c  addiu       $v1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c60) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C68u;
label_118c68:
    // 0x118c68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x118C68u;
    {
        const bool branch_taken_0x118c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C68u;
        // 0x118c6c: 0x2623014c  addiu       $v1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c68) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C70u;
label_118c70:
    // 0x118c70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x118C70u;
    {
        const bool branch_taken_0x118c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C70u;
        // 0x118c74: 0x2623015c  addiu       $v1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c70) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C78u;
label_118c78:
    // 0x118c78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x118C78u;
    {
        const bool branch_taken_0x118c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C78u;
        // 0x118c7c: 0x26230180  addiu       $v1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c78) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C80u;
label_118c80:
    // 0x118c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118C80u;
    {
        const bool branch_taken_0x118c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C80u;
        // 0x118c84: 0x262301a0  addiu       $v1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c80) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C88u;
label_118c88:
    // 0x118c88: 0x262301c0  addiu       $v1, $s1, 0x1C0
    ctx->pc = 0x118c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_118c8c:
    // 0x118c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118c90: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x118c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x118C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C9Cu;
        // 0x118ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CA4u;
}
