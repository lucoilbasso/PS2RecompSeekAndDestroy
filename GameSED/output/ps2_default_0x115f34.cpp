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

// Function: default
// Address: 0x115f34 - 0x115fa0
void ps2_default_0x115f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x115f34");
#endif

    switch (ctx->pc) {
        case 0x115f34u: goto label_115f34;
        case 0x115f38u: goto label_115f38;
        case 0x115f3cu: goto label_115f3c;
        case 0x115f40u: goto label_115f40;
        case 0x115f44u: goto label_115f44;
        case 0x115f48u: goto label_115f48;
        case 0x115f4cu: goto label_115f4c;
        case 0x115f50u: goto label_115f50;
        case 0x115f54u: goto label_115f54;
        case 0x115f58u: goto label_115f58;
        case 0x115f5cu: goto label_115f5c;
        case 0x115f60u: goto label_115f60;
        case 0x115f64u: goto label_115f64;
        case 0x115f68u: goto label_115f68;
        case 0x115f6cu: goto label_115f6c;
        case 0x115f70u: goto label_115f70;
        case 0x115f74u: goto label_115f74;
        case 0x115f78u: goto label_115f78;
        case 0x115f7cu: goto label_115f7c;
        case 0x115f80u: goto label_115f80;
        case 0x115f84u: goto label_115f84;
        case 0x115f88u: goto label_115f88;
        case 0x115f8cu: goto label_115f8c;
        case 0x115f90u: goto label_115f90;
        case 0x115f94u: goto label_115f94;
        case 0x115f98u: goto label_115f98;
        case 0x115f9cu: goto label_115f9c;
        default: break;
    }

    ctx->pc = 0x115f34u;

label_115f34:
    // 0x115f34: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x115f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_115f38:
    // 0x115f38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115f3c:
    // 0x115f3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x115f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_115f40:
    // 0x115f40: 0x16c30046  bne         $s6, $v1, . + 4 + (0x46 << 2)
label_115f44:
    if (ctx->pc == 0x115F44u) {
        ctx->pc = 0x115F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F40u;
        // 0x115f44: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115F48u;
        goto label_115f48;
    }
    ctx->pc = 0x115F40u;
    {
        const bool branch_taken_0x115f40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x115F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F40u;
        // 0x115f44: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f40) {
            ctx->pc = 0x11605Cu;
            return;
        }
    }
    ctx->pc = 0x115F48u;
label_115f48:
    // 0x115f48: 0x141200  sll         $v0, $s4, 8
    ctx->pc = 0x115f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
label_115f4c:
    // 0x115f4c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x115f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_115f50:
    // 0x115f50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x115f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_115f54:
    // 0x115f54: 0x28202  srl         $s0, $v0, 8
    ctx->pc = 0x115f54u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_115f58:
    // 0x115f58: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x115f58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_115f5c:
    // 0x115f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115f60:
    // 0x115f60: 0xc045360  jal         func_114D80
label_115f64:
    if (ctx->pc == 0x115F64u) {
        ctx->pc = 0x115F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F60u;
        // 0x115f64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115F68u;
        goto label_115f68;
    }
    ctx->pc = 0x115F60u;
    SET_GPR_U32(ctx, 31, 0x115F68u);
    ctx->pc = 0x115F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F60u;
    // 0x115f64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115F60u, 0x115F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F68u;
label_115f68:
    // 0x115f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115f6c:
    // 0x115f6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115f70:
    // 0x115f70: 0xc045360  jal         func_114D80
label_115f74:
    if (ctx->pc == 0x115F74u) {
        ctx->pc = 0x115F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F70u;
        // 0x115f74: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115F78u;
        goto label_115f78;
    }
    ctx->pc = 0x115F70u;
    SET_GPR_U32(ctx, 31, 0x115F78u);
    ctx->pc = 0x115F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F70u;
    // 0x115f74: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115F70u, 0x115F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F78u;
label_115f78:
    // 0x115f78: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x115f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_115f7c:
    // 0x115f7c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_115f80:
    if (ctx->pc == 0x115F80u) {
        ctx->pc = 0x115F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F7Cu;
        // 0x115f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115F84u;
        goto label_115f84;
    }
    ctx->pc = 0x115F7Cu;
    {
        const bool branch_taken_0x115f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F7Cu;
        // 0x115f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f7c) {
            ctx->pc = 0x11604Cu;
            return;
        }
    }
    ctx->pc = 0x115F84u;
label_115f84:
    // 0x115f84: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_115f88:
    // 0x115f88: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x115f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_115f8c:
    // 0x115f8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_115f90:
    // 0x115f90: 0x8c634530  lw          $v1, 0x4530($v1)
    ctx->pc = 0x115f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17712)));
label_115f94:
    // 0x115f94: 0x600008  jr          $v1
label_115f98:
    if (ctx->pc == 0x115F98u) {
        ctx->pc = 0x115F9Cu;
        goto label_115f9c;
    }
    ctx->pc = 0x115F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115F94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x115F9Cu;
label_115f9c:
    // 0x115f9c: 0x0  nop
    ctx->pc = 0x115f9cu;
    // NOP
    ctx->pc = 0x115fa0u;
}
