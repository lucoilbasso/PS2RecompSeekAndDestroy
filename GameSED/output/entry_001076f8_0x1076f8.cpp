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

// Function: entry_001076f8
// Address: 0x1076f8 - 0x107718
void entry_001076f8_0x1076f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001076f8_0x1076f8");
#endif

    switch (ctx->pc) {
        case 0x107710u: goto label_107710;
        default: break;
    }

    ctx->pc = 0x1076f8u;

label_1076f8:
    // 0x1076f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1076f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1076fc:
    // 0x1076fc: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1076fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_107700:
    // 0x107700: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107704:
    // 0x107704: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107708:
    // 0x107708: 0x60f809  jalr        $v1
label_10770c:
    if (ctx->pc == 0x10770Cu) {
        ctx->pc = 0x10770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107708u;
        // 0x10770c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107710u;
        goto label_107710;
    }
    ctx->pc = 0x107708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107710u);
        ctx->pc = 0x10770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107708u;
        // 0x10770c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107708u, 0x107710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107710u;
label_107710:
    // 0x107710: 0x10000036  b           . + 4 + (0x36 << 2)
label_107714:
    if (ctx->pc == 0x107714u) {
        ctx->pc = 0x107714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107710u;
        // 0x107714: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107718u;
        goto label_fallthrough_0x107710;
    }
    ctx->pc = 0x107710u;
    {
        const bool branch_taken_0x107710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107710u;
        // 0x107714: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107710) {
            ctx->pc = 0x1077ECu;
            return;
        }
    }
label_fallthrough_0x107710:
    ctx->pc = 0x107718u;
}
