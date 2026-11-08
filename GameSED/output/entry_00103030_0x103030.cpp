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

// Function: entry_00103030
// Address: 0x103030 - 0x103074
void entry_00103030_0x103030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103030_0x103030");
#endif

    switch (ctx->pc) {
        case 0x103050u: goto label_103050;
        case 0x10306cu: goto label_10306c;
        default: break;
    }

    ctx->pc = 0x103030u;

    // 0x103030: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x103030u;
    {
        const bool branch_taken_0x103030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x103030) {
            ctx->pc = 0x103034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103030u;
            // 0x103034: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103078u;
            return;
        }
    }
    ctx->pc = 0x103038u;
    // 0x103038: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x103038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x10303c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x10303cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x103040: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x103040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103044: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x103044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103048: 0xc04171a  jal         func_105C68
    ctx->pc = 0x103048u;
    SET_GPR_U32(ctx, 31, 0x103050u);
    ctx->pc = 0x10304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103048u;
    // 0x10304c: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x103048u, 0x103050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103050u;
label_103050:
    // 0x103050: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x103050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x103054: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x103054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x103058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10305c: 0x50440006  beql        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10305Cu;
    {
        const bool branch_taken_0x10305c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x10305c) {
            ctx->pc = 0x103060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10305Cu;
            // 0x103060: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103078u;
            return;
        }
    }
    ctx->pc = 0x103064u;
    // 0x103064: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x103064u;
    SET_GPR_U32(ctx, 31, 0x10306Cu);
    ctx->pc = 0x103068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103064u;
    // 0x103068: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x103064u, 0x10306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10306Cu;
label_10306c:
    // 0x10306c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103070: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x103070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x103074u;
}
