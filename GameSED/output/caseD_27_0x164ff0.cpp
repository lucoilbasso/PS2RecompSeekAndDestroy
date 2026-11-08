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

// Function: caseD_27
// Address: 0x164ff0 - 0x165058
void caseD_27_0x164ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_27_0x164ff0");
#endif

    switch (ctx->pc) {
        case 0x164ff0u: goto label_164ff0;
        case 0x164ff4u: goto label_164ff4;
        case 0x164ff8u: goto label_164ff8;
        case 0x164ffcu: goto label_164ffc;
        case 0x165000u: goto label_165000;
        case 0x165004u: goto label_165004;
        case 0x165008u: goto label_165008;
        case 0x16500cu: goto label_16500c;
        case 0x165010u: goto label_165010;
        case 0x165014u: goto label_165014;
        case 0x165018u: goto label_165018;
        case 0x16501cu: goto label_16501c;
        case 0x165020u: goto label_165020;
        case 0x165024u: goto label_165024;
        case 0x165028u: goto label_165028;
        case 0x16502cu: goto label_16502c;
        case 0x165030u: goto label_165030;
        case 0x165034u: goto label_165034;
        case 0x165038u: goto label_165038;
        case 0x16503cu: goto label_16503c;
        case 0x165040u: goto label_165040;
        case 0x165044u: goto label_165044;
        case 0x165048u: goto label_165048;
        case 0x16504cu: goto label_16504c;
        case 0x165050u: goto label_165050;
        case 0x165054u: goto label_165054;
        default: break;
    }

    ctx->pc = 0x164ff0u;

label_164ff0:
    // 0x164ff0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x164ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_164ff4:
    // 0x164ff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164ff8:
    // 0x164ff8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x164ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_164ffc:
    // 0x164ffc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x164ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_165000:
    // 0x165000: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x165000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_165004:
    // 0x165004: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x165004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_165008:
    // 0x165008: 0x60f809  jalr        $v1
label_16500c:
    if (ctx->pc == 0x16500Cu) {
        ctx->pc = 0x16500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165008u;
        // 0x16500c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165010u;
        goto label_165010;
    }
    ctx->pc = 0x165008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165010u);
        ctx->pc = 0x16500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165008u;
        // 0x16500c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165008u, 0x165010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165010u;
label_165010:
    // 0x165010: 0x8e021230  lw          $v0, 0x1230($s0)
    ctx->pc = 0x165010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_165014:
    // 0x165014: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_165018:
    if (ctx->pc == 0x165018u) {
        ctx->pc = 0x165018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165014u;
        // 0x165018: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16501Cu;
        goto label_16501c;
    }
    ctx->pc = 0x165014u;
    {
        const bool branch_taken_0x165014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165014u;
        // 0x165018: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165014) {
            ctx->pc = 0x16513Cu;
            return;
        }
    }
    ctx->pc = 0x16501Cu;
label_16501c:
    // 0x16501c: 0xc066362  jal         func_198D88
label_165020:
    if (ctx->pc == 0x165020u) {
        ctx->pc = 0x165024u;
        goto label_165024;
    }
    ctx->pc = 0x16501Cu;
    SET_GPR_U32(ctx, 31, 0x165024u);
    ctx->pc = 0x198D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198D88u, 0x16501Cu, 0x165024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165024u;
label_165024:
    // 0x165024: 0x8e0501b8  lw          $a1, 0x1B8($s0)
    ctx->pc = 0x165024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_165028:
    // 0x165028: 0xae021230  sw          $v0, 0x1230($s0)
    ctx->pc = 0x165028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4656), GPR_U32(ctx, 2));
label_16502c:
    // 0x16502c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165030:
    // 0x165030: 0xc064ec6  jal         func_193B18
label_165034:
    if (ctx->pc == 0x165034u) {
        ctx->pc = 0x165034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165030u;
        // 0x165034: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165038u;
        goto label_165038;
    }
    ctx->pc = 0x165030u;
    SET_GPR_U32(ctx, 31, 0x165038u);
    ctx->pc = 0x165034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165030u;
    // 0x165034: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x165030u, 0x165038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165038u;
label_165038:
    // 0x165038: 0x8e041230  lw          $a0, 0x1230($s0)
    ctx->pc = 0x165038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_16503c:
    // 0x16503c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x16503cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_165040:
    // 0x165040: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x165040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_165044:
    // 0x165044: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x165044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_165048:
    // 0x165048: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16504c:
    // 0x16504c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_165050:
    if (ctx->pc == 0x165050u) {
        ctx->pc = 0x165050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16504Cu;
        // 0x165050: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165054u;
        goto label_165054;
    }
    ctx->pc = 0x16504Cu;
    {
        const bool branch_taken_0x16504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16504Cu;
        // 0x165050: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16504c) {
            ctx->pc = 0x16513Cu;
            return;
        }
    }
    ctx->pc = 0x165054u;
label_165054:
    // 0x165054: 0x0  nop
    ctx->pc = 0x165054u;
    // NOP
    ctx->pc = 0x165058u;
}
