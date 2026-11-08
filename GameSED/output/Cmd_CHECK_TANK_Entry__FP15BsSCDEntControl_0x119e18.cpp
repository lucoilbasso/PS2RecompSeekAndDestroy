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

// Function: Cmd_CHECK_TANK_Entry__FP15BsSCDEntControl
// Address: 0x119e18 - 0x119eb8
void Cmd_CHECK_TANK_Entry__FP15BsSCDEntControl_0x119e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CHECK_TANK_Entry__FP15BsSCDEntControl_0x119e18");
#endif

    switch (ctx->pc) {
        case 0x119e30u: goto label_119e30;
        case 0x119e5cu: goto label_119e5c;
        case 0x119e78u: goto label_119e78;
        case 0x119e90u: goto label_119e90;
        default: break;
    }

    ctx->pc = 0x119e18u;

    // 0x119e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119e20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119e28: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119E28u;
    SET_GPR_U32(ctx, 31, 0x119E30u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119E28u, 0x119E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E30u;
label_119e30:
    // 0x119e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e34: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x119e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x119e38: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x119e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x119e3c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x119e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x119e40: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x119e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x119e44: 0x24a542f8  addiu       $a1, $a1, 0x42F8
    ctx->pc = 0x119e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17144));
    // 0x119e48: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x119e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x119e4c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119E4Cu;
    {
        const bool branch_taken_0x119e4c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x119E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E4Cu;
        // 0x119e50: 0x2451fcb0  addiu       $s1, $v0, -0x350 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e4c) {
            ctx->pc = 0x119E5Cu;
            goto label_119e5c;
        }
    }
    ctx->pc = 0x119E54u;
    // 0x119e54: 0xc068186  jal         func_1A0618
    ctx->pc = 0x119E54u;
    SET_GPR_U32(ctx, 31, 0x119E5Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x119E54u, 0x119E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E5Cu;
label_119e5c:
    // 0x119e5c: 0x2a02006e  slti        $v0, $s0, 0x6E
    ctx->pc = 0x119e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x119e60: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x119E60u;
    {
        const bool branch_taken_0x119e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E60u;
        // 0x119e64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e60) {
            ctx->pc = 0x119E94u;
            goto label_119e94;
        }
    }
    ctx->pc = 0x119E68u;
    // 0x119e68: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x119e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x119e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e70: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x119E70u;
    SET_GPR_U32(ctx, 31, 0x119E78u);
    ctx->pc = 0x119E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E70u;
    // 0x119e74: 0x24844308  addiu       $a0, $a0, 0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x119E70u, 0x119E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E78u;
label_119e78:
    // 0x119e78: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x119e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x119e7c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x119e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x119e80: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x119e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x119e84: 0x24a54318  addiu       $a1, $a1, 0x4318
    ctx->pc = 0x119e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17176));
    // 0x119e88: 0xc068186  jal         func_1A0618
    ctx->pc = 0x119E88u;
    SET_GPR_U32(ctx, 31, 0x119E90u);
    ctx->pc = 0x119E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E88u;
    // 0x119e8c: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x119E88u, 0x119E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E90u;
label_119e90:
    // 0x119e90: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x119e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_119e94:
    // 0x119e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119e98: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119e9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119ea0: 0x8c63d370  lw          $v1, -0x2C90($v1)
    ctx->pc = 0x119ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955888)));
    // 0x119ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ea8: 0xae230400  sw          $v1, 0x400($s1)
    ctx->pc = 0x119ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 3));
    // 0x119eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x119EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EB0u;
        // 0x119eb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119EB8u;
}
