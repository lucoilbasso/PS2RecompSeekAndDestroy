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

// Function: Cmd_EFFECT_SEND_MESSAGE_Entry__FP15BsSCDEntControl
// Address: 0x131538 - 0x1315c0
void Cmd_EFFECT_SEND_MESSAGE_Entry__FP15BsSCDEntControl_0x131538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EFFECT_SEND_MESSAGE_Entry__FP15BsSCDEntControl_0x131538");
#endif

    switch (ctx->pc) {
        case 0x131548u: goto label_131548;
        case 0x131590u: goto label_131590;
        default: break;
    }

    ctx->pc = 0x131538u;

    // 0x131538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13153c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131540: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x131540u;
    SET_GPR_U32(ctx, 31, 0x131548u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x131540u, 0x131548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131548u;
label_131548:
    // 0x131548: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x131548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13154c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x13154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x131550: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x131550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x131554: 0x8c440154  lw          $a0, 0x154($v0)
    ctx->pc = 0x131554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x131558: 0x8c65b830  lw          $a1, -0x47D0($v1)
    ctx->pc = 0x131558u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x13155c: 0x8c860088  lw          $a2, 0x88($a0)
    ctx->pc = 0x13155cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x131560: 0x8cc20048  lw          $v0, 0x48($a2)
    ctx->pc = 0x131560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x131564: 0x8c4302f8  lw          $v1, 0x2F8($v0)
    ctx->pc = 0x131564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    // 0x131568: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x131568u;
    {
        const bool branch_taken_0x131568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131568u;
        // 0x13156c: 0x8ca40040  lw          $a0, 0x40($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131568) {
            ctx->pc = 0x1315B4u;
            goto label_1315b4;
        }
    }
    ctx->pc = 0x131570u;
    // 0x131570: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x131570u;
    {
        const bool branch_taken_0x131570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x131574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131570u;
        // 0x131574: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131570) {
            ctx->pc = 0x1315B8u;
            goto label_1315b8;
        }
    }
    ctx->pc = 0x131578u;
    // 0x131578: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x131578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x13157c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x13157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x131580: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x131580u;
    {
        const bool branch_taken_0x131580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131580u;
        // 0x131584: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131580) {
            ctx->pc = 0x1315B8u;
            goto label_1315b8;
        }
    }
    ctx->pc = 0x131588u;
    // 0x131588: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x131588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x13158c: 0x0  nop
    ctx->pc = 0x13158cu;
    // NOP
label_131590:
    // 0x131590: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x131590u;
    {
        const bool branch_taken_0x131590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x131590) {
            ctx->pc = 0x131594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131590u;
            // 0x131594: 0xa4670118  sh          $a3, 0x118($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131598u;
            goto label_131598;
        }
    }
    ctx->pc = 0x131598u;
label_131598:
    // 0x131598: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x131598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x13159c: 0x0  nop
    ctx->pc = 0x13159cu;
    // NOP
    // 0x1315a0: 0x0  nop
    ctx->pc = 0x1315a0u;
    // NOP
    // 0x1315a4: 0x0  nop
    ctx->pc = 0x1315a4u;
    // NOP
    // 0x1315a8: 0x0  nop
    ctx->pc = 0x1315a8u;
    // NOP
    // 0x1315ac: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1315ACu;
    {
        const bool branch_taken_0x1315ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1315ac) {
            ctx->pc = 0x1315B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1315ACu;
            // 0x1315b0: 0x8c620110  lw          $v0, 0x110($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131590;
        }
    }
    ctx->pc = 0x1315B4u;
label_1315b4:
    // 0x1315b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1315b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1315b8:
    // 0x1315b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1315B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1315BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1315B8u;
        // 0x1315bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1315B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1315C0u;
}
