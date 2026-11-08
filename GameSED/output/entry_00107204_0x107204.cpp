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

// Function: entry_00107204
// Address: 0x107204 - 0x107230
void entry_00107204_0x107204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107204_0x107204");
#endif

    switch (ctx->pc) {
        case 0x107210u: goto label_107210;
        case 0x107224u: goto label_107224;
        default: break;
    }

    ctx->pc = 0x107204u;

    // 0x107204: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107208: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x107208u;
    SET_GPR_U32(ctx, 31, 0x107210u);
    ctx->pc = 0x10720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107208u;
    // 0x10720c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x107208u, 0x107210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107210u;
label_107210:
    // 0x107210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107214: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x107214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x107218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10721c: 0xc061344  jal         func_184D10
    ctx->pc = 0x10721Cu;
    SET_GPR_U32(ctx, 31, 0x107224u);
    ctx->pc = 0x107220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10721Cu;
    // 0x107220: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D10u, 0x10721Cu, 0x107224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107224u;
label_107224:
    // 0x107224: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x107224u;
    {
        const bool branch_taken_0x107224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107224u;
        // 0x107228: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107224) {
            ctx->pc = 0x1072A0u;
            return;
        }
    }
    ctx->pc = 0x10722Cu;
    // 0x10722c: 0x0  nop
    ctx->pc = 0x10722cu;
    // NOP
    ctx->pc = 0x107230u;
}
