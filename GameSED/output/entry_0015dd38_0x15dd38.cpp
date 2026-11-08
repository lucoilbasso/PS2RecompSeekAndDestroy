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

// Function: entry_0015dd38
// Address: 0x15dd38 - 0x15de18
void entry_0015dd38_0x15dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dd38_0x15dd38");
#endif

    switch (ctx->pc) {
        case 0x15dd68u: goto label_15dd68;
        case 0x15dd90u: goto label_15dd90;
        case 0x15ddb8u: goto label_15ddb8;
        default: break;
    }

    ctx->pc = 0x15dd38u;

label_15dd38:
    // 0x15dd38: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15dd38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15dd3c:
    // 0x15dd3c: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15dd40:
    // 0x15dd40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15dd44:
    // 0x15dd44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15dd44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dd48:
    // 0x15dd48: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15dd4c:
    // 0x15dd4c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15dd50:
    // 0x15dd50: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15dd54:
    // 0x15dd54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15dd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15dd58:
    // 0x15dd58: 0xae23012c  sw          $v1, 0x12C($s1)
    ctx->pc = 0x15dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
label_15dd5c:
    // 0x15dd5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15dd60:
    // 0x15dd60: 0x60f809  jalr        $v1
label_15dd64:
    if (ctx->pc == 0x15DD64u) {
        ctx->pc = 0x15DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD60u;
        // 0x15dd64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD68u;
        goto label_15dd68;
    }
    ctx->pc = 0x15DD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DD68u);
        ctx->pc = 0x15DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD60u;
        // 0x15dd64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DD60u, 0x15DD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DD68u;
label_15dd68:
    // 0x15dd68: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15dd6c:
    // 0x15dd6c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15dd70:
    // 0x15dd70: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15dd74:
    // 0x15dd74: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15dd74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15dd78:
    // 0x15dd78: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15dd78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15dd7c:
    // 0x15dd7c: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x15dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_15dd80:
    // 0x15dd80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15dd84:
    // 0x15dd84: 0x24c6ff54  addiu       $a2, $a2, -0xAC
    ctx->pc = 0x15dd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967124));
label_15dd88:
    // 0x15dd88: 0x60f809  jalr        $v1
label_15dd8c:
    if (ctx->pc == 0x15DD8Cu) {
        ctx->pc = 0x15DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD88u;
        // 0x15dd8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD90u;
        goto label_15dd90;
    }
    ctx->pc = 0x15DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DD90u);
        ctx->pc = 0x15DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD88u;
        // 0x15dd8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DD88u, 0x15DD90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DD90u;
label_15dd90:
    // 0x15dd90: 0x8690000c  lh          $s0, 0xC($s4)
    ctx->pc = 0x15dd90u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15dd94:
    // 0x15dd94: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15dd98:
    // 0x15dd98: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x15dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_15dd9c:
    // 0x15dd9c: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x15dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_15dda0:
    // 0x15dda0: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x15dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_15dda4:
    // 0x15dda4: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15dda8:
    // 0x15dda8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15dda8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ddac:
    // 0x15ddac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ddb0:
    // 0x15ddb0: 0x60f809  jalr        $v1
label_15ddb4:
    if (ctx->pc == 0x15DDB4u) {
        ctx->pc = 0x15DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDB0u;
        // 0x15ddb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DDB8u;
        goto label_15ddb8;
    }
    ctx->pc = 0x15DDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DDB8u);
        ctx->pc = 0x15DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDB0u;
        // 0x15ddb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DDB0u, 0x15DDB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DDB8u;
label_15ddb8:
    // 0x15ddb8: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x15ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_15ddbc:
    // 0x15ddbc: 0x96c20016  lhu         $v0, 0x16($s6)
    ctx->pc = 0x15ddbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
label_15ddc0:
    // 0x15ddc0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15ddc4:
    // 0x15ddc4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15ddc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15ddc8:
    // 0x15ddc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ddcc:
    // 0x15ddcc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15ddd0:
    // 0x15ddd0: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x15ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_15ddd4:
    // 0x15ddd4: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x15ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_15ddd8:
    // 0x15ddd8: 0xa6c20016  sh          $v0, 0x16($s6)
    ctx->pc = 0x15ddd8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 22), (uint16_t)GPR_U32(ctx, 2));
label_15dddc:
    // 0x15dddc: 0xaea40030  sw          $a0, 0x30($s5)
    ctx->pc = 0x15dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 4));
label_15dde0:
    // 0x15dde0: 0xaea50028  sw          $a1, 0x28($s5)
    ctx->pc = 0x15dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 5));
label_15dde4:
    // 0x15dde4: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x15dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
label_15dde8:
    // 0x15dde8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15dde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ddec:
    // 0x15ddec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15ddecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15ddf0:
    // 0x15ddf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15ddf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15ddf4:
    // 0x15ddf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15ddf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15ddf8:
    // 0x15ddf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15ddf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15ddfc:
    // 0x15ddfc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x15ddfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15de00:
    // 0x15de00: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x15de00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15de04:
    // 0x15de04: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x15de04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15de08:
    // 0x15de08: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x15de08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15de0c:
    // 0x15de0c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15de0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15de10:
    // 0x15de10: 0x3e00008  jr          $ra
label_15de14:
    if (ctx->pc == 0x15DE14u) {
        ctx->pc = 0x15DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE10u;
        // 0x15de14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE18u;
        goto label_fallthrough_0x15de10;
    }
    ctx->pc = 0x15DE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE10u;
        // 0x15de14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15de10:
    ctx->pc = 0x15DE18u;
}
