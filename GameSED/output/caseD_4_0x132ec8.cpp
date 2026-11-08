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

// Function: caseD_4
// Address: 0x132ec8 - 0x132f48
void caseD_4_0x132ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x132ec8");
#endif

    switch (ctx->pc) {
        case 0x132ef0u: goto label_132ef0;
        case 0x132f38u: goto label_132f38;
        default: break;
    }

    ctx->pc = 0x132ec8u;

    // 0x132ec8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x132ecc: 0x8e520048  lw          $s2, 0x48($s2)
    ctx->pc = 0x132eccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x132ed0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132ed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x132ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132edc: 0x8c71fff0  lw          $s1, -0x10($v1)
    ctx->pc = 0x132edcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x132ee0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x132ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132ee4: 0x38420018  xori        $v0, $v0, 0x18
    ctx->pc = 0x132ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
    // 0x132ee8: 0xc04e346  jal         func_138D18
    ctx->pc = 0x132EE8u;
    SET_GPR_U32(ctx, 31, 0x132EF0u);
    ctx->pc = 0x132EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EE8u;
    // 0x132eec: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D18u, 0x132EE8u, 0x132EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EF0u;
label_132ef0:
    // 0x132ef0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x132ef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ef4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x132ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132ef8: 0x8f838b2c  lw          $v1, -0x74D4($gp)
    ctx->pc = 0x132ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x132efc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x132EFCu;
    {
        const bool branch_taken_0x132efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EFCu;
        // 0x132f00: 0x30530fff  andi        $s3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132efc) {
            ctx->pc = 0x132F48u;
            return;
        }
    }
    ctx->pc = 0x132F04u;
    // 0x132f04: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x132f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x132f08: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x132f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f0c: 0x8c63026c  lw          $v1, 0x26C($v1)
    ctx->pc = 0x132f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x132f10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x132f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x132f18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x132f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f1c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x132f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f20: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x132f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x132f28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f2c: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x132f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x132f30: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x132F30u;
    SET_GPR_U32(ctx, 31, 0x132F38u);
    ctx->pc = 0x132F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F30u;
    // 0x132f34: 0xaf838b2c  sw          $v1, -0x74D4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x132F30u, 0x132F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F38u;
label_132f38:
    // 0x132f38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x132f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x132f3c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x132F3Cu;
    {
        const bool branch_taken_0x132f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F3Cu;
        // 0x132f40: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f3c) {
            ctx->pc = 0x132F84u;
            return;
        }
    }
    ctx->pc = 0x132F44u;
    // 0x132f44: 0x0  nop
    ctx->pc = 0x132f44u;
    // NOP
    ctx->pc = 0x132f48u;
}
