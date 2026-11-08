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

// Function: entry_00116064
// Address: 0x116064 - 0x116140
void entry_00116064_0x116064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116064_0x116064");
#endif

    switch (ctx->pc) {
        case 0x1160a0u: goto label_1160a0;
        case 0x1160b0u: goto label_1160b0;
        case 0x1160d0u: goto label_1160d0;
        case 0x1160dcu: goto label_1160dc;
        case 0x1160ecu: goto label_1160ec;
        case 0x1160f8u: goto label_1160f8;
        case 0x116108u: goto label_116108;
        case 0x116114u: goto label_116114;
        default: break;
    }

    ctx->pc = 0x116064u;

    // 0x116064: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11606c: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x11606cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x116070: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x116070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x116074: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x116074u;
    {
        const bool branch_taken_0x116074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116074u;
        // 0x116078: 0x141200  sll         $v0, $s4, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116074) {
            ctx->pc = 0x115E78u;
            return;
        }
    }
    ctx->pc = 0x11607Cu;
    // 0x11607c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11607cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x116080: 0x2a82000c  slti        $v0, $s4, 0xC
    ctx->pc = 0x116080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x116084: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x116084u;
    {
        const bool branch_taken_0x116084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116084u;
        // 0x116088: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116084) {
            ctx->pc = 0x115E70u;
            return;
        }
    }
    ctx->pc = 0x11608Cu;
    // 0x11608c: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x11608cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116090: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x116090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x116094: 0x2b18818  mult        $s1, $s5, $s1
    ctx->pc = 0x116094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x116098: 0xc045360  jal         func_114D80
    ctx->pc = 0x116098u;
    SET_GPR_U32(ctx, 31, 0x1160A0u);
    ctx->pc = 0x11609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116098u;
    // 0x11609c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116098u, 0x1160A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160A0u;
label_1160a0:
    // 0x1160a0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1160a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1160a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1160a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1160a8: 0xc045360  jal         func_114D80
    ctx->pc = 0x1160A8u;
    SET_GPR_U32(ctx, 31, 0x1160B0u);
    ctx->pc = 0x1160ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160A8u;
    // 0x1160ac: 0x3c10001f  lui         $s0, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1160A8u, 0x1160B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160B0u;
label_1160b0:
    // 0x1160b0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1160b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1160b4: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1160b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1160b8: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x1160b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
    // 0x1160bc: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x1160bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x1160c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1160c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1160c4: 0xae200138  sw          $zero, 0x138($s1)
    ctx->pc = 0x1160c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
    // 0x1160c8: 0xc045360  jal         func_114D80
    ctx->pc = 0x1160C8u;
    SET_GPR_U32(ctx, 31, 0x1160D0u);
    ctx->pc = 0x1160CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160C8u;
    // 0x1160cc: 0x2610c350  addiu       $s0, $s0, -0x3CB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1160C8u, 0x1160D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160D0u;
label_1160d0:
    // 0x1160d0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1160d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1160d4: 0xc045360  jal         func_114D80
    ctx->pc = 0x1160D4u;
    SET_GPR_U32(ctx, 31, 0x1160DCu);
    ctx->pc = 0x1160D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160D4u;
    // 0x1160d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1160D4u, 0x1160DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160DCu;
label_1160dc:
    // 0x1160dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1160dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1160e0: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x1160e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x1160e4: 0xc045360  jal         func_114D80
    ctx->pc = 0x1160E4u;
    SET_GPR_U32(ctx, 31, 0x1160ECu);
    ctx->pc = 0x1160E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160E4u;
    // 0x1160e8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1160E4u, 0x1160ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160ECu;
label_1160ec:
    // 0x1160ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1160ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1160f0: 0xc045360  jal         func_114D80
    ctx->pc = 0x1160F0u;
    SET_GPR_U32(ctx, 31, 0x1160F8u);
    ctx->pc = 0x1160F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160F0u;
    // 0x1160f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1160F0u, 0x1160F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160F8u;
label_1160f8:
    // 0x1160f8: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1160f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x1160fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1160fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116100: 0xc045360  jal         func_114D80
    ctx->pc = 0x116100u;
    SET_GPR_U32(ctx, 31, 0x116108u);
    ctx->pc = 0x116104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116100u;
    // 0x116104: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116100u, 0x116108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116108u;
label_116108:
    // 0x116108: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x116108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11610c: 0xc045360  jal         func_114D80
    ctx->pc = 0x11610Cu;
    SET_GPR_U32(ctx, 31, 0x116114u);
    ctx->pc = 0x116110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11610Cu;
    // 0x116110: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x11610Cu, 0x116114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116114u;
label_116114:
    // 0x116114: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x116114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x116118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11611c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11611cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x116120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116124: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x116124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116128: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x116128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11612c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11612cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116130: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x116130u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116134: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x116134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x116138: 0x3e00008  jr          $ra
    ctx->pc = 0x116138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116138u;
        // 0x11613c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116140u;
}
