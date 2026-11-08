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

// Function: ApSCDEntLinkSequence__FP10WcSequence
// Address: 0x1049b8 - 0x104a38
void ApSCDEntLinkSequence__FP10WcSequence_0x1049b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntLinkSequence__FP10WcSequence_0x1049b8");
#endif

    switch (ctx->pc) {
        case 0x1049e0u: goto label_1049e0;
        case 0x1049ecu: goto label_1049ec;
        default: break;
    }

    ctx->pc = 0x1049b8u;

    // 0x1049b8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1049b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1049bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1049bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1049c0: 0x2442a430  addiu       $v0, $v0, -0x5BD0
    ctx->pc = 0x1049c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x1049c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1049c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1049c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1049c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1049cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1049ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049d0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1049d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1FA470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FA470u, _value); } while (0);
    // 0x1049d4: 0xac421400  sw          $v0, 0x1400($v0)
    ctx->pc = 0x1049d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1FB830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1FB830u, _value); } while (0);
    // 0x1049d8: 0xc04e292  jal         func_138A48
    ctx->pc = 0x1049D8u;
    SET_GPR_U32(ctx, 31, 0x1049E0u);
    ctx->pc = 0x1049DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1049D8u;
    // 0x1049dc: 0xac400044  sw          $zero, 0x44($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138A48u, 0x1049D8u, 0x1049E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049E0u;
label_1049e0:
    // 0x1049e0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1049e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1049e4: 0xc041a56  jal         func_106958
    ctx->pc = 0x1049E4u;
    SET_GPR_U32(ctx, 31, 0x1049ECu);
    ctx->pc = 0x1049E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1049E4u;
    // 0x1049e8: 0xac40bc40  sw          $zero, -0x43C0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949952), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106958u, 0x1049E4u, 0x1049ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049ECu;
label_1049ec:
    // 0x1049ec: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1049ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1049f0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1049f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1049f4: 0x2442ed00  addiu       $v0, $v0, -0x1300
    ctx->pc = 0x1049f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
    // 0x1049f8: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x1049f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1049fc: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x1049fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x104a00: 0x24050127  addiu       $a1, $zero, 0x127
    ctx->pc = 0x104a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x104a04: 0xaf8288a0  sw          $v0, -0x7760($gp)
    ctx->pc = 0x104a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936736), GPR_U32(ctx, 2));
    // 0x104a08: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x104a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x104a0c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x104a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x104a10: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x104a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x104a14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x104a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104a18: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x104a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x104a1c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x104A1Cu;
    {
        const bool branch_taken_0x104a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x104A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A1Cu;
        // 0x104a20: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a1c) {
            ctx->pc = 0x104A28u;
            goto label_104a28;
        }
    }
    ctx->pc = 0x104A24u;
    // 0x104a24: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x104a24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
label_104a28:
    // 0x104a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104a2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x104a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104a30: 0x3e00008  jr          $ra
    ctx->pc = 0x104A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A30u;
        // 0x104a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104A38u;
}
