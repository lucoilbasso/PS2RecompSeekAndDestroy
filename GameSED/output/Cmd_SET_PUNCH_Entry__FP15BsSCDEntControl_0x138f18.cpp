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

// Function: Cmd_SET_PUNCH_Entry__FP15BsSCDEntControl
// Address: 0x138f18 - 0x138f94
void Cmd_SET_PUNCH_Entry__FP15BsSCDEntControl_0x138f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_PUNCH_Entry__FP15BsSCDEntControl_0x138f18");
#endif

    switch (ctx->pc) {
        case 0x138f18u: goto label_138f18;
        case 0x138f1cu: goto label_138f1c;
        case 0x138f20u: goto label_138f20;
        case 0x138f24u: goto label_138f24;
        case 0x138f28u: goto label_138f28;
        case 0x138f2cu: goto label_138f2c;
        case 0x138f30u: goto label_138f30;
        case 0x138f34u: goto label_138f34;
        case 0x138f38u: goto label_138f38;
        case 0x138f3cu: goto label_138f3c;
        case 0x138f40u: goto label_138f40;
        case 0x138f44u: goto label_138f44;
        case 0x138f48u: goto label_138f48;
        case 0x138f4cu: goto label_138f4c;
        case 0x138f50u: goto label_138f50;
        case 0x138f54u: goto label_138f54;
        case 0x138f58u: goto label_138f58;
        case 0x138f5cu: goto label_138f5c;
        case 0x138f60u: goto label_138f60;
        case 0x138f64u: goto label_138f64;
        case 0x138f68u: goto label_138f68;
        case 0x138f6cu: goto label_138f6c;
        case 0x138f70u: goto label_138f70;
        case 0x138f74u: goto label_138f74;
        case 0x138f78u: goto label_138f78;
        case 0x138f7cu: goto label_138f7c;
        case 0x138f80u: goto label_138f80;
        case 0x138f84u: goto label_138f84;
        case 0x138f88u: goto label_138f88;
        case 0x138f8cu: goto label_138f8c;
        case 0x138f90u: goto label_138f90;
        default: break;
    }

    ctx->pc = 0x138f18u;

label_138f18:
    // 0x138f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_138f1c:
    // 0x138f1c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x138f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_138f20:
    // 0x138f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_138f24:
    // 0x138f24: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x138f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_138f28:
    // 0x138f28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x138f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_138f2c:
    // 0x138f2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x138f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_138f30:
    // 0x138f30: 0x8f908a30  lw          $s0, -0x75D0($gp)
    ctx->pc = 0x138f30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_138f34:
    // 0x138f34: 0xc06a26e  jal         func_1A89B8
label_138f38:
    if (ctx->pc == 0x138F38u) {
        ctx->pc = 0x138F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F34u;
        // 0x138f38: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F3Cu;
        goto label_138f3c;
    }
    ctx->pc = 0x138F34u;
    SET_GPR_U32(ctx, 31, 0x138F3Cu);
    ctx->pc = 0x138F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F34u;
    // 0x138f38: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x138F34u, 0x138F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F3Cu;
label_138f3c:
    // 0x138f3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x138f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138f40:
    // 0x138f40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x138f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_138f44:
    // 0x138f44: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x138f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_138f48:
    // 0x138f48: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x138f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_138f4c:
    // 0x138f4c: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_138f50:
    if (ctx->pc == 0x138F50u) {
        ctx->pc = 0x138F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F4Cu;
        // 0x138f50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F54u;
        goto label_138f54;
    }
    ctx->pc = 0x138F4Cu;
    {
        const bool branch_taken_0x138f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x138f4c) {
            ctx->pc = 0x138F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138F4Cu;
            // 0x138f50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138F84u;
            goto label_138f84;
        }
    }
    ctx->pc = 0x138F54u;
label_138f54:
    // 0x138f54: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x138f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
label_138f58:
    // 0x138f58: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_138f5c:
    if (ctx->pc == 0x138F5Cu) {
        ctx->pc = 0x138F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F58u;
        // 0x138f5c: 0xae000248  sw          $zero, 0x248($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F60u;
        goto label_138f60;
    }
    ctx->pc = 0x138F58u;
    {
        const bool branch_taken_0x138f58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x138F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F58u;
        // 0x138f5c: 0xae000248  sw          $zero, 0x248($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f58) {
            ctx->pc = 0x138F80u;
            goto label_138f80;
        }
    }
    ctx->pc = 0x138F60u;
label_138f60:
    // 0x138f60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x138f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_138f64:
    // 0x138f64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138f68:
    // 0x138f68: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x138f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_138f6c:
    // 0x138f6c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x138f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_138f70:
    // 0x138f70: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x138f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_138f74:
    // 0x138f74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x138f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_138f78:
    // 0x138f78: 0x60f809  jalr        $v1
label_138f7c:
    if (ctx->pc == 0x138F7Cu) {
        ctx->pc = 0x138F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F78u;
        // 0x138f7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F80u;
        goto label_138f80;
    }
    ctx->pc = 0x138F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x138F80u);
        ctx->pc = 0x138F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F78u;
        // 0x138f7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138F78u, 0x138F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138F80u;
label_138f80:
    // 0x138f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_138f84:
    // 0x138f84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x138f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_138f88:
    // 0x138f88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x138f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_138f8c:
    // 0x138f8c: 0x3e00008  jr          $ra
label_138f90:
    if (ctx->pc == 0x138F90u) {
        ctx->pc = 0x138F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F8Cu;
        // 0x138f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138F94u;
        goto label_fallthrough_0x138f8c;
    }
    ctx->pc = 0x138F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F8Cu;
        // 0x138f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x138f8c:
    ctx->pc = 0x138F94u;
}
