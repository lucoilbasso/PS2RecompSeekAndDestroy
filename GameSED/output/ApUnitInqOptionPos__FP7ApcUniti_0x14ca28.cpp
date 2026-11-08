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

// Function: ApUnitInqOptionPos__FP7ApcUniti
// Address: 0x14ca28 - 0x14caa0
void ApUnitInqOptionPos__FP7ApcUniti_0x14ca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitInqOptionPos__FP7ApcUniti_0x14ca28");
#endif

    switch (ctx->pc) {
        case 0x14ca58u: goto label_14ca58;
        case 0x14ca80u: goto label_14ca80;
        default: break;
    }

    ctx->pc = 0x14ca28u;

    // 0x14ca28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ca28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ca2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ca30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14ca38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14ca38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14ca3c: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x14ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x14ca40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CA40u;
    {
        const bool branch_taken_0x14ca40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA40u;
        // 0x14ca44: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca40) {
            ctx->pc = 0x14CA60u;
            goto label_14ca60;
        }
    }
    ctx->pc = 0x14CA48u;
    // 0x14ca48: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14ca48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14ca4c: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x14ca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x14ca50: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CA50u;
    SET_GPR_U32(ctx, 31, 0x14CA58u);
    ctx->pc = 0x14CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA50u;
    // 0x14ca54: 0x24a56bc0  addiu       $a1, $a1, 0x6BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CA50u, 0x14CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA58u;
label_14ca58:
    // 0x14ca58: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14CA58u;
    {
        const bool branch_taken_0x14ca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA58u;
        // 0x14ca5c: 0x8e0301b8  lw          $v1, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca58) {
            ctx->pc = 0x14CA84u;
            goto label_14ca84;
        }
    }
    ctx->pc = 0x14CA60u;
label_14ca60:
    // 0x14ca60: 0x920201aa  lbu         $v0, 0x1AA($s0)
    ctx->pc = 0x14ca60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 426)));
    // 0x14ca64: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14ca64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ca68: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CA68u;
    {
        const bool branch_taken_0x14ca68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ca68) {
            ctx->pc = 0x14CA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CA68u;
            // 0x14ca6c: 0x8e0301b8  lw          $v1, 0x1B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CA84u;
            goto label_14ca84;
        }
    }
    ctx->pc = 0x14CA70u;
    // 0x14ca70: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14ca70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14ca74: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x14ca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x14ca78: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CA78u;
    SET_GPR_U32(ctx, 31, 0x14CA80u);
    ctx->pc = 0x14CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA78u;
    // 0x14ca7c: 0x24a56bc0  addiu       $a1, $a1, 0x6BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CA78u, 0x14CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA80u;
label_14ca80:
    // 0x14ca80: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x14ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_14ca84:
    // 0x14ca84: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x14ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x14ca88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ca88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ca8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ca8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ca90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ca94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ca94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ca98: 0x3e00008  jr          $ra
    ctx->pc = 0x14CA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA98u;
        // 0x14ca9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CAA0u;
}
