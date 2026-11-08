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

// Function: entry_00117fd8
// Address: 0x117fd8 - 0x118018
void entry_00117fd8_0x117fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117fd8_0x117fd8");
#endif

    switch (ctx->pc) {
        case 0x117ff0u: goto label_117ff0;
        default: break;
    }

    ctx->pc = 0x117fd8u;

label_117fd8:
    // 0x117fd8: 0x3250ffff  andi        $s0, $s2, 0xFFFF
    ctx->pc = 0x117fd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_117fdc:
    // 0x117fdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x117fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117fe0:
    // 0x117fe0: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x117fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_117fe4:
    // 0x117fe4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x117fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_117fe8:
    // 0x117fe8: 0xc045360  jal         func_114D80
label_117fec:
    if (ctx->pc == 0x117FECu) {
        ctx->pc = 0x117FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FE8u;
        // 0x117fec: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117FF0u;
        goto label_117ff0;
    }
    ctx->pc = 0x117FE8u;
    SET_GPR_U32(ctx, 31, 0x117FF0u);
    ctx->pc = 0x117FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FE8u;
    // 0x117fec: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x117FE8u, 0x117FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FF0u;
label_117ff0:
    // 0x117ff0: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x117ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_117ff4:
    // 0x117ff4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_117ff8:
    if (ctx->pc == 0x117FF8u) {
        ctx->pc = 0x117FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FF4u;
        // 0x117ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117FFCu;
        goto label_117ffc;
    }
    ctx->pc = 0x117FF4u;
    {
        const bool branch_taken_0x117ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FF4u;
        // 0x117ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ff4) {
            ctx->pc = 0x1180C4u;
            return;
        }
    }
    ctx->pc = 0x117FFCu;
label_117ffc:
    // 0x117ffc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x117ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_118000:
    // 0x118000: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x118000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_118004:
    // 0x118004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118008:
    // 0x118008: 0x8c6346c0  lw          $v1, 0x46C0($v1)
    ctx->pc = 0x118008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18112)));
label_11800c:
    // 0x11800c: 0x600008  jr          $v1
label_118010:
    if (ctx->pc == 0x118010u) {
        ctx->pc = 0x118014u;
        goto label_118014;
    }
    ctx->pc = 0x11800Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11800Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118014u;
label_118014:
    // 0x118014: 0x0  nop
    ctx->pc = 0x118014u;
    // NOP
    ctx->pc = 0x118018u;
}
