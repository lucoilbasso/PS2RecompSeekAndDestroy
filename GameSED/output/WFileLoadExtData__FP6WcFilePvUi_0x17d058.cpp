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

// Function: WFileLoadExtData__FP6WcFilePvUi
// Address: 0x17d058 - 0x17d0d0
void WFileLoadExtData__FP6WcFilePvUi_0x17d058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WFileLoadExtData__FP6WcFilePvUi_0x17d058");
#endif

    switch (ctx->pc) {
        case 0x17d058u: goto label_17d058;
        case 0x17d05cu: goto label_17d05c;
        case 0x17d060u: goto label_17d060;
        case 0x17d064u: goto label_17d064;
        case 0x17d068u: goto label_17d068;
        case 0x17d06cu: goto label_17d06c;
        case 0x17d070u: goto label_17d070;
        case 0x17d074u: goto label_17d074;
        case 0x17d078u: goto label_17d078;
        case 0x17d07cu: goto label_17d07c;
        case 0x17d080u: goto label_17d080;
        case 0x17d084u: goto label_17d084;
        case 0x17d088u: goto label_17d088;
        case 0x17d08cu: goto label_17d08c;
        case 0x17d090u: goto label_17d090;
        case 0x17d094u: goto label_17d094;
        case 0x17d098u: goto label_17d098;
        case 0x17d09cu: goto label_17d09c;
        case 0x17d0a0u: goto label_17d0a0;
        case 0x17d0a4u: goto label_17d0a4;
        case 0x17d0a8u: goto label_17d0a8;
        case 0x17d0acu: goto label_17d0ac;
        case 0x17d0b0u: goto label_17d0b0;
        case 0x17d0b4u: goto label_17d0b4;
        case 0x17d0b8u: goto label_17d0b8;
        case 0x17d0bcu: goto label_17d0bc;
        case 0x17d0c0u: goto label_17d0c0;
        case 0x17d0c4u: goto label_17d0c4;
        case 0x17d0c8u: goto label_17d0c8;
        case 0x17d0ccu: goto label_17d0cc;
        default: break;
    }

    ctx->pc = 0x17d058u;

label_17d058:
    // 0x17d058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17d05c:
    // 0x17d05c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x17d05cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17d060:
    // 0x17d060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17d064:
    // 0x17d064: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x17d064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17d068:
    // 0x17d068: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x17d068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_17d06c:
    // 0x17d06c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_17d070:
    if (ctx->pc == 0x17D070u) {
        ctx->pc = 0x17D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D06Cu;
        // 0x17d070: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D074u;
        goto label_17d074;
    }
    ctx->pc = 0x17D06Cu;
    {
        const bool branch_taken_0x17d06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D06Cu;
        // 0x17d070: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d06c) {
            ctx->pc = 0x17D0B8u;
            goto label_17d0b8;
        }
    }
    ctx->pc = 0x17D074u;
label_17d074:
    // 0x17d074: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x17d074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_17d078:
    // 0x17d078: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17d078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_17d07c:
    // 0x17d07c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x17d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_17d080:
    // 0x17d080: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x17d080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_17d084:
    // 0x17d084: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x17d084u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
label_17d088:
    // 0x17d088: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x17d088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_17d08c:
    // 0x17d08c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x17d08cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_17d090:
    // 0x17d090: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x17d090u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
label_17d094:
    // 0x17d094: 0xace80014  sw          $t0, 0x14($a3)
    ctx->pc = 0x17d094u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 8));
label_17d098:
    // 0x17d098: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x17d098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_17d09c:
    // 0x17d09c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x17d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17d0a0:
    // 0x17d0a0: 0x8ce50018  lw          $a1, 0x18($a3)
    ctx->pc = 0x17d0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_17d0a4:
    // 0x17d0a4: 0x40f809  jalr        $v0
label_17d0a8:
    if (ctx->pc == 0x17D0A8u) {
        ctx->pc = 0x17D0ACu;
        goto label_17d0ac;
    }
    ctx->pc = 0x17D0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D0ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D0A4u, 0x17D0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D0ACu;
label_17d0ac:
    // 0x17d0ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_17d0b0:
    if (ctx->pc == 0x17D0B0u) {
        ctx->pc = 0x17D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0ACu;
        // 0x17d0b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D0B4u;
        goto label_17d0b4;
    }
    ctx->pc = 0x17D0ACu;
    {
        const bool branch_taken_0x17d0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0ACu;
        // 0x17d0b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0ac) {
            ctx->pc = 0x17D0C8u;
            goto label_17d0c8;
        }
    }
    ctx->pc = 0x17D0B4u;
label_17d0b4:
    // 0x17d0b4: 0x0  nop
    ctx->pc = 0x17d0b4u;
    // NOP
label_17d0b8:
    // 0x17d0b8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_17d0bc:
    // 0x17d0bc: 0xc068186  jal         func_1A0618
label_17d0c0:
    if (ctx->pc == 0x17D0C0u) {
        ctx->pc = 0x17D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0BCu;
        // 0x17d0c0: 0x24a57ba8  addiu       $a1, $a1, 0x7BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D0C4u;
        goto label_17d0c4;
    }
    ctx->pc = 0x17D0BCu;
    SET_GPR_U32(ctx, 31, 0x17D0C4u);
    ctx->pc = 0x17D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0BCu;
    // 0x17d0c0: 0x24a57ba8  addiu       $a1, $a1, 0x7BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D0BCu, 0x17D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0C4u;
label_17d0c4:
    // 0x17d0c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d0c8:
    // 0x17d0c8: 0x3e00008  jr          $ra
label_17d0cc:
    if (ctx->pc == 0x17D0CCu) {
        ctx->pc = 0x17D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0C8u;
        // 0x17d0cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D0D0u;
        goto label_fallthrough_0x17d0c8;
    }
    ctx->pc = 0x17D0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0C8u;
        // 0x17d0cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17d0c8:
    ctx->pc = 0x17D0D0u;
}
